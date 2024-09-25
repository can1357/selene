#include "vm.hpp"
#include <xstd/hashable.hpp>
#include <xstd/small_vector.hpp>
#include <xstd/finally.hpp>
#include "../misc/profiler.hpp"
#include "vdbg.hpp"

/*
 TOOD: what do we do besides BSODing on "invalid" actions?
*/

namespace su
{
	// Emulator options.
	//
	static constexpr bool mem_debug = is_debug_build() && false;
	static constexpr bool jit_debug = is_debug_build() && true;
	static constexpr bool umip_fair = is_debug_build() && false;

	constexpr uint64_t rflags_lahf_mask =
		RFLAGS_ZERO_FLAG_FLAG |
		RFLAGS_SIGN_FLAG_FLAG |
		RFLAGS_CARRY_FLAG_FLAG |
		RFLAGS_PARITY_FLAG_FLAG |
		RFLAGS_AUXILIARY_CARRY_FLAG_FLAG;
	constexpr uint64_t rflags_memop_mask =
		rflags_lahf_mask |
		RFLAGS_DIRECTION_FLAG_FLAG |
		RFLAGS_OVERFLOW_FLAG_FLAG;
	constexpr uint64_t rflags_load_mask_cpl3 =
		rflags_memop_mask |
		RFLAGS_TRAP_FLAG_FLAG |
		RFLAGS_NESTED_TASK_FLAG_FLAG |
		RFLAGS_IDENTIFICATION_FLAG_FLAG;
	constexpr uint64_t rflags_load_mask_cpl0 =
		rflags_load_mask_cpl3 |
		RFLAGS_VIRTUAL_INTERRUPT_PENDING_FLAG_FLAG |
		RFLAGS_VIRTUAL_INTERRUPT_FLAG_FLAG |
		RFLAGS_VIRTUAL_8086_MODE_FLAG_FLAG |
		RFLAGS_RESUME_FLAG_FLAG |
		RFLAGS_INTERRUPT_ENABLE_FLAG_FLAG |
		RFLAGS_IO_PRIVILEGE_LEVEL_FLAG |
		RFLAGS_ALIGNMENT_CHECK_FLAG_FLAG;

	// Implement the runtime.
	//
	namespace jit
	{
		// Common utilities.
		//
		namespace util
		{
			// Map of valid MSRs, any other MSR access will #GP. Any entries we come accross 
			// during tests should be added to this map.
			//
			struct msr_behaviour
			{
				// Mask applied on reads.
				register_mask read = {};

				// Mask silently changing the value on write.
				register_mask write = {};
				
				// Mask injecting #GP(0) if not met on write.
				register_mask write_gp = {};

				// Validate cannonicality.
				bool cannonical = false;
			};
			static const std::unordered_map<uint32_t, msr_behaviour, xstd::hasher<>> msr_map = [ ] ()
			{
				std::unordered_map<uint32_t, msr_behaviour, xstd::hasher<>> result;

				result[ IA32_STAR ] = {};
				result[ IA32_FMASK ] = {};
				result[ IA32_PLATFORM_ID ] = {};
				result[ IA32_TSC_ADJUST ] = {};
				result[ IA32_TSC_DEADLINE ] = {};
				result[ IA32_XSS ] = {};
				result[ IA32_TIME_STAMP_COUNTER ] = {};
				result[ IA32_THREAD_STALL ] = {};
				result[ IA32_THERM_STATUS ] = {};
				result[ IA32_THERM_INTERRUPT ] = {};
				result[ IA32_SYSENTER_CS ] = {};
				result[ IA32_APIC_BASE ] = {};

				// Registers expecting valid addresses.
				//
				result[ IA32_SYSENTER_ESP ] = { .cannonical = true };
				result[ IA32_SYSENTER_EIP ] = { .cannonical = true };
				result[ IA32_LSTAR ] = { .cannonical = true };
				result[ IA32_CSTAR ] = { .cannonical = true };
				result[ IA32_BNDCFGS ] = { .cannonical = true };
				result[ IA32_GS_BASE ] = { .cannonical = true };
				result[ IA32_FS_BASE ] = { .cannonical = true };
				result[ IA32_KERNEL_GS_BASE ] = { .cannonical = true };
				result[ IA32_DS_AREA ] = { .cannonical = true };

				// Exhaustively verified registers.
				//
				result[ IA32_EFER ] = {
					// Mask off SVME on read.
					.read = { 0, EFER_SVME },
					// Inject #GP(0) if setting a reserved bit.
					.write_gp = { EFER_NXE | EFER_LMA, ~( EFER_SCE | EFER_LME | EFER_LMA | EFER_NXE | EFER_LMSLE | EFER_FFXSR | EFER_TCE ) },
				};
				result[ IA32_TSC_AUX ] = { 
					// Inject #GP(0) if high half is not zero.
					.write_gp = { 0, xstd::fill_bits( 32, 32 ) },
				};
				result[ MSR_INTEL_PLATFORM_INFO ] = {
					// Mask off CPUID faulting on read.
					.read = { 0, PLATFORM_INFO_CPUID_FAULTING },
					// Inject #GP(0) when setting any bit.
					.write_gp = { UINT64_MAX, UINT64_MAX },
				};
				result[ MSR_INTEL_MISC_FEATURES_ENABLES ] = {
					// Mask off CPUID faulting on read.
					.read = { 0, MISC_FEATURES_CPUID_FAULTING },
					// Inject #GP(0) when setting any bit.
					.write_gp = { UINT64_MAX, UINT64_MAX },
				};
				result[ IA32_FEATURE_CONTROL ] = {
					// Mask off support for VMX features, and indicate locked.
					.read = { 
						IA32_FEATURE_CONTROL_LOCK_BIT_FLAG, 
						IA32_FEATURE_CONTROL_ENABLE_VMX_INSIDE_SMX_FLAG | IA32_FEATURE_CONTROL_ENABLE_VMX_OUTSIDE_SMX_FLAG 
					},
					// Inject #GP(0) when setting any bit.
					.write_gp = { UINT64_MAX, UINT64_MAX },
				};
				result[ IA32_DEBUG_INTERFACE ] = {
					// Report as disabled and locked.
					.read = { 0, IA32_DEBUG_INTERFACE_LOCK_FLAG },
					// Inject #GP(0) when setting any bit.
					.write_gp = { UINT64_MAX, UINT64_MAX },
				};
				result[ IA32_DEBUGCTL ] = {
					// Inject #GP(0) for setting reserved bits.
					.write_gp = { 0, xstd::fill_bits( 48, 12 ) }
				};

				// Performance / thermal etc.
				//
				result[ IA32_QM_EVTSEL ] = {};
				result[ IA32_QM_CTR ] = {};
				result[ IA32_PQR_ASSOC ] = {};
				result[ IA32_PMC7 ] = {};
				result[ IA32_PMC6 ] = {};
				result[ IA32_PMC5 ] = {};
				result[ IA32_PMC4 ] = {};
				result[ IA32_PMC3 ] = {};
				result[ IA32_PMC2 ] = {};
				result[ IA32_PMC1 ] = {};
				result[ IA32_PMC0 ] = {};
				result[ IA32_PM_ENABLE ] = {};
				result[ IA32_PM_CTL1 ] = {};
				result[ IA32_PLATFORM_ID ] = {};
				result[ IA32_PLATFORM_DCA_CAP ] = {};
				result[ IA32_PKG_HDC_CTL ] = {};
				result[ IA32_PERFEVTSEL3 ] = {};
				result[ IA32_PERFEVTSEL2 ] = {};
				result[ IA32_PERFEVTSEL1 ] = {};
				result[ IA32_PERFEVTSEL0 ] = {};
				result[ IA32_PERF_STATUS ] = {};
				result[ IA32_PERF_GLOBAL_STATUS_SET ] = {};
				result[ IA32_PERF_GLOBAL_STATUS_RESET ] = {};
				result[ IA32_PERF_GLOBAL_STATUS ] = {};
				result[ IA32_PERF_GLOBAL_INUSE ] = {};
				result[ IA32_PERF_GLOBAL_CTRL ] = {};
				result[ IA32_PERF_CTL ] = {};
				result[ IA32_PERF_CAPABILITIES ] = {};
				result[ IA32_PEBS_ENABLE ] = {};
				result[ IA32_PAT ] = {};
				result[ IA32_PACKAGE_THERM_STATUS ] = {};
				result[ IA32_PACKAGE_THERM_INTERRUPT ] = {};
				result[ IA32_P5_MC_TYPE ] = {};
				result[ IA32_P5_MC_ADDR ] = {};
				result[ IA32_ENERGY_PERF_BIAS ] = {};
				result[ IA32_HWP_STATUS ] = {};
				result[ IA32_HWP_REQUEST_PKG ] = {};
				result[ IA32_HWP_REQUEST ] = {};
				result[ IA32_HWP_INTERRUPT ] = {};
				result[ IA32_HWP_CAPABILITIES ] = {};
				result[ IA32_FIXED_CTR2 ] = {};
				result[ IA32_FIXED_CTR1 ] = {};
				result[ IA32_FIXED_CTR0 ] = {};
				result[ IA32_FIXED_CTR_CTRL ] = {};
				result[ IA32_MPERF ] = {};
				result[ IA32_MONITOR_FILTER_LINE_SIZE ] = {};
				result[ IA32_MISC_ENABLE ] = {};
				result[ IA32_L3_QOS_CFG ] = {};
				result[ IA32_L2_QOS_CFG ] = {};
				result[ IA32_DCA_0_CAP ] = {};
				result[ IA32_CPU_DCA_CAP ] = {};
				result[ IA32_CLOCK_MODULATION ] = {};
				result[ IA32_APERF ] = {};
				result[ IA32_A_PMC7 ] = {};
				result[ IA32_A_PMC6 ] = {};
				result[ IA32_A_PMC5 ] = {};
				result[ IA32_A_PMC4 ] = {};
				result[ IA32_A_PMC3 ] = {};
				result[ IA32_A_PMC2 ] = {};
				result[ IA32_A_PMC1 ] = {};

				// MTRRs.
				//
				result[ IA32_MTRR_VARIABLE_COUNT ] = {};
				result[ IA32_MTRR_PHYSMASK9 ] = {};
				result[ IA32_MTRR_PHYSMASK8 ] = {};
				result[ IA32_MTRR_PHYSMASK7 ] = {};
				result[ IA32_MTRR_PHYSMASK6 ] = {};
				result[ IA32_MTRR_PHYSMASK5 ] = {};
				result[ IA32_MTRR_PHYSMASK4 ] = {};
				result[ IA32_MTRR_PHYSMASK3 ] = {};
				result[ IA32_MTRR_PHYSMASK2 ] = {};
				result[ IA32_MTRR_PHYSMASK1 ] = {};
				result[ IA32_MTRR_PHYSMASK0 ] = {};
				result[ IA32_MTRR_PHYSBASE9 ] = {};
				result[ IA32_MTRR_PHYSBASE8 ] = {};
				result[ IA32_MTRR_PHYSBASE7 ] = {};
				result[ IA32_MTRR_PHYSBASE6 ] = {};
				result[ IA32_MTRR_PHYSBASE5 ] = {};
				result[ IA32_MTRR_PHYSBASE4 ] = {};
				result[ IA32_MTRR_PHYSBASE3 ] = {};
				result[ IA32_MTRR_PHYSBASE2 ] = {};
				result[ IA32_MTRR_PHYSBASE1 ] = {};
				result[ IA32_MTRR_PHYSBASE0 ] = {};
				result[ IA32_MTRR_FIX64K_BASE ] = {};
				result[ IA32_MTRR_FIX64K_00000 ] = {};
				result[ IA32_MTRR_FIX4K_F8000 ] = {};
				result[ IA32_MTRR_FIX4K_F0000 ] = {};
				result[ IA32_MTRR_FIX4K_E8000 ] = {};
				result[ IA32_MTRR_FIX4K_E0000 ] = {};
				result[ IA32_MTRR_FIX4K_D8000 ] = {};
				result[ IA32_MTRR_FIX4K_D0000 ] = {};
				result[ IA32_MTRR_FIX4K_C8000 ] = {};
				result[ IA32_MTRR_FIX4K_C0000 ] = {};
				result[ IA32_MTRR_FIX16K_A0000 ] = {};
				result[ IA32_MTRR_FIX16K_80000 ] = {};
				result[ IA32_MTRR_DEF_TYPE ] = {};
				result[ IA32_MTRR_CAPABILITIES ] = {};

				// X2APIC registers.
				//
				result[ IA32_X2APIC_VERSION ] = {};
				result[ IA32_X2APIC_TPR ] = {};
				result[ IA32_X2APIC_TMR7 ] = {};
				result[ IA32_X2APIC_TMR6 ] = {};
				result[ IA32_X2APIC_TMR5 ] = {};
				result[ IA32_X2APIC_TMR4 ] = {};
				result[ IA32_X2APIC_TMR3 ] = {};
				result[ IA32_X2APIC_TMR2 ] = {};
				result[ IA32_X2APIC_TMR1 ] = {};
				result[ IA32_X2APIC_TMR0 ] = {};
				result[ IA32_X2APIC_SIVR ] = {};
				result[ IA32_X2APIC_SELF_IPI ] = {};
				result[ IA32_X2APIC_PPR ] = {};
				result[ IA32_X2APIC_LVT_TIMER ] = {};
				result[ IA32_X2APIC_LVT_THERMAL ] = {};
				result[ IA32_X2APIC_LVT_PMI ] = {};
				result[ IA32_X2APIC_LVT_LINT1 ] = {};
				result[ IA32_X2APIC_LVT_LINT0 ] = {};
				result[ IA32_X2APIC_LVT_ERROR ] = {};
				result[ IA32_X2APIC_LVT_CMCI ] = {};
				result[ IA32_X2APIC_LDR ] = {};
				result[ IA32_X2APIC_ISR7 ] = {};
				result[ IA32_X2APIC_ISR6 ] = {};
				result[ IA32_X2APIC_ISR5 ] = {};
				result[ IA32_X2APIC_ISR4 ] = {};
				result[ IA32_X2APIC_ISR3 ] = {};
				result[ IA32_X2APIC_ISR2 ] = {};
				result[ IA32_X2APIC_ISR1 ] = {};
				result[ IA32_X2APIC_ISR0 ] = {};
				result[ IA32_X2APIC_IRR7 ] = {};
				result[ IA32_X2APIC_IRR6 ] = {};
				result[ IA32_X2APIC_IRR5 ] = {};
				result[ IA32_X2APIC_IRR4 ] = {};
				result[ IA32_X2APIC_IRR3 ] = {};
				result[ IA32_X2APIC_IRR2 ] = {};
				result[ IA32_X2APIC_IRR1 ] = {};
				result[ IA32_X2APIC_IRR0 ] = {};
				result[ IA32_X2APIC_INIT_COUNT ] = {};
				result[ IA32_X2APIC_ICR ] = {};
				result[ IA32_X2APIC_ESR ] = {};
				result[ IA32_X2APIC_EOI ] = {};
				result[ IA32_X2APIC_DIV_CONF ] = {};
				result[ IA32_X2APIC_CUR_COUNT ] = {};
				result[ IA32_X2APIC_APICID ] = {};

				return result;
			}();

			// Automatic timing and exception propagation for lambdas.
			//
			template<typename F>
			FORCE_INLINE static bool execute_as( trapframe* tf, const F& fn )
			{
				if ( auto result = leh::wrap<eh_model>( [ & ] { return tf->vmcs->emu.vpmu.attribute_cycles( fn ); } ); !result ) [[unlikely]]
				{
					// Inject the exception as is.
					//
					tf->vmcs->inject( tf, result.status.arguments.type, result.status.arguments.code, result.status.arguments.fault_address );
					return false;
				}
				else
				{
					return true;
				}
			}

			// Checks whether or not an MSR is related to performance counters.
			//
			static bool is_pmc_msr( uint32_t id )
			{
				return
					( IA32_PERFEVTSEL0 <= id && id <= ( IA32_PERFEVTSEL0 + 7 ) ) ||
					( IA32_PMC0 <= id && id <= ( IA32_PMC0 + 7 ) ) ||
					( IA32_A_PMC0 <= id && id <= ( IA32_A_PMC0 + 7 ) ) ||
					( IA32_FIXED_CTR0 <= id && id <= ( IA32_FIXED_CTR0 + 4 ) ) ||
					( IA32_A_PMC0_AMD <= id && id <= ( IA32_A_PMC0_AMD + 7 ) ) ||
					( IA32_PERFEVTSEL0_AMD <= id && id <= ( IA32_PERFEVTSEL0_AMD + 7 ) ) ||
					id == IA32_PERF_STATUS || id == IA32_PERF_GLOBAL_CTRL ||
					id == IA32_PERF_GLOBAL_INUSE || id == IA32_PERF_GLOBAL_STATUS ||
					id == IA32_PERF_GLOBAL_STATUS_RESET || id == IA32_FIXED_CTR_CTRL;
			}
		};
		#pragma clang attribute push (__attribute__((annotate("apollo.no_stub"), annotate("apollo.no_split"))), apply_to = function)

		// Fixed exception injection.
		//
		template<interrupt_type Int>
		[[gnu::flatten]] static void __cdecl guest_inject( uint64_t error_code )
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->inject( tf, Int, error_code );
		}

		// Actually resumes the guest, this is emitted by the caller so that the caller can 
		// handle non-volatile context changes before starting the resume chain.
		//
		[[gnu::flatten]] static void __cdecl guest_resume()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			if ( vmcs )
				vmcs->resume( tf );
		}

		// Timestamp/Performance counter virtualization.
		//
		[[gnu::flatten]] static void __cdecl guest_rdtsc()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;

			// If privilege level is not appropriate, inject #GP(0) and return.
			//
			if ( ( tf->seg_cs.request_privilege_level & 1 ) && vmcs->guest_cr4.timestamp_disable ) [[unlikely]]
				return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

			// Pass to any relevant extensions.
			//
			xstd::finally _f{ [ & ] { if ( vmcs ) vmcs->emu.vpmu.attribute_cycles( 6 ); } };
			if ( vmcs->emu.vpmu.enabled )
			{
				uint64_t value = vmcs->emu.vpmu.read_vtsc();
				tf->rax = ( uint32_t ) value;
				tf->rdx = ( uint32_t ) ( value >> 32 );
				vmcs->record_checkpoint( tf, xt::builtin_rdtsc, value );
				return;
			}

			// Read and pass the adjusted the timestamp.
			//
			auto tsc = ia32::read_tsc();
			tf->rax = ( uint32_t ) tsc;
			tf->rdx = ( uint32_t ) ( tsc >> 32 );
		}
		[[gnu::flatten]] static void __cdecl guest_rdtscp()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;

			// If privilege level is not appropriate, inject #GP(0) and return.
			//
			if ( ( tf->seg_cs.request_privilege_level & 1 ) && vmcs->guest_cr4.timestamp_disable ) [[unlikely]]
				return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

			// Pass to any relevant extensions.
			//
			xstd::finally _f{ [ & ] { if ( vmcs ) vmcs->emu.vpmu.attribute_cycles( 8 ); } };
			if ( vmcs->emu.vpmu.enabled )
			{
				uint64_t value = vmcs->emu.vpmu.read_vtsc();
				tf->rax = ( uint32_t ) value;
				tf->rdx = ( uint32_t ) ( value >> 32 );
				vmcs->record_checkpoint( tf, xt::builtin_rdtscp, value );
				tf->rcx = vmcs->guest_tsc_aux;
				return;
			}

			// Read and pass the adjusted the timestamp.
			//
			auto [tsc, aux] = ia32::read_tscp();
			tf->rcx = aux;
			tf->rax = ( uint32_t ) tsc;
			tf->rdx = ( uint32_t ) ( tsc >> 32 );
		}
		[[gnu::flatten]] static void __cdecl guest_rdpmc()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			uint32_t pmc_id = ( uint32_t ) tf->rcx;
			vmcs->record_checkpoint( tf, xt::builtin_rdpmc, pmc_id );

			// If privilege level is not appropriate, inject #GP(0) and return.
			//
			if ( ( tf->seg_cs.request_privilege_level & 1 ) && !vmcs->guest_cr4.performance_monitoring_counter_enable ) [[unlikely]]
				return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

			// Pass to any relevant extensions.
			//
			//if ( vmcs->emu.vpmu.handle_rdpmc( tf ) )
			//{
			//	vmcs->emu.vpmu.attribute_cycles( 10 );
			//	return;
			//}
			
			// Read and pass the read value.
			//
			uint64_t value;
			if ( !util::execute_as( tf, [ & ] () { value = ia32::read_pmc( pmc_id ); } ) )
				return;

			// TODO: Remove error, add back VPMU support.
			xstd::warning( "Guest is reading PMC %x!"_es, pmc_id );
			tf->rax = ( uint32_t ) value;
			tf->rdx = ( uint32_t ) ( value >> 32 );
		}

		// Model specific registers.
		//
		[[gnu::flatten]] static void __cdecl guest_rdmsr()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			uint32_t msr_id = ( uint32_t ) tf->rcx;
			vmcs->record_checkpoint( tf, xt::builtin_rdmsr, msr_id );

			// Error on access to PMC MSRs.
			//
			if ( util::is_pmc_msr( msr_id ) )
				xstd::error( "Guest is reading PMC MSR %x!"_es, msr_id );

			// Handle auxiliary TSC field.
			//
			if ( msr_id == IA32_TSC_AUX )
			{
				// Attribute the cycles of an identical operation.
				//
				vmcs->emu.vpmu.attribute_cycles( [ & ] { ia32::read_msr( IA32_TSC_AUX ); } );

				// Write the result and return.
				//
				tf->rax = vmcs->guest_tsc_aux;
				tf->rdx = 0;
				return;
			}

			// Error on access to LBR filter.
			//
			if ( msr_id == IA32_LBR_SELECT || msr_id == IA32_LBR_CTL )
				xstd::error( "Guest is reading LBR filter!"_es );
			
			// Throw a #GP(0) on access to TSX control registers.
			//
			if ( msr_id == IA32_TSX_CTRL || msr_id == IA32_TSX_FORCE_ABORT )
				return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

			// Handle DEBUGCTL.
			//
			if ( msr_id == IA32_DEBUGCTL )
			{
				vmcs->emu.vpmu.attribute_cycles( [ & ] { ia32::read_msr( IA32_DEBUGCTL ); } );
				tf->rax = ( uint32_t ) vmcs->emu.kguest_debugctl;
				tf->rdx = 0;
				return;
			}

			// Debug mode backdoors.
			//
			if constexpr ( is_debug_build() )
			{
				// Memory test interface:
				//
				if ( msr_id == 0xFEED )
				{
					tf->rax = ( uint32_t ) uint64_t( &guest_rdmsr );
					tf->rdx = ( uint32_t ) ( uint64_t( &guest_rdmsr ) >> 32 );
					return;
				}
				else if ( msr_id == 0xFEEE )
				{
					tf->rax = ( uint32_t ) uint64_t( &ki::sw_interrupt_dispatch );
					tf->rdx = ( uint32_t ) ( uint64_t( &ki::sw_interrupt_dispatch ) >> 32 );
					return;
				}
				else if ( msr_id == 0xFEEF )
				{
					tf->rax = ( uint32_t ) uint64_t( mem::get_phys_base() );
					tf->rdx = ( uint32_t ) ( uint64_t( mem::get_phys_base() ) >> 32 );
					return;
				}
			}

			// Pass to any relevant extensions.
			//
			if ( vmcs->emu.vpmu.handle_rdmsr( tf ) )
			{
				vmcs->emu.vpmu.attribute_cycles( 60 );
				return;
			}

			// If MSR is not known, inject #GP(0) and log if we're validating all access.
			//
			util::msr_behaviour msr_behaviour = {};
			if constexpr ( fix_hypervisor_bugs ) {
				auto msr_details = util::msr_map.find( msr_id );
				if ( msr_details == util::msr_map.end() ) [[unlikely]]
					return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );
				msr_behaviour = msr_details->second;
			}

			// Try reading the MSR, inject the exception if it fails.
			//
			uint64_t result = 0;
			if ( !util::execute_as( tf, [ & ] { result = ia32::read_msr( msr_id ); } ) )
				return;

			// Apply the mask.
			//
			result = msr_behaviour.read.apply( result );

			// If IA32_ARCH_CAPABILITIES, mask off ARCH_CAPABILITIES_TSX_CTRL.
			//
			if ( msr_id == IA32_ARCH_CAPABILITIES )
				result &= ~IA32_ARCH_CAPABILITIES_TSX_CTRL_FLAG;

			// Handle special MSRs.
			//
			if ( msr_id == IA32_LSTAR )
				result = vmcs->guest_lstar;
			else if ( msr_id == IA32_CSTAR )
				result = vmcs->guest_cstar;
			else if ( msr_id == IA32_GS_BASE )
				result = tf->gs_base;
			else if ( msr_id == IA32_KERNEL_GS_BASE )
				result = tf->kernel_gs_base;

			// Write the result.
			//
			tf->rax = ( uint32_t ) result;
			tf->rdx = ( uint32_t ) ( result >> 32 );
		}
		[[gnu::flatten]] static void __cdecl guest_wrmsr()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			uint32_t msr_id = ( uint32_t ) tf->rcx;
			uint64_t value = ( tf->rdx << 32 ) | uint32_t( tf->rax );
			vmcs->record_checkpoint( tf, xt::builtin_wrmsr, msr_id, value );

			// Error on access to PMC MSRs.
			//
			if ( util::is_pmc_msr( msr_id ) )
				xstd::error( "Guest is reading PMC MSR %x!"_es, msr_id );

			// Error on access to LBR filter.
			//
			if ( msr_id == IA32_LBR_SELECT || msr_id == IA32_LBR_CTL )
				xstd::error( "Guest is changing the LBR filter!"_es );

			// Handle auxiliary TSC field.
			//
			if ( msr_id == IA32_TSC_AUX )
			{
				// Inject #GP(0) if not 32-bits.
				//
				if ( value & xstd::fill_bits( 32, 32 ) ) [[unlikely]]
					return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );
				
				// Attribute the cycles of an identical operation.
				//
				auto aux = ia32::read_pcid();
				vmcs->emu.vpmu.attribute_cycles( [ & ] { ia32::write_msr( IA32_TSC_AUX, aux ); } );

				// Write the value and return.
				//
				vmcs->guest_tsc_aux = ( uint32_t ) value;
				return;
			}

			// Throw a #GP(0) on access to TSX control registers.
			//
			if ( msr_id == IA32_TSX_CTRL || msr_id == IA32_TSX_FORCE_ABORT )
				return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

			// If MSR is not known, inject #GP(0) and validate/mask the value.
			//
			if constexpr ( fix_hypervisor_bugs ) {
				auto it = util::msr_map.find( msr_id );
				if ( it == util::msr_map.end() ) [[unlikely]]
					return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );
				auto& msr_behaviour = it->second;

				// Validate the value being written.
				//
				if ( value != msr_behaviour.write_gp.apply( value ) ) [[unlikely]]
					return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );
				if ( msr_behaviour.cannonical && !mem::is_cannonical( value ) ) [[unlikely]]
					return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

				// Apply the mask.
				//
				value = msr_behaviour.write.apply( value );
			}

			// Handle special MSRs.
			//
			if ( msr_id == IA32_DEBUGCTL )
			{
				if ( value & xstd::fill_bits( 48, 12 ) ) [[unlikely]]
					return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

				// Add the BTS OFF OS on intel machines.
				//
				uint64_t original_value = value;
				if ( ia32::is_intel() )
					value |= IA32_DEBUGCTL_BTS_OFF_OS_FLAG;
				if ( util::execute_as( tf, [ & ] { ia32::write_msr( IA32_DEBUGCTL, value ); } ) )
				{
					// Save to emulation data on success.
					//
					vmcs->emu.kguest_debugctl = original_value;
				}
			}
			// Handle syscall extension.
			//
			else if ( msr_id == IA32_SYSENTER_EIP || msr_id == IA32_SYSENTER_ESP )
			{
				xstd::error( "Ia32 SYSENTER interface is not allowed."_es );
			}
			else if ( msr_id == IA32_STAR || msr_id == IA32_FMASK )
			{
				xstd::error( "Writes to STAR/FMASK is not allowed."_es );
			}
			else if ( msr_id == IA32_LSTAR || msr_id == IA32_CSTAR )
			{
				// Throw #GP(0) if non-cannonical.
				//
				if ( !mem::is_cannonical( value ) ) [[unlikely]]
					return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

				// Make sure the IRQL is high enough that it does not violate our lazy loads.
				//
				if( tf->rflags.interrupt_enable_flag && vmcs->guest_cr8 < DISPATCH_LEVEL )
					xstd::error( "Writes to LSTAR/CSTAR are not allowed < DISPATCH_LEVEL."_es );

				// Write the value and return.
				//
				vmcs->emu.vpmu.attribute_cycles( 50 );
				if ( msr_id == IA32_LSTAR )
					vmcs->guest_lstar = value;
				else
					vmcs->guest_cstar = value;
			}
			else if ( msr_id == IA32_GS_BASE )
			{
				// Throw #GP(0) if non-cannonical.
				//
				if ( !mem::is_cannonical( value ) ) [[unlikely]]
					return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

				// Write the gsbase.
				//
				vmcs->emu.vpmu.attribute_cycles( 50 );
				tf->gs_base = value;
			}
			else if ( msr_id == IA32_KERNEL_GS_BASE )
			{
				// Throw #GP(0) if non-cannonical.
				//
				if ( !mem::is_cannonical( value ) ) [[unlikely]]
					return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

				// Write the gsbase.
				//
				vmcs->emu.vpmu.attribute_cycles( 50 );
				tf->kernel_gs_base = value;
			}
			// Try writing to the MSR, inject the exception if it fails.
			//
			else
			{
				util::execute_as( tf, [ & ] { ia32::write_msr( msr_id, value ); } );
			}
		}
		[[gnu::flatten]] static uint64_t __cdecl guest_cpuid()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;

			// If querying a hypervisor leaf, make sure it points to an invalid one.
			//
			uint32_t leaf = tf->rax;
			if constexpr ( fix_hypervisor_bugs ) {
				if ( leaf & 0x40000000 )
					leaf = 0xCCCCCCCC;
			}

			// Execute CPUID, attribute the cycles.
			//
			std::array<uint32_t, 4> result = {};
			if constexpr ( fix_hypervisor_bugs )
				result = ia32::query_cpuid( leaf, tf->rcx ), vmcs->emu.vpmu.attribute_cycles( 100 );
			else
				vmcs->emu.vpmu.attribute_cycles( [ & ] { result = ia32::query_cpuid( leaf, tf->rcx ); } );
			
			// If querying processor information, strip hypervisor present, fake thermal information.
			//
			auto& [eax, ebx, ecx, edx] = result;
			if constexpr ( fix_hypervisor_bugs ) {
				if ( leaf == 1 )
					xstd::bit_reset( ecx, 31 );
				if ( leaf == 6 )
					eax = 0x00000EF7, ebx = 0x00000002, ecx = 0x00000009, edx = 0x00000000;
			}

			// Log with the results.
			//
			vmcs->record_checkpoint( tf, xt::builtin_cpuid, tf->rax, tf->rcx, "=>", eax, ebx, ecx, edx );

			// Write the result back.
			//
			tf->rax = eax;
			tf->rcx = ecx;
			tf->rdx = edx;
			return ebx;
		}

		// Processor state.
		//
		[[gnu::flatten]] static void __cdecl guest_cli()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_disable );

			// Clear the IF.
			//
			tf->rflags.interrupt_enable_flag = false;
		}
		[[gnu::flatten]] static void __cdecl guest_sti()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_enable );

			// Set the IF.
			//
			tf->rflags.interrupt_enable_flag = true;
		}
		[[gnu::flatten]] static void __cdecl guest_stac()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_stac );

			// If SMAP not supported, inject #UD:
			//
			if ( !host_has_smap() )
				return vmcs->inject( tf, interrupt_type::invalid_opcode, 0 );

			// Set the AC.
			//
			tf->rflags.alignment_check_flag = true;
		}
		[[gnu::flatten]] static void __cdecl guest_clac()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_clac );

			// If SMAP not supported, inject #UD:
			//
			if ( !host_has_smap() )
				return vmcs->inject( tf, interrupt_type::invalid_opcode, 0 );

			// Clear the AC.
			//
			tf->rflags.alignment_check_flag = false;
		}
		[[gnu::flatten]] static void __cdecl guest_hlt()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_hlt );

			// If guest had interrupts enabled:
			//
			if ( tf->rflags.interrupt_enable_flag )
			{
				// Try emulating it using MWAIT if possible.
				//
				const auto& mwait_flags =             ia32::static_cpuid_s<5, 0, ia32::cpuid_eax_05>.ecx;
				const bool mwait_supports_if_bypass = mwait_flags.enumeration_of_monitor_mwait_extensions && mwait_flags.supports_treating_interrupts_as_break_event_for_mwait;
				if ( mwait_supports_if_bypass )
				{
					vmcs->emu.vpmu.attribute_cycles( [ & ] 
					{ 
						alignas( 64 ) static volatile bool mwait_arena = false;
						
						ia32::monitor( &mwait_arena, 0, 0 );
						ia32::mwait( ia32::mwait_ext_v<true>, ia32::mwait_hint_v<0> );
					} );
					return;
				}
				// Otherwise, return immediately.
				//
				else
				{
					vmcs->emu.vpmu.attribute_cycles( 60 );
					return;
				}
			}

			// Execute hlt, attribute the cycles.
			//
			vmcs->emu.vpmu.attribute_cycles( [ & ] { ia32::halt(); } );
		}

		// Segmentation intrinsics.
		//
		[[gnu::flatten]] static void __cdecl guest_swapgs()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_swapgs );

			// Attribute some cycles.
			//
			vmcs->emu.vpmu.attribute_cycles( 50 );

			// Swap GSBASEs.
			//
			std::swap( tf->gs_base, tf->kernel_gs_base );
		}
		[[gnu::flatten]] static void __cdecl guest_rdgsbase( uint64_t* out )
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_rdgsbase );

			// If not enabled, inject #UD:
			//
			if ( ( tf->seg_cs.request_privilege_level & 1 ) && !vmcs->guest_cr4.fsgsbase_enable ) [[unlikely]]
				return vmcs->inject( tf, interrupt_type::invalid_opcode, 0 );
			
			// Attribute the cycles from a fake rdgsbase.
			//
			vmcs->emu.vpmu.attribute_cycles( [ & ] { ia32::read_gsbase(); } );

			// Read the appropriate segment base, resume the guest.
			//
			*out = tf->gs_base;
		}
		[[gnu::flatten]] static void __cdecl guest_wrgsbase( uint64_t in )
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_wrgsbase, in );

			// If not enabled, inject #UD:
			//
			if ( ( tf->seg_cs.request_privilege_level & 1 ) && !vmcs->guest_cr4.fsgsbase_enable ) [[unlikely]]
				return vmcs->inject( tf, interrupt_type::invalid_opcode, 0 );

			// If non-cannonical, inject #GP(0):
			//
			if ( !mem::is_cannonical( in ) ) [[unlikely]]
				return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

			// Attribute the cycles from a fake wrgsbase.
			//
			auto tmp = ia32::read_gsbase();
			vmcs->emu.vpmu.attribute_cycles( [ & ] { ia32::write_gsbase( tmp ); } );

			// Change the appropriate segment base, resume the guest.
			//
			tf->gs_base = in;
		}
		[[gnu::flatten]] static void __cdecl guest_rdfsbase( uint64_t* out )
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_rdfsbase );

			// If not enabled, inject #UD:
			//
			if ( ( tf->seg_cs.request_privilege_level & 1 ) && !vmcs->guest_cr4.fsgsbase_enable ) [[unlikely]]
				return vmcs->inject( tf, interrupt_type::invalid_opcode, 0 );

			// Execute rdfsbase and attribute the cylces.
			//
			vmcs->emu.vpmu.attribute_cycles( [ & ] { *out = ia32::read_fsbase(); } );
		}
		[[gnu::flatten]] static void __cdecl guest_wrfsbase( uint64_t in )
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_wrfsbase, in );

			// If not enabled, inject #UD:
			//
			if ( ( tf->seg_cs.request_privilege_level & 1 ) && !vmcs->guest_cr4.fsgsbase_enable ) [[unlikely]]
				return vmcs->inject( tf, interrupt_type::invalid_opcode, 0 );

			// If non-cannonical, inject #GP(0):
			//
			if ( !mem::is_cannonical( in ) ) [[unlikely]]
				return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

			// Execute wrfsbase and attribute the cycles.
			//
			vmcs->emu.vpmu.attribute_cycles( [ & ] { ia32::write_fsbase( in ); } );
		}

		// Cache/TLB intrinsics.
		//
		[[gnu::flatten]] static void __cdecl guest_wbnoinvd()
		{
			auto* tf = trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_wbinvd, "no" );

			// Execute wbinvd, attribute the cycles.
			//
			vmcs->emu.vpmu.attribute_cycles( [ & ] { ia32::wbnoinvd(); } );
			vmcs->mm.emu_invpcid( ia32::invpcid_type::global, 0, nullptr );
		}
		[[gnu::flatten]] static void __cdecl guest_wbinvd()
		{
			auto* tf = trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_wbinvd );

			// Execute wbinvd, attribute the cycles.
			//
			vmcs->emu.vpmu.attribute_cycles( [ & ] { ia32::wbinvd(); } );
			vmcs->mm.emu_invpcid( ia32::invpcid_type::global, 0, nullptr );
		}
		[[gnu::flatten]] static void __cdecl guest_invd()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_invd );

			// --- TODO: Not really possible to replicate 1:1 behaviour.
			// Execute wbinvd, attribute the cycles.
			//
			vmcs->emu.vpmu.attribute_cycles( [ & ] { ia32::wbinvd(); } );
			vmcs->mm.emu_invpcid( ia32::invpcid_type::global, 0, nullptr );
		}
		[[gnu::flatten]] static void __cdecl guest_invlpg( const void* m )
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_invlpg, ( uint64_t ) m );
			vmcs->emu.vpmu.attribute_cycles( [ & ] { ia32::invlpg( m ); } );
			vmcs->mm.emu_invlpg( m );
		}
		[[gnu::flatten]] static void __cdecl guest_invpcid( const ia32::invpcid_descriptor* fdesc, ia32::invpcid_type type )
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;

			// Read the descriptor
			//
			ia32::invpcid_descriptor desc;
			if ( vmcs->read_guest( tf, &desc, fdesc, sizeof( desc ) ) )
				return;

			// Record the action.
			//
			vmcs->record_checkpoint( tf, xt::builtin_invpcid, type, desc.pcid, desc.address );

			// Validate the reserved bits.
			//
			if ( desc.rsvd != 0 ) [[unlikely]]
				return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

			// Execute invpcid.
			//
			util::execute_as( tf, [ & ] { ia32::invpcid( type, desc.pcid, desc.address ); } );
			vmcs->mm.emu_invpcid( type, desc.pcid, desc.address );
		}

		// Architectural registers.
		//
		[[gnu::flatten]] static void __cdecl guest_clts()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_clts );

			// Execute clts, attribute the cycles.
			//
			vmcs->emu.vpmu.attribute_cycles( [ & ] { ia32::clts(); } );
		}
		[[gnu::flatten]] static void __cdecl guest_xsetbv()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			uint32_t xcr_id = ( uint32_t ) tf->rcx;
			uint64_t value = ( tf->rdx << 32 ) | uint32_t( tf->rax );
			vmcs->record_checkpoint( tf, xt::builtin_xsetbv, xcr_id, value );

			if constexpr ( fix_hypervisor_bugs ) {
				// If invalid XCR, inject #GP.
				//
				auto max_xcr = ia32::static_cpuid_s<0xD, 1, ia32::cpuid_eax_0d_ecx_01>.eax.supports_xgetbv_with_ecx_1 ? 1u : 0u;
				if ( xcr_id > max_xcr ) [[unlikely]]
					return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

				// If reserved bits are incorrectly set/masked off, inject #GP.
				//
				if ( ( value & 1 ) != 1 || ( value >> 9 ) != 0 ) [[unlikely]]
					return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );
			}
			util::execute_as( tf, [ & ] { ia32::write_xcr<uint64_t>( xcr_id, value ); } );
		}
		[[gnu::flatten]] static void __cdecl guest_set_tr( uint16_t value )
		{
			ia32::segment_selector new_tr{.flags = value };
			
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_ltr, new_tr.flags );

			// Validate the selector.
			//
			if ( new_tr.table != 0 || new_tr.request_privilege_level != 0 )
				return vmcs->inject( tf, interrupt_type::general_protection_fault, new_tr.flags );

			auto* gdt = ( ia32::gdt_entry* ) vmcs->guest_gdtr.base_address;
			auto* limit = gdt + ( ( vmcs->guest_gdtr.limit + 1 ) / sizeof( ia32::gdt_entry ) );
			auto* entry = ( ia32::tss_entry* ) ( gdt + new_tr.index );
			
			if ( &gdt[ new_tr.index ] > limit || entry->avl != 0 || entry->reserved_0 != 0 || entry->reserved_1 != 0 || entry->type != 9 || entry->s )
				return vmcs->inject( tf, interrupt_type::general_protection_fault, new_tr.flags );
			if ( !entry->present )
				return vmcs->inject( tf, interrupt_type::segment_not_present, new_tr.flags );

			// Change the TR and return.
			//
			vmcs->guest_tr = new_tr;
		}
		[[gnu::flatten]] static uint64_t __cdecl guest_get_tr()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			//vmcs->record_checkpoint( tf, xt::builtin_str );

			// If privilege level is not appropriate, inject #GP(0) and return.
			//
			if ( vmcs->guest_cr4.usermode_instruction_prevention && ( tf->seg_cs.request_privilege_level & 1 ) ) [[unlikely]] {
				vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );
				return 0;
			}

			// Write the value.
			//
			if constexpr ( umip_fair ) {
				return ia32::get_tr().flags;
			} else {
				return vmcs->guest_tr.flags;
			}
		}
		[[gnu::flatten]] static void __cdecl guest_set_ldtr( uint16_t value )
		{
			ia32::segment_selector new_ldtr{ .flags = value };
			
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_lldt, new_ldtr.flags );

			// If LDT entry referencing LDT, #GP.
			//
			if ( new_ldtr.table )
				return vmcs->inject( tf, interrupt_type::general_protection_fault, new_ldtr.flags );

			// Resolve the guest GDT entry.
			//
			auto* gdt = ( ia32::gdt_entry* ) vmcs->guest_gdtr.base_address;
			size_t len = size_t( vmcs->guest_gdtr.limit ) + 1;
			size_t off = new_ldtr.index * 8 + sizeof( ia32::ldt_entry );
			if ( len > off )
				return vmcs->inject( tf, interrupt_type::general_protection_fault, new_ldtr.flags );
			
			// Accept it as a valid entry if type is matching or it is the null selector.
			//
			auto* ldt = xstd::ptr_at<ia32::ldt_entry>( gdt, off );
			if ( off )
			{
				if ( !ldt->present )
					return vmcs->inject( tf, interrupt_type::segment_not_present, new_ldtr.flags );
				if ( ldt->type != 2 || ldt->avl != 0 || ldt->reserved_0 != 0 || ldt->reserved_1 != 0 || ldt->s )
					return vmcs->inject( tf, interrupt_type::general_protection_fault, new_ldtr.flags );
			}
			util::execute_as( tf, [ & ] { ia32::set_ldtr( new_ldtr ); } );
		}
		[[gnu::flatten]] static uint64_t __cdecl guest_get_ldtr()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_sldt );

			// If privilege level is not appropriate, inject #GP(0) and return.
			//
			if ( vmcs->guest_cr4.usermode_instruction_prevention && ( tf->seg_cs.request_privilege_level & 1 ) ) [[unlikely]] {
				vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );
				return 0;
			}
			return ia32::get_ldtr().flags;
		}
		template<xed::reg_t Reg>
		[[gnu::flatten]] static void __cdecl guest_get_dtr( ia32::segment_descriptor_register_64* m )
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			if constexpr ( Reg == XED_REG_IDTR )
				vmcs->record_checkpoint( tf, xt::builtin_sidt, ( uint64_t ) m );
			else
				vmcs->record_checkpoint( tf, xt::builtin_sgdt, ( uint64_t ) m );
			
			// If privilege level is not appropriate, inject #GP(0) and return.
			//
			if ( vmcs->guest_cr4.usermode_instruction_prevention && ( tf->seg_cs.request_privilege_level & 1 ) ) [[unlikely]]
				return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

			// Fetch the descriptor.
			//
			union
			{
				ia32::segment_descriptor_register_64 desc;
				ia32::segment_descriptor_register_32 desc_cc;
			};
			if constexpr ( umip_fair ) {
				if constexpr ( Reg == XED_REG_IDTR )
					desc = ia32::read_idtr();
				else
					desc = ia32::read_gdtr();
			} else {
				if constexpr ( Reg == XED_REG_IDTR )
					desc = vmcs->guest_idtr;
				else
					desc = vmcs->guest_gdtr;
			}

			// Write the descriptor into guest memory, if we could not complete it, clear the active trapframe and 
			// return, write_guest will have already injected the #PF for us.
			//
			size_t leftover;
			if ( tf->seg_cs.flags != host_seg_r3_ccode.flags )
				leftover = vmcs->write_guest( tf, m, &desc, sizeof( desc ) ); // Native.
			else
				leftover = vmcs->write_guest( tf, m, &desc_cc, sizeof( desc_cc ) ); // Compat.
			if ( leftover )
				return;
		}
		template<xed::reg_t Reg>
		[[gnu::flatten]] static void __cdecl guest_set_dtr( const ia32::segment_descriptor_register_64* m )
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			if constexpr ( Reg == XED_REG_IDTR )
				vmcs->record_checkpoint( tf, xt::builtin_lidt, ( uint64_t ) m );
			else
				vmcs->record_checkpoint( tf, xt::builtin_lgdt, ( uint64_t ) m );

			// If we could not completely read the value, clear the active trapframe and return,
			// read_guest will have already injected the #PF for us.
			//
			ia32::segment_descriptor_register_64 value;
			if ( vmcs->read_guest( tf, &value, m, sizeof( value ) ) )
				return;

			// Load the descriptor.
			//
			if constexpr ( Reg == XED_REG_GDTR ) {
				vmcs->guest_gdtr = value;
				return;
			}

			vmcs->guest_idtr = value;
			if ( value.base_address != ( uint64_t ) vmcs->kpcr_idtr.base_address ) {
				vmcs->mm.upgrade_policy( plpd::policy::hostile );
			}
		}
		
		template<xed::reg_t Reg>
		[[gnu::flatten]] static void __cdecl guest_set_arch_reg( uint64_t value )
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			switch ( Reg )
			{
				case XED_REG_CR_FIRST ... XED_REG_CR_LAST:
					if ( Reg != XED_REG_CR8 )
						vmcs->record_checkpoint( tf, xt::builtin_writecr, Reg - XED_REG_CR0, value );
					break;
				case XED_REG_DR_FIRST ... XED_REG_DR_LAST:
					vmcs->record_checkpoint( tf, xt::builtin_writedr, Reg - XED_REG_DR0, value );
					break;
				default: break;
			}

			// Write the register.
			//
			switch ( Reg )
			{
				case XED_REG_CR0: util::execute_as( tf, [ & ] { ia32::write_cr0( { .flags = value } ); } ); break;
				case XED_REG_CR2: util::execute_as( tf, [ & ] { ia32::write_cr2( nullptr ); } ); vmcs->guest_cr2 = value; break;
				case XED_REG_CR3: 
				{
					ia32::cr3 cr3{ .flags = value };
					if ( cr3.reserved3 || ( cr3.address_of_page_directory & ~mem::pfn_mask() ) ) [[unlikely]]
						return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

					// If guest is not PCID aware:
					//
					if ( !vmcs->guest_cr4.pcid_enable ) {
						// Check reserved bits.
						//
						if ( cr3.reserved1 || cr3.reserved2 || cr3.preserve_tlb ) [[unlikely]]
							return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );
						
						// PAE attributes require agreeing CR4.
						//
						if ( !vmcs->guest_cr4.physical_address_extension && ( cr3.page_level_cache_disable || cr3.page_level_write_through ) ) [[unlikely]]
							return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

						// If guest is not PGE aware either or if we have PCID enabled, we have to flush all ourselves.
						//
						if ( !vmcs->guest_cr4.page_global_enable ) {
							ia32::flush_tlb();
							vmcs->mm.emu_invpcid( ia32::invpcid_type::global, 0, nullptr );
						} else if ( use_pcid ) {
							ia32::flush_tlb_local();
							vmcs->mm.emu_invpcid( ia32::invpcid_type::local, 0, nullptr );
						}
					} 
					// Otherwise if we're not preserving TLB:
					//
					else if ( !cr3.preserve_tlb ) {
						// Emulate the flush.
						//
						vmcs->mm.emu_invpcid( ia32::invpcid_type::global, 0, nullptr );
						
						// If it's just a flush, execute and return.
						//
						if ( cr3.address_of_page_directory == vmcs->mm.read_guest_cr3().address_of_page_directory ) {
							auto vmm_cr3 = vmcs->mm.get_vmm_cr3();
							vmm_cr3.preserve_tlb = false;
							util::execute_as( tf, [ & ] { ia32::write_cr3( vmm_cr3 ); } );
							return;
						}
					}

					// Swap CR3, raise to hostile.
					//
					cr3 = vmcs->mm.swap( 
						cr3,
						vmcs->mm.is_shared() ? plpd::policy::shared : plpd::policy::hostile,
						{ tf->rip, tf->rsp }
					);
					util::execute_as( tf, [ & ] { ia32::write_cr3( cr3 ); } );
					break;
				}
				case XED_REG_CR4:
				{
					ia32::cr4 cr4{ .flags = value };

					// If switching PCID off:
					//
					if ( vmcs->guest_cr4.pcid_enable && !cr4.pcid_enable ) {
						// Inject #GP(0) if PCID is being used right now.
						//
						auto cr3 = vmcs->mm.read_guest_cr3();
						if ( cr3.pcid )
							return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );
					}

					// If setting reserved bits, inject #GP(0):
					//
					if ( cr4.reserved2 || cr4.reserved1 ) [[unlikely]]
						return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

					// Can't change LA57 after entering long mode.
					//
					if ( cr4.linear_addresses_57_bit != XSTD_IA32_LA57 )
						return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

					// Flags that I can't be arsed to handle:
					//
					if ( cr4.physical_address_extension != vmcs->guest_cr4.physical_address_extension )
						return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

					// Flush TLB if flipping CR4.GE or CR4.PCID.
					//
					if ( vmcs->guest_cr4.page_global_enable != cr4.page_global_enable ||
						  vmcs->guest_cr4.pcid_enable != cr4.pcid_enable ) {
						ia32::flush_tlb();
						vmcs->mm.emu_invpcid( ia32::invpcid_type::global, 0, nullptr );
					}

					// Attribute some cycles.
					//
					vmcs->emu.vpmu.attribute_cycles( 70 );

					// Change the guest Cr4 and break.
					//
					vmcs->set_guest_cr4( cr4 );
					break;
				}
				case XED_REG_CR8: 
				{
					// Inject #GP(0) if setting reserved bits.
					//
					if ( ( value >> 4 ) != 0 ) [[unlikely]]
						return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

					// Update the CR8 and the trapframe value.
					//
					ia32::set_irql( value );
					vmcs->guest_cr8 = value;
					return;
				}

				// Write debug registers as is.
				//
				case XED_REG_DR0:
				case XED_REG_DR1:
				case XED_REG_DR2:
				case XED_REG_DR3:
				{
					// If non-cannonical, inject #GP(0):
					//
					if ( !mem::is_cannonical( value ) ) [[unlikely]]
						return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

					// If virtualized:
					//
					if ( auto* saved = vmcs->active_dbg_save_area ) [[unlikely]] {
						// Handle propagation of DR7.GD.
						//
						if ( saved->dr7.general_detect ) [[unlikely]] {
							auto dr6 = ia32::read_dr6();
							dr6.debug_register_access_detected = true;
							ia32::write_dr6( dr6 );
							return vmcs->inject( tf, interrupt_type::debug );
						}

						// Update the register.
						//
						if ( std::exchange( ( &saved->dr0 )[ Reg - XED_REG_DR0 ], value ) != value )
							su::vdbg::kupdate( vmcs );
						return;
					}

					// Otherwise just write the value.
					//
					if constexpr ( Reg == XED_REG_DR0 ) util::execute_as( tf, [ & ] { ia32::write_dr0( value ); } );
					if constexpr ( Reg == XED_REG_DR1 ) util::execute_as( tf, [ & ] { ia32::write_dr1( value ); } );
					if constexpr ( Reg == XED_REG_DR2 ) util::execute_as( tf, [ & ] { ia32::write_dr2( value ); } );
					if constexpr ( Reg == XED_REG_DR3 ) util::execute_as( tf, [ & ] { ia32::write_dr3( value ); } );
					break;
				}
				case XED_REG_DR4:
				{
					// Inject #UD if DE is enabled.
					//
					if ( vmcs->guest_cr4.debugging_extensions )
						return vmcs->inject( tf, su::interrupt_type::invalid_opcode, 0 );
					[[fallthrough]];
				}
				case XED_REG_DR6:
				{
					// Inject #GP(0) if setting reserved bits.
					//
					if ( ( value >> 32 ) != 0 ) [[unlikely]]
						return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

					// Write the value.
					//
					util::execute_as( tf, [ & ] { ia32::write_dr6( { .flags = value } ); } );
					
					// If virtualized:
					//
					if ( auto* saved = vmcs->active_dbg_save_area ) [[unlikely]] {
						// Handle propagation of DR7.GD.
						//
						if ( saved->dr7.general_detect ) [[unlikely]] {
							auto dr6 = ia32::read_dr6();
							dr6.debug_register_access_detected = true;
							ia32::write_dr6( dr6 );
							return vmcs->inject( tf, interrupt_type::debug );
						}
					}
					break;
				}
				case XED_REG_DR5:
				{
					// Inject #UD if DE is enabled.
					//
					if ( vmcs->guest_cr4.debugging_extensions )
						return vmcs->inject( tf, su::interrupt_type::invalid_opcode, 0 );
					[[fallthrough]];
				}
				case XED_REG_DR7:
				{
					// Inject #GP(0) if setting reserved bits.
					//
					if ( ( value >> 32 ) != 0 || ( value & 0xC000 ) ) [[unlikely]]
						return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );
					value |= 0x400;

					// If virtualized:
					//
					if ( auto* saved = vmcs->active_dbg_save_area ) [[unlikely]] {
						// Handle propagation of DR7.GD.
						//
						if ( saved->dr7.general_detect ) [[unlikely]] {
							auto dr6 = ia32::read_dr6();
							dr6.debug_register_access_detected = true;
							ia32::write_dr6( dr6 );
							saved->dr7.general_detect = false;
							return vmcs->inject( tf, interrupt_type::debug );
						}

						// Update the register.
						//
						saved->dr7.flags = value;
						if ( std::exchange( ( uint64_t& ) saved->dr7, value ) != value )
							su::vdbg::kupdate( vmcs );
						return;
					}

					// Otherwise just write the register.
					//
					util::execute_as( tf, [ & ] { ia32::write_dr7( { .flags = value } ); } );
					break;
				}
				
				// If invalid register specified, inject #UD.
				//
				default:
					return vmcs->inject( tf, interrupt_type::invalid_opcode, 0 );
			}
		}
		template<xed::reg_t Reg>
		[[gnu::flatten]] static void __cdecl guest_get_arch_reg( uint64_t* value )
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			switch ( Reg )
			{
				case XED_REG_CR_FIRST ... XED_REG_CR_LAST:
					if ( Reg != XED_REG_CR8 )
						vmcs->record_checkpoint( tf, xt::builtin_readcr, Reg - XED_REG_CR0 );
					break;
				case XED_REG_DR_FIRST ... XED_REG_DR_LAST:
					vmcs->record_checkpoint( tf, xt::builtin_readdr, Reg - XED_REG_DR0 );
					break;
				default: break;
			}

			// Handle DR7.GD and CR4.DE.
			//
			if constexpr ( Reg == XED_REG_DR4 || Reg == XED_REG_DR5 ) {
				if ( vmcs->guest_cr4.debugging_extensions )
					return vmcs->inject( tf, su::interrupt_type::invalid_opcode, 0 );

				if ( auto* saved = vmcs->active_dbg_save_area ) [[unlikely]] {
					if ( saved->dr7.general_detect ) [[unlikely]] {
						auto dr6 = ia32::read_dr6();
						dr6.debug_register_access_detected = true;
						ia32::write_dr6( dr6 );
						return vmcs->inject( tf, interrupt_type::debug );
					}
				}
			}

			// Read the register.
			//
			vmcs->emu.vpmu.attribute_cycles( 20 );
			switch ( Reg )
			{
				case XED_REG_CR0: *value = ia32::read_cr0().flags; return;
				case XED_REG_CR2: *value = vmcs->guest_cr2; return;
				case XED_REG_CR3: *value = vmcs->mm.read_guest_cr3().flags; return;
				case XED_REG_CR4: *value = vmcs->guest_cr4.flags; return;
				case XED_REG_CR8: *value = vmcs->guest_cr8; return;
				case XED_REG_DR0: *value = vmcs->active_dbg_save_area ? vmcs->active_dbg_save_area->dr0 : ia32::read_dr0().address; return;
				case XED_REG_DR1: *value = vmcs->active_dbg_save_area ? vmcs->active_dbg_save_area->dr1 : ia32::read_dr1().address; return;
				case XED_REG_DR2: *value = vmcs->active_dbg_save_area ? vmcs->active_dbg_save_area->dr2 : ia32::read_dr2().address; return;
				case XED_REG_DR3: *value = vmcs->active_dbg_save_area ? vmcs->active_dbg_save_area->dr3 : ia32::read_dr3().address; return;
				case XED_REG_DR4: [[fallthrough]];
				case XED_REG_DR6: *value = ia32::read_dr6().flags; return;
				case XED_REG_DR5: [[fallthrough]];
				case XED_REG_DR7: *value = vmcs->active_dbg_save_area ? vmcs->active_dbg_save_area->dr7.flags : ia32::read_dr7().flags; return;
				
				// If invalid register specified, inject #UD.
				//
				default:
					return vmcs->inject( tf, interrupt_type::invalid_opcode, 0 );
			}
		}

		// Software interrupts.
		//
		template<bool NoAccessChecks>
		[[gnu::flatten]] static void __cdecl guest_sw_int( interrupt_type type )
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_int, ( uint64_t ) type );
			uint8_t flags = su::int_inject_user_req;
			if constexpr ( NoAccessChecks ) flags |= su::int_inject_no_cpl_check;
			return vmcs->inject( tf, type, 0, nullptr, flags );
		}
		[[gnu::flatten]] static void __cdecl guest_iretq()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_iretq );

			// Read the machine frame.
			//
			mframe_t frame;
			if ( vmcs->read_guest( tf, &frame, tf->rsp, sizeof( mframe_t ) ) )
				return;

			// Intraprivilege IRETQ is not allowed.
			//
			if ( frame.seg_cs.flags != host_seg_r0_code.flags ||
				 ( frame.seg_ss.flags != host_seg_r0_data.flags && frame.seg_ss.flags != 0 ) )
				xstd::error( "Guest is doing intraprivilege IRETQ [SP:%02x:%p, IP:%02x:%p]!"_es, frame.seg_ss.flags, frame.rsp, frame.seg_cs.flags, frame.rip );

			// Inject a #GP(0) if RIP is not cannonical.
			//
			if ( !mem::is_cannonical( frame.rip ) ) [[unlikely]]
				return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

			// Write the new frame.
			//
			tf->rip = frame.rip;
			tf->rsp = frame.rsp;
			tf->rflags = frame.rflags;
		}

		template<bool Compat>
		[[gnu::flatten]] static void __cdecl guest_sysret()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_sysret, Compat );

			// Inject a #UD if syscall EFER.SCE is not set.
			//
			if ( !ia32::read_msr<ia32::efer_register>( IA32_EFER ).syscall_enable ) [[unlikely]]
				return vmcs->inject( tf, interrupt_type::invalid_opcode, 0 );

			// Write the new frame.
			//
			tf->rflags.flags = ( tf->r11 & 0x3C7FD7 ) | 2;
			if constexpr ( Compat )
			{
				tf->rip = ( uint32_t ) tf->rcx;
				tf->seg_cs.flags = vmcs->guest_star >> 48;
				tf->seg_ss.flags = ( vmcs->guest_star >> 48 ) + 0x8;
			}
			else
			{
				// Inject a #GP(0) if the return address is not cannonical.
				//
				if ( !mem::is_cannonical( tf->rcx ) ) [[unlikely]]
					return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );
				tf->rip = tf->rcx;
				tf->seg_cs.flags = ( vmcs->guest_star >> 48 ) + 0x10;
				tf->seg_ss.flags = ( vmcs->guest_star >> 48 ) + 0x8;
			}
			tf->seg_cs.request_privilege_level = 3;
			tf->seg_ss.request_privilege_level = 3;

			// Exit the guest.
			//
			vmcs->exit( tf );
		}
		
		// I/O ports.
		//
		template<typename T>
		[[gnu::flatten]] static void __cdecl guest_out_io( T value, uint16_t address )
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_out, address, value );

			// If privilege level is not appropriate, inject #GP(0) and return.
			//
			if ( ( tf->seg_cs.request_privilege_level & 1 ) && tf->rflags.io_privilege_level != 3 ) [[unlikely]]
				return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

			// Debug mode backdoors.
			//
			if constexpr ( is_debug_build() )
			{
				// Profiling interface:
				//
				if ( address == 0xDEAD )
					return profiler::set_state( value != 0 );
				else if ( address == 0xDEAF )
					return profiler::dump();
				else if ( address == 0xDEEE )
					return profiler::set_threshold( 0, value );
				else if ( address == 0xDEED )
					return profiler::set_threshold( value, 0 );
			}

			// Execute OUT and attribute the cylces.
			//
			vmcs->emu.vpmu.attribute_cycles( [ & ] { ia32::write_io<T>( address, value ); } );
		}
		template<typename T>
		[[gnu::flatten]] static void __cdecl guest_in_io( T* value, uint16_t address )
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_in, address );

			// If privilege level is not appropriate, inject #GP(0) and return.
			//
			if ( ( tf->seg_cs.request_privilege_level & 1 ) && tf->rflags.io_privilege_level != 3 ) [[unlikely]]
				return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

			// Execute IN and attribute the cylces.
			//
			vmcs->emu.vpmu.attribute_cycles( [ & ] { *value = ia32::read_io<T>( address ); } );
		}
		[[gnu::flatten]] static void __cdecl guest_monitor()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_monitor, tf->rax );

			// If non-cannonical, inject #GP(0).
			//
			if ( !mem::is_cannonical( tf->rax ) ) [[unlikely]]
				return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );

			// Execute as is.
			//
			util::execute_as( tf, [ & ] { ia32::monitor( tf->rax, tf->rcx, uint32_t( tf->rdx ) ); } );
		}
		[[gnu::flatten]] static void __cdecl guest_mwait()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_mwait, tf->rcx );

			const auto& mwait_flags = ia32::static_cpuid_s<5, 0, ia32::cpuid_eax_05>.ecx;
			const bool mwait_can_ignore_if = mwait_flags.enumeration_of_monitor_mwait_extensions && mwait_flags.supports_treating_interrupts_as_break_event_for_mwait;

			// Validate MWAIT extensions.
			//
			uint32_t ext = uint32_t( tf->rcx );
			uint32_t allowed_ext = mwait_can_ignore_if ? 1 : 0;
			if ( ext & ~allowed_ext )
				return vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );
				
			// If guest had interrupts enabled:
			//
			if ( tf->rflags.interrupt_enable_flag )
			{
				// If MWAIT supports ignoring IF, set the flag.
				//
				if ( mwait_can_ignore_if )
				{
					ext |= ia32::mwait_ext_v<true>;
				}
				// Otherwise, return immediately.
				//
				else
				{
					vmcs->emu.vpmu.attribute_cycles( 60 );
					return;
				}
			}

			// Execute the mwait.
			//
			util::execute_as( tf, [ & ] { ia32::mwait( ext, uint32_t( tf->rax ) ); } );
		}
		[[gnu::flatten]] static uint64_t __cdecl guest_smsw()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_smsw );

			// If privilege level is not appropriate, inject #GP(0) and return.
			//
			if ( vmcs->guest_cr4.usermode_instruction_prevention && ( tf->seg_cs.request_privilege_level & 1 ) ) [[unlikely]] {
				vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );
				return 0;
			}

			// Attribute some cycles.
			//
			vmcs->emu.vpmu.attribute_cycles( 16 );

			// Return the result.
			//
			return ia32::read_cr0().flags;
		}
		[[gnu::flatten]] static void __cdecl guest_lmsw( uint16_t value )
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_lmsw );

			ia32::cr0 new_value{.flags = value };
			new_value.flags &= 0b1111;
			
			// Execute as is.
			//
			util::execute_as( tf, [ & ] { ia32::lmsw( new_value ); } );
		}

		// VMX/SVM instructions.
		//
		[[gnu::flatten]] static void __cdecl guest_vmm( xed::iclass_t ins )
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			vmcs->record_checkpoint( tf, xt::builtin_vmm, ins );
			vmcs->inject( tf, interrupt_type::invalid_opcode, 0 );
		}

		// Raises an exception.
		//
		[[gnu::flatten]] static void __cdecl guest_throw()
		{
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;
			return vmcs->inject( tf, tf->type, tf->error_code, tf->fault_address );
		}

		// Handles JMP.
		//
		[[gnu::flatten]] static void __cdecl guest_ready_jmp( uint64_t dst ) {
			auto* tf =   trapframe::current();
			auto* vmcs = tf->vmcs;

			// Raise #GP if non-cannonical.
			//
			if ( !mem::is_cannonical( dst ) ) {
				vmcs->inject( tf, interrupt_type::general_protection_fault, 0 );
				return;
			}

			// Set ctx_2.
			//
			tf->ctx_2 = dst;
		}

		// Helpers used in code generation.
		//
		static uint64_t __cdecl offset_by_guest_gsbase( uint64_t v )
		{
			return v + trapframe::current()->gs_base;
		}
		static uint64_t __cdecl offset_by_guest_fsbase( uint64_t v )
		{
			return v + ia32::read_fsbase();
		}
		template<xed::reg_t R>
		[[gnu::flatten]] static uint64_t __cdecl guest_get_sreg()
		{
			auto* tf = trapframe::current();
			auto* vmcs = tf->vmcs;

			uint64_t result;
			switch ( R ) {
				case XED_REG_RFLAGS:
				case XED_REG_EFLAGS:
				case XED_REG_FLAGS:
				{
					vmcs->record_checkpoint( tf, xt::builtin_vmm, "__get_efl" );

					auto flags = tf->rflags;
					if constexpr ( vr0_iopl ) {
						flags.io_privilege_level = 0;
					}
					if ( enable_mtf && vmcs->mtf ) {
						flags.trap_flag = 0;
					}

					if constexpr ( R == XED_REG_FLAGS )       result = ( uint16_t ) flags.flags;
					else if constexpr ( R == XED_REG_EFLAGS ) result = ( uint32_t ) flags.flags;
					else if constexpr ( R == XED_REG_RFLAGS ) result = flags.flags;
					break;
				}
				case XED_REG_CS:
				{
					vmcs->record_checkpoint( tf, xt::builtin_vmm, "__get_cs" );
					result = tf->seg_cs.flags;
					if ( !( tf->seg_cs.request_privilege_level & 1 ) ) {
						result = host_seg_r0_code.flags;
					}
					break;
				}
				case XED_REG_SS:
				{
					vmcs->record_checkpoint( tf, xt::builtin_vmm, "__get_ss" );
					result = tf->seg_ss.flags;
					if ( !( tf->seg_ss.request_privilege_level & 1 ) ) {
						result = host_seg_r0_data.flags;
					}
					break;
				}
				// Don't care.
				case XED_REG_FS:
					vmcs->record_checkpoint( tf, xt::builtin_vmm, "__get_fs" );
					result = ia32::get_fs().flags;
					break;
				case XED_REG_ES:
					vmcs->record_checkpoint( tf, xt::builtin_vmm, "__get_es" );
					result = ia32::get_es().flags;
					break;
				case XED_REG_GS:
					vmcs->record_checkpoint( tf, xt::builtin_vmm, "__get_gs" );
					result = ia32::get_gs().flags;
					break;
				case XED_REG_DS:
					vmcs->record_checkpoint( tf, xt::builtin_vmm, "__get_ds" );
					result = ia32::get_ds().flags;
					break;
			}
			return result;
		}
		template<xed::reg_t R>
		[[gnu::flatten]] static void __cdecl guest_set_sreg( uint64_t value )
		{
			auto* tf = trapframe::current();
			auto* vmcs = tf->vmcs;


			switch ( R ) {
				case XED_REG_FLAGS:
					value = ( uint16_t ) value;
					value |= tf->rflags.flags & 0xFFFFFFFF'FFFFFF00;
					[[fallthrough]];
				case XED_REG_EFLAGS:
					value = ( uint32_t ) value;
					value |= tf->rflags.flags & 0xFFFFFFFF'00000000;
					[[fallthrough]];
				case XED_REG_RFLAGS:
				{
					vmcs->record_checkpoint( tf, xt::builtin_vmm, "__set_efl", value );

					// Apply the appropriate mask and combine.
					//
					auto fl_mask = ( tf->seg_cs.request_privilege_level & 1 ) ? rflags_load_mask_cpl3 : rflags_load_mask_cpl0;
					value &= fl_mask;
					value |= tf->rflags.flags & ~fl_mask;
					tf->rflags.flags = value;
					break;
				}
				case XED_REG_CS:
					vmcs->record_checkpoint( tf, xt::builtin_vmm, "__set_cs" );
					util::execute_as( tf, [ & ] { ia32::set_cs( { .flags = ( uint16_t ) value } ); } );
					break;
				case XED_REG_SS:
					vmcs->record_checkpoint( tf, xt::builtin_vmm, "__set_ss" );
					util::execute_as( tf, [ & ] { ia32::set_ss( { .flags = ( uint16_t ) value } ); } );
					break;
				case XED_REG_FS:
					vmcs->record_checkpoint( tf, xt::builtin_vmm, "__set_fs" );
					util::execute_as( tf, [ & ] { ia32::set_fs( { .flags = ( uint16_t ) value } ); } );
					break;
				case XED_REG_ES:
					vmcs->record_checkpoint( tf, xt::builtin_vmm, "__set_es" );
					util::execute_as( tf, [ & ] { ia32::set_es( { .flags = ( uint16_t ) value } ); } );
					break;
				case XED_REG_GS:
					vmcs->record_checkpoint( tf, xt::builtin_vmm, "__set_gs" );
					util::execute_as( tf, [ & ] { ia32::set_gs( { .flags = ( uint16_t ) value } ); } );
					break;
				case XED_REG_DS:
					vmcs->record_checkpoint( tf, xt::builtin_vmm, "__set_ds" );
					util::execute_as( tf, [ & ] { ia32::set_ds( { .flags = ( uint16_t ) value } ); } );
					break;
			}
		}
		template<bool IsWrite>
		[[gnu::flatten]] static void __cdecl guest_mem_rw( void* ptr, uint32_t n, bool )
		{
			// Pass to guest if relevant.
			//
			auto* tf = trapframe::current();
			if ( tf->ctx_0 ) [[unlikely]] {
				[[clang::musttail]] return ( ( decltype( &guest_mem_rw<IsWrite> ) ) tf->ctx_0 )( ptr, n, IsWrite );
			}
				
			auto print_data = [ & ]( const char* pfx, const void* ptr ) FORCE_INLINE {
				if ( n == 1 ) return xstd::log( " - %s: %02x\n", pfx, ( uint32_t ) * ( uint8_t* ) ptr );
				if ( n == 2 ) return xstd::log( " - %s: %04x\n", pfx, ( uint32_t ) * ( uint16_t* ) ptr );
				if ( n == 4 ) return xstd::log( " - %s: %08x\n", pfx, ( uint32_t ) * ( uint32_t* ) ptr );
				if ( n == 8 ) return xstd::log( " - %s: %16llx\n", pfx, ( uint64_t ) * ( uint64_t* ) ptr );
				return xstd::log( " - %s: %.*H\n", pfx, n, ptr );
			};
			auto print_va = [ & ]() FORCE_INLINE {
				xstd::log( " - VA.Name:  %s\n", mem::va_name( ptr ).c_str() );
				xstd::log( " - VA.Flags: 0x%x\n", ( uint32_t ) mem::lookup_va_flags( ptr ) );
				xstd::log( " - VA.Type:  0x%x\n", ( uint32_t ) mem::lookup_va_type( ptr ) );
			};

			// Emulate write.
			//
			if constexpr ( IsWrite ) {
				size_t l = tf->vmcs->write_guest( tf, ptr, tf->temp, n );
				if constexpr ( mem_debug ) {
					auto rv = safe::read<std::array<uint8_t, 32>>( ptr );
					if ( rv ) {
						xstd::log( "%p: Spoofed write: %p (%d, %d left)\n", tf->rip, ptr, n, l );
						print_va();
						print_data( "Data.Fin", tf->temp );
					} else {
						xstd::log( "%p: Spoofed write: %p (%d, %d left), cant even read.\n", tf->rip, ptr, n, l );
						print_va();
						print_data( "Data.Fin", tf->temp );
					}
				}
			}
			// Emulate read.
			//
			else {
				size_t l = tf->vmcs->read_guest( tf, tf->temp, ptr, n );
				if constexpr ( mem_debug ) {
					auto rv = safe::read<std::array<uint8_t, 32>>( ptr );
					if ( rv ) {
						xstd::log( "%p: Spoofed read: %p (%d, %d left)\n", tf->rip, ptr, n, l );
						print_va();
						print_data( "Data.Read", tf->temp );
						print_data( "Data.Real", rv->data() );
					} else {
						xstd::log( "%p: Spoofed read: %p (%d, %d left), cant even read.\n", tf->rip, ptr, n, l );
						print_va();
						print_data( "Data.Read", tf->temp );
					}
				}
			}
		}

		#pragma clang attribute pop
	};

	// Code generator.
	//
	struct codegen {
		// Destination.
		//
		emu_context::handler* ins;

		// Relevant instruction.
		//
		const xed::decoding& decoding;

		// Execution state.
		//
		uint16_t             cpl;
		bool                 is_legacy;
		interrupt_type       origin_exception;

		// Annotations.
		//
		xstd::small_vector<std::pair<size_t, std::string_view>, jit_debug ? 32 : 1> annotations = {};

		// Inserts bytes/encoding to the codegen.
		//
		FORCE_INLINE void insert( std::span<const uint8_t> data, std::string_view annotation = {} ) {
			size_t n = ins->program.size();
			if ( !ins->program.insert( ins->program.end(), data.begin(), data.end() ) ) {
				xstd::error( "Handler capacity is reached."_es );
			}
			if constexpr ( jit_debug ) {
				if ( !annotation.empty() )
					annotations.emplace_back( n, annotation );
			}
		}
		NO_INLINE void insert( xed::encoding&& enc, std::string_view annotation = {} ) {
			auto bytes = enc.encode();
			if ( !bytes ) {
				xstd::error( "Failed encoding ISR instruction: %s | %s."_es, enc, bytes.message() );
			}
			return insert( *bytes, annotation );
		}

		// Assembles a new instruction.
		//
		NO_INLINE void vassemble( xed::iclass_t icl, std::initializer_list<xed_encoder_operand_t> ops ) {
			insert( xed::vencode64( icl, ops ) );
		}
		template<typename... Tx>
		FORCE_INLINE void assemble( xed::iclass_t icl, const Tx&... ops ) {
			vassemble( icl, { ops... } );
		}

		// Trapframe references.
		//
		template<typename T = size_t>
		FORCE_INLINE static xed::mem ref_tf( T offset, size_t size = 0 ) {
			if constexpr ( xstd::Integral<T> )
				return xed::mem{ bitcnt_t( size * 8 ), XED_REG_RSP, offset };
			else
				return xed::mem{ bitcnt_t( size ? size * 8 : xstd::member_size( offset ) * 8 ), XED_REG_RSP, xed::disp{ offset } };
		}
		FORCE_INLINE static xed::mem ref_tmp( size_t size ) {
			return ref_tf( &trapframe::temp, size );
		}
		FORCE_INLINE static std::pair<xed::encoder_operand, bitcnt_t> ref_gp( xed::reg_t reg ) {
			if ( xed::is_zmm( reg ) ) {
				reg = xed::reg_t( reg - XED_REG_ZMM0 + XED_REG_YMM0 );
			}
			auto [tf_off, reg_off, reg_sz] = xed_to_tf( reg );
			if ( tf_off ) {
				return std::pair{ ref_tf( tf_off + reg_off, reg_sz ), reg_sz * 8 };
			} else {
				if ( xed::is_xmm( reg ) )
					return std::pair{ xed::reg{ xed::reg_t( reg - XED_REG_XMM0 + XED_REG_YMM0 ) }, 128 };
				if ( xed::is_ymm( reg ) )
					return std::pair{ xed::reg{ reg }, 256 };
				auto [base, soff, ssz] = xed::resolve_mapping( reg );
				return std::pair{ xed::reg{ reg }, ssz * 8 };
			}
		}
		
		// Utils.
		//
		FORCE_INLINE static constexpr xed::reg_t to_zmm( xed::reg_t r ) { return xed::reg_t( XED_REG_ZMM0 + ( ( r - XED_REG_XMM0 ) & 31 ) ); }
		FORCE_INLINE static constexpr xed::reg_t to_ymm( xed::reg_t r ) { return xed::reg_t( XED_REG_YMM0 + ( ( r - XED_REG_XMM0 ) & 31 ) ); }
		FORCE_INLINE static constexpr xed::reg_t to_xmm( xed::reg_t r ) { return xed::reg_t( XED_REG_XMM0 + ( ( r - XED_REG_XMM0 ) & 31 ) ); }
		FORCE_INLINE static constexpr bool is_special( xed::reg_t r ) { return xed::is_segment_selector( r ) || xed::is_flags( r ) || r == XED_REG_LDTR || r == XED_REG_TR; }

		// Register management.
		//
		FORCE_INLINE void move_gpr2gpr( xed::reg_t dst, xed::reg_t src ) {
			if ( src == dst ) return;
			size_t sw = xed::register_width( src );
			size_t dw = xed::register_width( dst );
			xed::iclass_t icl = XED_ICLASS_MOV;

			// If extending:
			if ( dw > sw ) {
				// If extending into 64, remap to 32.
				if ( dw == 8 ) {
					dst = xed::remap_register( dst, 0, 4 );
					dw = 4;
				}
				// If still extending, use MOVZX.
				if ( dw > sw ) {
					icl = XED_ICLASS_MOVZX;
				}
			}
			// If shrinking, remap.
			//
			else if ( dw < sw ) {
				src = xed::remap_register( src, 0, dw );
			}
			if ( src == dst && dw != 4 ) return;
			assemble( icl, xed::reg{ dst }, xed::reg{ src } );
		}
		FORCE_INLINE void move_vec2vec( xed::reg_t dst, xed::reg_t src ) {
			if ( src == dst ) return;

			// Fix sizes.
			//
			if ( xed::is_ymm( dst ) ) {
				if ( xed::is_ymm( src ) ) {
					// ymm -> ymm
					assemble( XED_ICLASS_VMOVUPS, xed::reg{ dst }, xed::reg{ src } );
				} else if ( xed::is_xmm( src ) ) {
					// xmm -> ymm
					assemble( XED_ICLASS_VMOVUPS, xed::reg{ to_xmm( dst ) }, xed::reg{ src });
				} else {
					// zmm -> ymm
					assemble( XED_ICLASS_VMOVUPS, xed::reg{ dst }, xed::reg{ to_ymm( src ) } );
				}
			} else if ( xed::is_xmm( dst ) ) {
				// xmm -> xmm
				assemble( XED_ICLASS_MOVUPS, xed::reg{ dst }, xed::reg{ to_xmm( src ) } );
			} else if ( xed::is_zmm( dst ) ) {
				if ( xed::is_zmm( src ) ) {
					// zmm -> zmm
					assemble( XED_ICLASS_VMOVUPS, xed::reg{ dst }, xed::reg{ src } );
				} else if ( xed::is_ymm( src ) ) {
					// ymm -> zmm
					assemble( XED_ICLASS_VMOVUPS, xed::reg{ to_ymm( dst ) }, xed::reg{ src } );
				} else {
					// xmm -> zmm
					assemble( XED_ICLASS_VMOVUPS, xed::reg{ to_xmm( dst ) }, xed::reg{ src } );
				}
			}
		}
		FORCE_INLINE void move_gpr2spc( xed::reg_t dst, xed::reg_t src ) {
			switch ( dst ) {
				case XED_REG_CS:     move_gpr2gpr( XED_REG_CX, src );  call<&jit::guest_set_sreg<XED_REG_CS>>();     break;
				case XED_REG_SS:     move_gpr2gpr( XED_REG_CX, src );  call<&jit::guest_set_sreg<XED_REG_SS>>();     break;
				case XED_REG_FS:     move_gpr2gpr( XED_REG_CX, src );  call<&jit::guest_set_sreg<XED_REG_FS>>();     break;
				case XED_REG_GS:     move_gpr2gpr( XED_REG_CX, src );  call<&jit::guest_set_sreg<XED_REG_GS>>();     break;
				case XED_REG_ES:     move_gpr2gpr( XED_REG_CX, src );  call<&jit::guest_set_sreg<XED_REG_ES>>();     break;
				case XED_REG_DS:     move_gpr2gpr( XED_REG_CX, src );  call<&jit::guest_set_sreg<XED_REG_DS>>();     break;
				case XED_REG_RFLAGS: move_gpr2gpr( XED_REG_RCX, src ); call<&jit::guest_set_sreg<XED_REG_RFLAGS>>(); break;
				case XED_REG_EFLAGS: move_gpr2gpr( XED_REG_ECX, src ); call<&jit::guest_set_sreg<XED_REG_EFLAGS>>(); break;
				case XED_REG_FLAGS:  move_gpr2gpr( XED_REG_CX, src );  call<&jit::guest_set_sreg<XED_REG_FLAGS>>();  break;
				case XED_REG_LDTR:   move_gpr2gpr( XED_REG_CX, src );  call<&jit::guest_set_ldtr>();                 break;
				case XED_REG_TR:     move_gpr2gpr( XED_REG_CX, src );  call<&jit::guest_set_tr>();                   break;
				default: unreachable_s();
			}
		}
		FORCE_INLINE void move_spc2gpr( xed::reg_t dst, xed::reg_t src ) {
			switch ( src ) {
				case XED_REG_CS:     call<&jit::guest_get_sreg<XED_REG_CS>>();     move_gpr2gpr( dst, XED_REG_AX );  break;
				case XED_REG_SS:     call<&jit::guest_get_sreg<XED_REG_SS>>();     move_gpr2gpr( dst, XED_REG_AX );  break;
				case XED_REG_FS:     call<&jit::guest_get_sreg<XED_REG_FS>>();     move_gpr2gpr( dst, XED_REG_AX );  break;
				case XED_REG_GS:     call<&jit::guest_get_sreg<XED_REG_GS>>();     move_gpr2gpr( dst, XED_REG_AX );  break;
				case XED_REG_ES:     call<&jit::guest_get_sreg<XED_REG_ES>>();     move_gpr2gpr( dst, XED_REG_AX );  break;
				case XED_REG_DS:     call<&jit::guest_get_sreg<XED_REG_DS>>();     move_gpr2gpr( dst, XED_REG_AX );  break;
				case XED_REG_RFLAGS: call<&jit::guest_get_sreg<XED_REG_RFLAGS>>(); move_gpr2gpr( dst, XED_REG_RAX ); break;
				case XED_REG_EFLAGS: call<&jit::guest_get_sreg<XED_REG_EFLAGS>>(); move_gpr2gpr( dst, XED_REG_EAX ); break;
				case XED_REG_FLAGS:  call<&jit::guest_get_sreg<XED_REG_FLAGS>>();  move_gpr2gpr( dst, XED_REG_AX );  break;
				case XED_REG_LDTR:   call<&jit::guest_get_ldtr>();                 move_gpr2gpr( dst, XED_REG_AX );  break;
				case XED_REG_TR:     call<&jit::guest_get_tr>();                   move_gpr2gpr( dst, XED_REG_AX );  break;
				default: unreachable_s();
			}
		}
		FORCE_INLINE void move_gpr2vec( xed::reg_t dst, xed::reg_t src ) {
			if ( auto w = xed::register_width( src ); w <= 4 ) {
				if ( w != 4 ) {
					auto src4 = xed::remap_register( src, 0, 4 );
					assemble( XED_ICLASS_MOVZX, xed::reg{ src4 }, xed::reg{ src } );
					src = src4;
				}
				assemble( XED_ICLASS_VMOVD, xed::reg{ to_xmm( dst ) }, xed::reg{ src } );
			} else {
				assemble( XED_ICLASS_VMOVQ, xed::reg{ to_xmm( dst ) }, xed::reg{ src } );
			}
		}
		FORCE_INLINE void move_vec2gpr( xed::reg_t dst, xed::reg_t src ) {
			if ( auto w = xed::register_width( dst ); w <= 4 ) {
				auto dst4 = w == 4 ? dst : xed::remap_register( dst, 0, 4 );
				assemble( XED_ICLASS_VMOVD, xed::reg{ dst4 }, xed::reg{ to_xmm( src ) } );
				if ( w == 1 && xed::is_gpr8h( dst ) ) {
					assemble( XED_ICLASS_MOV, xed::reg{ dst }, xed::reg{ xed::remap_register( dst, 0, 1 ) } );
				}
			} else {
				assemble( XED_ICLASS_VMOVQ, xed::reg{ dst }, xed::reg{ to_xmm( src ) } );
			}
		}
		FORCE_INLINE void zero_gpr( xed::reg_t dst ) {
			if ( xed::is_gpr64( dst ) ) {
				dst = xed::remap_register( dst, 0, 4 );
			}
			assemble( XED_ICLASS_XOR, xed::reg{ dst }, xed::reg{ dst } );
		}
		FORCE_INLINE void zero_vec( xed::reg_t dst ) {
			if ( xed::is_xmm( dst ) ) {
				assemble( XED_ICLASS_PXOR, xed::reg{ dst }, xed::reg{ dst } );
			} else {
				assemble( XED_ICLASS_VPXOR, xed::reg{ dst }, xed::reg{ dst }, xed::reg{ dst } );
			}
		}

		// Final move wrapper.
		//
		FORCE_INLINE void move( xed::reg_t dst, xed::reg_t src ) {
			// REG -> GPR.
			//
			if ( xed::is_gpr( dst ) ) {
				if ( xed::is_gpr( src ) )
					return move_gpr2gpr( dst, src );
				else if ( xed::is_vector( src ) )
					return move_vec2gpr( dst, src );
				else
					return move_spc2gpr( dst, src );
			}
			
			// REG -> VEC.
			//
			if ( xed::is_vector( dst ) ) {
				if ( xed::is_gpr( src ) )
					return move_gpr2vec( dst, src );
				else if ( xed::is_vector( src ) )
					return move_vec2vec( dst, src );
				unreachable_s();
			}
			
			// REG -> SPC.
			//
			dassert( xed::is_gpr( src ) );
			return move_gpr2spc( dst, src );
		}
		FORCE_INLINE void move( xed::reg_t dst, int64_t imm ) {
			// IMM -> GPR.
			//
			if ( xed::is_gpr( dst ) ) {
				if ( !imm ) return zero_gpr( dst );
				if ( xed::is_gpr64( dst ) ) {
					assemble( XED_ICLASS_MOV, xed::reg{ dst }, xed::imm0{ imm, { 32, 64 } } );
				} else if ( xed::is_gpr32( dst ) ) {
					assemble( XED_ICLASS_MOV, xed::reg{ dst }, xed::imm0{ imm, 32 } );
				} else if ( xed::is_gpr16( dst ) ) {
					assemble( XED_ICLASS_MOV, xed::reg{ dst }, xed::imm0{ imm, 16 } );
				} else {
					assemble( XED_ICLASS_MOV, xed::reg{ dst }, xed::imm0{ imm, 8 } );
				}
				return;
			}
			// IMM -> VEC.
			//
			else if ( xed::is_vector( dst ) ) {
				if ( !imm ) return zero_vec( dst );
				assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_RAX }, xed::imm0{ imm } );
				if ( xed::is_xmm( dst ) )
					assemble( XED_ICLASS_MOVQ, xed::reg{ dst }, xed::reg{ XED_REG_RAX } );
				else
					assemble( XED_ICLASS_VMOVQ, xed::reg{ to_xmm( dst ) }, xed::reg{ XED_REG_RAX } );
			}
			// IMM -> SPC.
			//
			else {
				move( XED_REG_RAX, imm );
				move( dst, XED_REG_RAX );
			}
		}
		FORCE_INLINE void move( xed::reg_t dst, xed::mem src ) {
			// MEM -> GPR.
			//
			if ( xed::is_gpr( dst ) ) {
				// Forward implicit ZX into 32.
				//
				if ( xed::is_gpr64( dst ) && src.width() <= 4 ) {
					dst = xed::remap_register( dst, 0, 4 );
				}

				// ZX:
				if ( size_t w = xed::register_width( dst ); w > src.width() ) {
					assemble( XED_ICLASS_MOVZX, xed::reg{ dst }, src );
				} 
				// Shrink or equal:
				else {
					src.set_width( w );
					assemble( XED_ICLASS_MOV, xed::reg{ dst }, src );
				} 
				return;
			}
			// MEM -> VEC.
			//
			else if ( xed::is_vector( dst ) ) {
				size_t rw = 16;
				if ( xed::is_ymm( dst ) )      rw = 32;
				else if ( xed::is_zmm( dst ) ) rw = 64;
				if ( src.width() > rw ) {
					src.set_width( rw );
				}

				switch ( src.width() ) {
					// Move via GPR.
					case 1:
					case 2: {
						move( XED_REG_RAX, src );
						move( dst, XED_REG_RAX );
						return;
					}
					// MOVD
					case 4: {
						if ( xed::is_xmm( dst ) ) {
							assemble( XED_ICLASS_MOVD, xed::reg{ dst }, src );
						} else {
							assemble( XED_ICLASS_VMOVD, xed::reg{ to_xmm( dst ) }, src );
						}
						return;
					}
					// MOVQ
					case 8: {
						if ( xed::is_xmm( dst ) ) {
							assemble( XED_ICLASS_MOVQ, xed::reg{ dst }, src );
						} else {
							assemble( XED_ICLASS_VMOVQ, xed::reg{ to_xmm( dst ) }, src );
						}
						return;
					}
					// MOVUPS XMM
					case 16: {
						if ( xed::is_xmm( dst ) ) {
							assemble( XED_ICLASS_MOVUPS, xed::reg{ dst }, src );
						} else {
							assemble( XED_ICLASS_VMOVUPS, xed::reg{ to_xmm( dst ) }, src );
						}
						return;
					}
					// MOVUPS YMM
					case 32: {
						assemble( XED_ICLASS_VMOVUPS, xed::reg{ to_ymm( dst ) }, src );
						return;
					}
					// MOVUPS ZMM
					case 64: {
						assemble( XED_ICLASS_VMOVUPS, xed::reg{ to_zmm( dst ) }, src );
						return;
					}
					default:
						unreachable_s();
						break;
				}
			}
			// MEM -> SPC.
			//
			else {
				move( XED_REG_RAX, src );
				move( dst, XED_REG_RAX );
			}
		}
		FORCE_INLINE void move( xed::reg_t dst, xed::encoder_operand src ) {
			if ( xed::reg::cast( &src ) ) {
				move( dst, src.u.reg );
			} else if ( auto p = xed::mem::cast( &src ) ) {
				move( dst, *( xed::mem* ) p );
			} else if ( auto p = xed::imm0::cast( &src ) ) {
				move( dst, ( ( xed::imm0* ) p )->value() );
			} else if ( auto p = xed::imm1::cast( &src ) ) {
				move( dst, ( ( xed::imm1* ) p )->value() );
			} else if ( auto p = xed::imm0u::cast( &src ) ) {
				move( dst, ( ( xed::imm0u* ) p )->value() );
			} else {
				unreachable_s();
			}
		}
		FORCE_INLINE void move( xed::mem dst, xed::reg_t src ) {
			// GPR -> MEM.
			//
			if ( xed::is_gpr( src ) ) {
				switch ( dst.width() ) {
					case 1: {
						if ( xed::is_gpr8( src ) ) {
							return assemble( XED_ICLASS_MOV, dst, xed::reg{ src } );
						}
						auto tmp = xed::remap_register( src, 0, 1 );
						move_gpr2gpr( tmp, src );
						return assemble( XED_ICLASS_MOV, dst, xed::reg{ tmp } );
					}
					case 2: {
						if ( xed::is_gpr16( src ) ) {
							return assemble( XED_ICLASS_MOV, dst, xed::reg{ src } );
						}
						return assemble( XED_ICLASS_MOV, dst, xed::reg{ xed::remap_register( src, 0, 2 ) } );
					}
					case 4: {
						if ( xed::is_gpr32( src ) ) {
							return assemble( XED_ICLASS_MOV, dst, xed::reg{ src } );
						}
						return assemble( XED_ICLASS_MOV, dst, xed::reg{ xed::remap_register( src, 0, 4 ) } );
					}
					case 8: {
						if ( xed::is_gpr64( src ) ) {
							return assemble( XED_ICLASS_MOV, dst, xed::reg{ src } );
						}
						return assemble( XED_ICLASS_MOV, dst, xed::reg{ xed::remap_register( src, 0, 8 ) } );
					}
					default:
						unreachable_s();
				}
			}
			// VEC -> MEM.
			//
			else if ( xed::is_vector( src ) ) {
				switch ( dst.width() ) {
					// Move via GPR.
					case 1: {
						move( XED_REG_EAX, src );
						move( dst, XED_REG_AL );
						return;
					}
					case 2: {
						move( XED_REG_EAX, src );
						move( dst, XED_REG_AX );
						return;
					}
					// MOVD
					case 4: {
						assemble( XED_ICLASS_VMOVD, dst, xed::reg{ to_xmm( src ) } );
						return;
					}
					// MOVQ
					case 8: {
						assemble( XED_ICLASS_VMOVQ, dst, xed::reg{ to_xmm( src ) } );
						return;
					}
					// MOVUPS XMM
					case 16: {
						assemble( XED_ICLASS_VMOVUPS, dst, xed::reg{ to_xmm( src ) } );
						return;
					}
					// MOVUPS YMM
					case 32: {
						assemble( XED_ICLASS_VMOVUPS, dst, xed::reg{ to_ymm( src ) } );
						return;
					}
					// MOVUPS ZMM
					case 64: {
						assemble( XED_ICLASS_VMOVUPS, dst, xed::reg{ to_zmm( src ) } );
						return;
					}
					default:
						unreachable_s();
						break;
				}
			}
			// SPC -> MEM.
			//
			else {
				move( XED_REG_RAX, src );
				move( dst, XED_REG_RAX );
			}
		}
		FORCE_INLINE void move( xed::mem dst, xed::mem src ) {
			if ( dst.width() <= 8 ) {
				move( XED_REG_RAX, src );
				move( dst, XED_REG_RAX );
			} else {
				move( XED_REG_YMM0, src );
				move( dst, XED_REG_YMM0 );
			}
		}
		FORCE_INLINE void move( xed::mem dst, int64_t imm ) {
			move( XED_REG_R9, imm );
			move( dst, XED_REG_R9 );
		}
		FORCE_INLINE void move( xed::mem dst, xed::encoder_operand src ) {
			if ( xed::reg::cast( &src ) ) {
				move( dst, src.u.reg );
			} else if ( auto p = xed::mem::cast( &src ) ) {
				move( dst, *( xed::mem* ) p );
			} else if ( auto p = xed::imm0::cast( &src ) ) {
				move( dst, ( ( xed::imm0* ) p )->value() );
			} else if ( auto p = xed::imm1::cast( &src ) ) {
				move( dst, ( ( xed::imm1* ) p )->value() );
			} else if ( auto p = xed::imm0u::cast( &src ) ) {
				move( dst, ( ( xed::imm0u* ) p )->value() );
			} else {
				unreachable_s();
			}
		}
		FORCE_INLINE void move( xed::encoder_operand dst, xed::mem src ) {
			if ( xed::reg::cast( &dst ) ) {
				move( dst.u.reg, src );
			} else if ( auto p = xed::mem::cast( &dst ) ) {
				move( *( xed::mem* ) p, src );
			} else {
				unreachable_s();
			}
		}
		FORCE_INLINE void move( xed::encoder_operand dst, xed::reg_t src ) {
			if ( xed::reg::cast( &dst ) ) {
				move( dst.u.reg, src );
			} else if ( auto p = xed::mem::cast( &dst ) ) {
				move( *( xed::mem* ) p, src );
			} else {
				unreachable_s();
			}
		}
		FORCE_INLINE void move( xed::encoder_operand dst, int64_t src ) {
			if ( xed::reg::cast( &dst ) ) {
				move( dst.u.reg, src );
			} else if ( auto p = xed::mem::cast( &dst ) ) {
				move( *( xed::mem* ) p, src );
			} else {
				unreachable_s();
			}
		}
		FORCE_INLINE void move( xed::encoder_operand dst, xed::encoder_operand src ) {
			if ( xed::reg::cast( &dst ) ) {
				move( dst.u.reg, src );
			} else if ( auto p = xed::mem::cast( &dst ) ) {
				move( *( xed::mem* ) p, src );
			} else {
				unreachable_s();
			}
		}

		// Memory references.
		//
		FORCE_INLINE void ref_mem( const xed::mem& dets ) {
			// [base+disp?]
			// [base+index*N+disp?]
			if ( dets.base() != XED_REG_INVALID ) {
				// [base]
				move( XED_REG_RCX, ref_gp( dets.base() ).first );

				// [base+index*N+disp?]
				if ( dets.index() != XED_REG_INVALID ) {
					move( XED_REG_RAX, ref_gp( dets.index() ).first );
					assemble( XED_ICLASS_LEA, xed::reg{ XED_REG_RCX }, xed::qword_ptr{ xed::reg{ XED_REG_RCX } + xed::reg{ XED_REG_RAX } *dets.scale() + dets.disp() } );
				}
				// [base+disp?]
				else if ( auto disp = dets.disp(); disp.value() ) {
					assemble( XED_ICLASS_LEA, xed::reg{ XED_REG_RCX }, xed::qword_ptr{ xed::reg{ XED_REG_RCX } + disp } );
				}
			}
			// [index*N+disp?]
			else if ( dets.index() != XED_REG_INVALID ) {
				move( XED_REG_RCX, ref_gp( dets.index() ).first );
				assemble( XED_ICLASS_LEA, xed::reg{ XED_REG_RCX }, xed::qword_ptr{ xed::reg{ XED_REG_RCX } *dets.scale() + dets.disp() } );
			}
			// [disp]
			else if ( dets.disp().value() != 0 ) {
				move( XED_REG_RCX, dets.disp().value() );
			}
			// [0]
			else {
				move( XED_REG_ECX, 0 );
			}

			// Offset by segment.
			//
			if ( dets.seg() == XED_REG_FS || dets.seg() == XED_REG_GS ) {
				if ( dets.seg() == XED_REG_FS ) call<&jit::offset_by_guest_fsbase>();
				else                            call<&jit::offset_by_guest_gsbase>();
				if ( is_legacy ) assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_ECX }, xed::reg{ XED_REG_EAX } );
				else             assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_RCX }, xed::reg{ XED_REG_RAX } );
			} else {
				if ( is_legacy ) assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_ECX }, xed::reg{ XED_REG_ECX } );
			}
		}

		// Common operations.
		//
		FORCE_INLINE void call( any_ptr ptr, std::string_view annotation = {} ) {
			uint8_t bytes[] = { 
				0x48, 0xB8, 0xEF, 0xBE, 0xAD, 0xDE, 0xEF, 0xBE, 0xAD, 0xDE, 
				0xFF, 0xD0 
			};
			*( uint64_t* ) &bytes[ 2 ] = ptr;
			insert( bytes, annotation );
		}
		template<auto Fn>
		FORCE_INLINE void call( std::string_view annotation = {} ) {
			if constexpr ( jit_debug ) {
				return call( Fn, annotation.empty() ? xstd::const_tag<Fn>::to_string() : annotation );
			} else {
				return call( Fn );
			}
		}
		FORCE_INLINE void issue_read( std::optional<xed::encoder_operand> op, size_t n ) {
			if ( op ) move( XED_REG_RCX, *op );
			move( XED_REG_EDX, n );
			call<&jit::guest_mem_rw<false>>( "read_n" );
		}
		FORCE_INLINE void issue_write( std::optional<xed::encoder_operand> op, size_t n ) {
			if ( op ) move( XED_REG_RCX, *op );
			move( XED_REG_EDX, n );
			call<&jit::guest_mem_rw<true>>( "write_n" );
		}
		FORCE_INLINE void read_operand( xed::op_name_t name, std::optional<xed::encoder_operand> dst = std::nullopt ) {
			switch ( name ) {
				case XED_OPERAND_RELBR: {
					if ( is_legacy ) {
						move( XED_REG_EAX, ref_tf( &trapframe::rip, 4 ) );
						assemble( XED_ICLASS_ADD, xed::reg{ XED_REG_EAX }, xed::imm0{ decoding.relbr_value() } );
					} else {
						move( XED_REG_RAX, ref_tf( &trapframe::rip ) );
						assemble( XED_ICLASS_ADD, xed::reg{ XED_REG_RAX }, xed::imm0{ decoding.relbr_value() } );
					}
					return move( dst.value_or( ref_tmp( 8 ) ), XED_REG_RAX );
					break;
				}
				case XED_OPERAND_PTR:
				case XED_OPERAND_AGEN:
				case XED_OPERAND_MEM1:
				case XED_OPERAND_MEM0: {
					auto m = decoding.mem( name == XED_OPERAND_MEM1 ? 1 : 0 );
					ref_mem( m );
					if ( name == XED_OPERAND_AGEN ) {
						move( dst.value_or( ref_tmp( 8 ) ), XED_REG_RCX );
					} else {
						issue_read( std::nullopt, m.width() );
						if ( dst ) {
							move( *dst, ref_tmp( m.width() ) );
						}
					}
					break;
				}
				case XED_OPERAND_REG ... XED_OPERAND_REG8: {
					xed::reg_t src_reg = decoding.reg( name );

					// Special regs.
					//
					if ( is_special( src_reg ) ) {
						return move( dst.value_or( ref_tmp( 8 ) ), src_reg );
					}

					// Nonvolatile registers:
					//
					auto [op, sz] = ref_gp( src_reg );
					if ( auto r = xed::reg::cast( &op ) ) {
						return move( dst.value_or( ref_tmp( sz / 8 ) ), r->u.reg );
					} 
					// Volatile registers.
					//
					else {
						return move( dst.value_or( ref_tmp( sz / 8 ) ), op );
					}
					break;
				}
				case XED_OPERAND_UIMM0:
					move( dst.value_or( ref_tmp( 8 ) ), decoding.imm0u_value() );
					break;
				case XED_OPERAND_UIMM1:
					move( dst.value_or( ref_tmp( 8 ) ), decoding.imm1u_value() );
					break;
				case XED_OPERAND_IMM0:
				case XED_OPERAND_IMM0SIGNED:
					move( dst.value_or( ref_tmp( 8 ) ), decoding.imm0_value() );
					break;
				case XED_OPERAND_IMM1:
				case XED_OPERAND_IMM1_BYTES:
					move( dst.value_or( ref_tmp( 8 ) ), decoding.imm1_value() );
					break;
				default:
					xstd::error( "Invalid operand given to read_operand: %s"_es, name );
			}
		}
		FORCE_INLINE void write_operand( xed::op_name_t name, std::optional<xed::encoder_operand> src = std::nullopt, size_t mem_width = 0 ) {
			switch ( name ) {
				case XED_OPERAND_PTR:
				case XED_OPERAND_MEM1:
				case XED_OPERAND_MEM0: {
					if ( src ) {
						move( ref_tmp( 8 ), *src );
					}
					auto m = decoding.mem( name == XED_OPERAND_MEM1 ? 1 : 0 );
					ref_mem( m );
					issue_write( std::nullopt, mem_width ? mem_width : m.width() );
					break;
				}
				case XED_OPERAND_REG ... XED_OPERAND_REG8: {
					xed::reg_t dst_reg = decoding.reg( name );

					// Special regs.
					//
					if ( is_special( dst_reg ) ) {
						return move( dst_reg, src.value_or( ref_tmp( 8 ) ) );
					}

					// Nonvolatile registers:
					//
					auto [op, sz] = ref_gp( dst_reg );
					if ( auto r = xed::reg::cast( &op ) ) {
						return move( r->u.reg, src.value_or( ref_tmp( sz / 8 ) ) );
					} 
					// Volatile registers.
					//
					else {
						if ( sz == 32 ) {
							op.width_bits = 64;
						}
						return move( op, src.value_or( ref_tmp( sz / 8 ) ) );
					}
					break;
				}
				default:
					xstd::error( "Invalid operand given to write_operand: %s"_es, name );
			}
		}
		FORCE_INLINE void issue_push( std::optional<xed::encoder_operand> val = std::nullopt, size_t effective_size = 0 ) {
			if ( !effective_size ) {
				effective_size = decoding.has_opsz_prefix() ? 2 : ( is_legacy ? 4 : 8 );
			}

			if ( val ) move( ref_tmp( effective_size ), *val );

			if ( is_legacy ) {
				auto rsp_ref = ref_tf( &trapframe::rsp, 4 );
				assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_ECX }, rsp_ref );
				assemble( XED_ICLASS_SUB, xed::reg{ XED_REG_ECX }, xed::imm0{ effective_size } );
				issue_write( std::nullopt, effective_size );
				assemble( XED_ICLASS_SUB, rsp_ref, xed::imm0{ effective_size } );
			} else {
				auto rsp_ref = ref_tf( &trapframe::rsp, 8 );
				assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_RCX }, rsp_ref );
				assemble( XED_ICLASS_SUB, xed::reg{ XED_REG_RCX }, xed::imm0{ effective_size } );
				issue_write( std::nullopt, effective_size );
				assemble( XED_ICLASS_SUB, rsp_ref, xed::imm0{ effective_size } );
			}
		}
		FORCE_INLINE void issue_pop( std::optional<xed::encoder_operand> val = std::nullopt, size_t effective_size = 0 ) {
			if ( !effective_size ) {
				effective_size = decoding.has_opsz_prefix() ? 2 : ( is_legacy ? 4 : 8 );
			}

			if ( is_legacy ) {
				auto rsp_ref = ref_tf( &trapframe::rsp, 4 );
				assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_ECX }, rsp_ref );
				issue_read( std::nullopt, effective_size );
				assemble( XED_ICLASS_ADD, rsp_ref, xed::imm0{ effective_size } );
			} else {
				auto rsp_ref = ref_tf( &trapframe::rsp, 8 );
				assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_RCX }, rsp_ref );
				issue_read( std::nullopt, effective_size );
				assemble( XED_ICLASS_ADD, rsp_ref, xed::imm0{ effective_size } );
			}

			if ( val ) move( *val, ref_tmp( effective_size ) );
		}
		FORCE_INLINE void increment_ip() {
			auto rip_ref = ref_tf( &trapframe::rip, is_legacy ? 4 : 8 );
			assemble( XED_ICLASS_ADD, rip_ref, xed::imm0{ decoding.length(), 8 } );
		}
		FORCE_INLINE void resume_nofwd() {
			call<&jit::guest_resume>();
			insert( std::initializer_list<uint8_t>{ 0xCC } );
		}
		FORCE_INLINE void resume() {
			increment_ip();
			resume_nofwd();
		}
		FORCE_INLINE void r0() {
			if ( cpl & 1 ) {
				assemble( XED_ICLASS_XOR, xed::reg{XED_REG_ECX}, xed::reg{XED_REG_ECX} );
				call<&jit::guest_inject<interrupt_type::general_protection_fault>>();
			}
		}

		// Code generator.
		//
		NO_INLINE bool go( bool force ) {
			// Specially emulated classes.
			//
			auto iclass = decoding.iclass();
			switch ( iclass ) {
				// Timestamp/Performance counter virtualization.
				//
				case XED_ICLASS_RDTSC:     call<&jit::guest_rdtsc>();                 resume(); return true;
				case XED_ICLASS_RDTSCP:    call<&jit::guest_rdtscp>();                resume(); return true;
				case XED_ICLASS_RDPMC:     call<&jit::guest_rdpmc>();                 resume(); return true;

				// Model specific registers.
				//
				case XED_ICLASS_RDMSR:     r0(); call<&jit::guest_rdmsr>();            resume(); return true;
				case XED_ICLASS_WRMSR:     r0(); call<&jit::guest_wrmsr>();            resume(); return true;
				case XED_ICLASS_CPUID:  
				{
					call<&jit::guest_cpuid>();
					assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_RBX }, xed::reg{ XED_REG_RAX } );
					resume();
					return true;
				}

				// Processor state.
				//
				case XED_ICLASS_CLI:       r0(); call<&jit::guest_cli>();                   resume(); return true;
				case XED_ICLASS_STI:       r0(); call<&jit::guest_sti>();                   resume(); return true;
				case XED_ICLASS_STAC:      r0(); call<&jit::guest_stac>();                  resume(); return true;
				case XED_ICLASS_CLAC:      r0(); call<&jit::guest_clac>();                  resume(); return true;
				case XED_ICLASS_HLT:       r0(); call<&jit::guest_hlt>();                   resume(); return true;

				// Segmentation intrinsics.
				//
				case XED_ICLASS_SWAPGS:    r0(); call<&jit::guest_swapgs>();                resume(); return true;
				case XED_ICLASS_WRGSBASE:
				case XED_ICLASS_WRFSBASE:
				{
					xed::reg_t reg = decoding.reg( XED_OPERAND_REG0 );
					auto [src, ssz] = ref_gp( reg );
					if ( ssz == 64 )
						assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_RCX }, src );
					else if ( ssz == 32 )
						assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_ECX }, src );
					else
						break;
					if ( iclass == XED_ICLASS_WRFSBASE ) call<&jit::guest_wrfsbase>();
					else                                 call<&jit::guest_wrgsbase>();
					resume();
					break;
				}
				case XED_ICLASS_RDGSBASE:
				case XED_ICLASS_RDFSBASE:
				{
						xed::reg_t reg = decoding.reg( XED_OPERAND_REG0 );
						auto [src, ssz] = ref_gp( reg );
						if ( ssz != 64 && ssz != 32 )
							break;

						// If register is not on the trap-frame, reference a temporary location on trap-frame.
						//
						xed::encoder_operand mem;
						if ( xed::reg::cast( &src ) )
							mem = ref_tf( &trapframe::ctx_1, ssz / 8 );
						else
							mem = src;

						// Call into helper with a reference.
						//
						assemble( XED_ICLASS_LEA, xed::reg{ XED_REG_RCX }, mem );
						if ( iclass == XED_ICLASS_RDFSBASE ) call<&jit::guest_rdfsbase>();
						else                                 call<&jit::guest_rdgsbase>();

						// If the call does return and we should resume guest execution, load the temporary value into the register.
						//
						if ( xed::reg::cast( &src ) )
							assemble( XED_ICLASS_MOV, src, mem );
						resume();
						break;
					}

				// Cache/TLB intrinsics.
				//
				case XED_ICLASS_WBINVD:    r0(); call<&jit::guest_wbinvd>();                resume(); return true;
				case XED_ICLASS_WBNOINVD:  r0(); call<&jit::guest_wbnoinvd>();              resume(); return true;
				case XED_ICLASS_INVD:      r0(); call<&jit::guest_invd>();                  resume(); return true;
				case XED_ICLASS_INVLPG:
				{
					r0();
					ref_mem( decoding.mem( 0 ) );
					call<&jit::guest_invlpg>();
					resume();
					return true;
				}
				case XED_ICLASS_INVPCID:
				{
					r0();
					auto [type, tsz] = ref_gp( decoding.reg( XED_OPERAND_REG0 ) );
					if ( tsz != 64 ) break;
					ref_mem( decoding.mem( 0 ) );
					assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_RDX }, type );
					call<&jit::guest_invpcid>();
					resume();
					return true;
				}

				// Architectural registers.
				//
				case XED_ICLASS_XSETBV:    r0(); call<&jit::guest_xsetbv>();          resume(); return true;
				case XED_ICLASS_CLTS:      r0(); call<&jit::guest_clts>();            resume(); return true;
				case XED_ICLASS_SIDT:
				{
					ref_mem( decoding.mem( 0 ) );
					call<&jit::guest_get_dtr<XED_REG_IDTR>>();
					resume();
					return true;
				}
				case XED_ICLASS_SGDT:
				{
					ref_mem( decoding.mem( 0 ) );
					call<&jit::guest_get_dtr<XED_REG_GDTR>>();
					resume();
					return true;
				}
				case XED_ICLASS_STR:
				{
					write_operand( decoding.operand( 0 )->name(), xed::reg{ XED_REG_TR }, 2 );
					resume();
					return true;
				}
				case XED_ICLASS_SLDT:
				{
					write_operand( decoding.operand( 0 )->name(), xed::reg{ XED_REG_LDTR }, 2 );
					resume();
					return true;
				}
				case XED_ICLASS_SMSW:
				{
					call<&jit::guest_smsw>();
					write_operand( decoding.operand( 0 )->name(), xed::reg{ XED_REG_RAX }, 2 /*if memory*/ );
					resume();
					return true;
				}
				case XED_ICLASS_LIDT:
				{
					r0();
					ref_mem( decoding.mem( 0 ) );
					call<&jit::guest_set_dtr<XED_REG_IDTR>>();
					resume();
					return true;
				}
				case XED_ICLASS_LGDT:
				{
					r0();
					ref_mem( decoding.mem( 0 ) );
					call<&jit::guest_set_dtr<XED_REG_GDTR>>();
					resume();
					return true;
				}
				case XED_ICLASS_LTR:
				{
					r0();
					read_operand( decoding.operand( 0 )->name(), xed::reg{ XED_REG_CX } );
					call<&jit::guest_set_tr>();
					resume();
					return true;
				}
				case XED_ICLASS_LLDT:
				{
					r0();
					read_operand( decoding.operand( 0 )->name(), xed::reg{ XED_REG_CX } );
					call<&jit::guest_set_ldtr>();
					resume();
					return true;
				}
				case XED_ICLASS_LMSW:
				{
					r0();
					read_operand( decoding.operand( 0 )->name(), xed::reg{ XED_REG_RCX } );
					call<&jit::guest_lmsw>();
					resume();
					return true;
				}
				case XED_ICLASS_MOV_DR:
				case XED_ICLASS_MOV_CR:
				{
					r0();
					auto r0 = decoding.reg( XED_OPERAND_REG0 );
					auto r1 = decoding.reg( XED_OPERAND_REG1 );

					// Writing to register:
					//
					if ( XED_REG_CR_FIRST <= r0 && r0 <= XED_REG_DR_LAST )
					{
						// Read the register.
						//
						auto [src, ssz] = ref_gp( r1 );
						if ( ssz != 64 )
							break;

						// Invoke the helper.
						//
						assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_RCX }, src );
						xstd::visit_range<XED_REG_CR_FIRST, XED_REG_DR_LAST>( r0, [&] <auto V> ( xstd::const_tag<V> ) FORCE_INLINE
						{
							call<&jit::guest_set_arch_reg<V>>();
						} );

						// If the call does return, resume guest execution.
						//
						resume();
						return true;
					}
					// Reading from register:
					//
					else if ( XED_REG_CR_FIRST <= r1 && r1 <= XED_REG_DR_LAST )
					{
						auto [dst, dsz] = ref_gp( r0 );
						if ( dsz != 64 )
							break;

						// If register is not on the trap-frame, reference a temporary location on trap-frame, else reference as is.
						//
						xed::encoder_operand mem;
						if ( xed::reg::cast( &dst ) )
							mem = ref_tf( &trapframe::ctx_1, dsz / 8 );
						else
							mem = dst;

						// Invoke the helper.
						//
						assemble( XED_ICLASS_LEA, xed::reg{ XED_REG_RCX }, mem );
						xstd::visit_range<XED_REG_CR_FIRST, XED_REG_DR_LAST + 1>( r1, [&] <auto V> ( xstd::const_tag<V> ) FORCE_INLINE
						{
							call<&jit::guest_get_arch_reg<V>>();
						} );

						// If the call does return and we should resume guest execution, load the temporary value into the register.
						//
						if ( xed::reg::cast( &dst ) )
							assemble( XED_ICLASS_MOV, dst, mem );
						resume();
						return true;
					}
					return false;
				}

				// I/O ports.
				//
				case XED_ICLASS_IN:
				{
					bitcnt_t immw = decoding.imm_width_bits();
					if ( immw ) assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_DX }, xed::imm0{ decoding.imm0u(), 16 } );
					else        assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_DX }, ref_tf( &trapframe::rdx, 2 ) );
					assemble( XED_ICLASS_LEA, xed::reg{ XED_REG_RCX }, ref_tf( &trapframe::rax ) );

					size_t width = xed::register_bit_width( decoding.reg( XED_OPERAND_REG0 ), true );
					switch ( width )
					{
						case 8:  call<&jit::guest_in_io<uint8_t>>();  break;
						case 16: call<&jit::guest_in_io<uint16_t>>(); break;
						case 32: call<&jit::guest_in_io<uint32_t>>(); break;
						default: return false;
					}
					resume();
					return true;
				}
				case XED_ICLASS_INSB:
				case XED_ICLASS_INSW:
				case XED_ICLASS_INSD:
				case XED_ICLASS_REP_INSB:
				case XED_ICLASS_REP_INSW:
				case XED_ICLASS_REP_INSD:
				{
					// Issue the read.
					//
					assemble( XED_ICLASS_LEA, xed::reg{ XED_REG_RCX }, ref_tmp( 8 ) );
					assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_DX }, ref_tf( &trapframe::rdx, 2 ) );
					size_t length;
					bool has_rep = false;
					if ( iclass == XED_ICLASS_INSD || iclass == XED_ICLASS_REP_INSD ) {
						length = 4;
						call<&jit::guest_in_io<uint32_t>>();
						has_rep = iclass == XED_ICLASS_REP_INSD;
					} else if ( iclass == XED_ICLASS_INSW || iclass == XED_ICLASS_REP_INSW ) {
						length = 2;
						call<&jit::guest_in_io<uint16_t>>();
						has_rep = iclass == XED_ICLASS_REP_INSW;
					} else {
						length = 1;
						call<&jit::guest_in_io<uint8_t>>();
						has_rep = iclass == XED_ICLASS_REP_INSB;
					}

					// Write into RDI.
					//
					move_gpr2gpr( XED_REG_RCX, XED_REG_RDI );
					issue_write( std::nullopt, length );

					// Forward the iterators.
					//
					assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_EAX }, ref_tf( &trapframe::rflags, 4 ) );
					assemble( XED_ICLASS_AND, xed::reg{ XED_REG_EAX }, xed::imm0{ 0x400, 32 } );
					assemble( XED_ICLASS_XOR, xed::reg{ XED_REG_EAX }, xed::imm0{ 0x400, 32 } );
					assemble( XED_ICLASS_SHR, xed::reg{ XED_REG_EAX }, xed::imm0{ 10 - ( xstd::msb( length ) + 1 ) } ); // 2= 1
					assemble( XED_ICLASS_LEA, xed::reg{ XED_REG_RDI }, xed::qword_ptr{ XED_REG_RDI } + xed::reg{ XED_REG_RAX } - length );

					// If rep prefixed, jump to the beginning if RCX does not reach zero.
					//
					if ( has_rep ) {
						assemble( XED_ICLASS_DEC, ref_tf( &trapframe::rcx ) );
						assemble( XED_ICLASS_JNZ, xed::relbr( -int64_t( ins->program.size() + 6 ), 32 ) );
					}

					// Resume the guest.
					//
					resume();
					return true;
				}
				case XED_ICLASS_OUT:
				{
					bitcnt_t immw = decoding.imm_width_bits();
					if ( immw ) assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_DX }, xed::imm0{ decoding.imm0u(), 16 } );
					else        assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_DX }, ref_tf( &trapframe::rdx, 2 ) );
					assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_ECX }, ref_tf( &trapframe::rax, 4 ) );

					size_t width = xed::register_bit_width( decoding.reg( XED_OPERAND_REG1 ), true );
					switch ( width )
					{
						case 8:  call<&jit::guest_out_io<uint8_t>>();  break;
						case 16: call<&jit::guest_out_io<uint16_t>>(); break;
						case 32: call<&jit::guest_out_io<uint32_t>>(); break;
						default: return false;
					}
					resume();
					return true;
				}
				case XED_ICLASS_OUTSB:
				case XED_ICLASS_OUTSW:
				case XED_ICLASS_OUTSD:
				case XED_ICLASS_REP_OUTSB:
				case XED_ICLASS_REP_OUTSW:
				case XED_ICLASS_REP_OUTSD:
				{
					// Read from RSI and issue out.
					//
					size_t length;
					bool has_rep = false;
					move_gpr2gpr( XED_REG_RCX, XED_REG_RSI );
					if ( iclass == XED_ICLASS_OUTSD || iclass == XED_ICLASS_REP_OUTSD ) {
						length = 4;
						has_rep = iclass == XED_ICLASS_REP_OUTSD;
						
						issue_read( std::nullopt, length );
						assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_ECX }, ref_tmp( 4 ) );
						assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_DX }, ref_tf( &trapframe::rdx, 2 ) );
						call<&jit::guest_out_io<uint32_t>>();
					} else if ( iclass == XED_ICLASS_OUTSW || iclass == XED_ICLASS_REP_OUTSW ) {
						length = 2;
						has_rep = iclass == XED_ICLASS_REP_OUTSW;

						issue_read( std::nullopt, length );
						assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_CX }, ref_tmp( 2 ) );
						assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_DX }, ref_tf( &trapframe::rdx, 2 ) );
						call<&jit::guest_out_io<uint16_t>>();
					} else {
						length = 1;
						has_rep = iclass == XED_ICLASS_REP_OUTSB;

						issue_read( std::nullopt, length );
						assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_CL }, ref_tmp( 1 ) );
						assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_DX }, ref_tf( &trapframe::rdx, 2 ) );
						call<&jit::guest_out_io<uint8_t>>();
					}

					// Forward the iterators.
					//
					assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_EAX }, ref_tf( &trapframe::rflags, 4 ) );
					assemble( XED_ICLASS_AND, xed::reg{ XED_REG_EAX }, xed::imm0{ 0x400, 32 } );
					assemble( XED_ICLASS_XOR, xed::reg{ XED_REG_EAX }, xed::imm0{ 0x400, 32 } );
					assemble( XED_ICLASS_SHR, xed::reg{ XED_REG_EAX }, xed::imm0{ 10 - ( xstd::msb( length ) + 1 ) } ); // 2= 1
					assemble( XED_ICLASS_LEA, xed::reg{ XED_REG_RSI }, xed::qword_ptr{ XED_REG_RSI } + xed::reg{ XED_REG_RAX } - length );

					// If rep prefixed, jump to the beginning if RCX does not reach zero.
					//
					if ( has_rep ) {
						assemble( XED_ICLASS_DEC, ref_tf( &trapframe::rcx ) );
						assemble( XED_ICLASS_JNZ, xed::relbr( -int64_t( ins->program.size() + 6 ), 32 ) );
					}

					// Resume the guest.
					//
					resume();
					return true;
				}

				// Return branch types.
				//
				case XED_ICLASS_IRETQ: {
					if ( cpl & 1 ) return false;
					call<&jit::guest_iretq>();
					resume_nofwd();
					return true;
				}
				case XED_ICLASS_SYSRET:    r0(); call<&jit::guest_sysret<true>>();    resume(); return true;
				case XED_ICLASS_SYSRET64:  r0(); call<&jit::guest_sysret<false>>();   resume(); return true;
				case XED_ICLASS_RET_NEAR: {
					// Ready for jump.
					//
					issue_pop( xed::reg{ XED_REG_RCX } );
					call<&jit::guest_ready_jmp>();

					// Change the RIP and resume.
					//
					move( ref_tf( &trapframe::rip ), ref_tf( &trapframe::ctx_2 ) );
					resume_nofwd();
					return true;
				}

				// Software interrupts.
				//
				case XED_ICLASS_INT:
				{
					increment_ip();
					assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_CL }, xed::imm0{ decoding.imm0u(), 8 } );
					call<&jit::guest_sw_int<false>>();
					return true;
				}
				case XED_ICLASS_INT1:
				{
					increment_ip();
					assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_CL }, xed::imm0{ interrupt_type::debug, 8 } );
					call<&jit::guest_sw_int<true>>();
					return true;
				}
				case XED_ICLASS_INT3:
				{
					increment_ip();
					assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_CL }, xed::imm0{ interrupt_type::breakpoint, 8 } );
					call<&jit::guest_sw_int<false>>();
					return true;
				}

				// Monitor extensions.
				//
				case XED_ICLASS_MONITOR:
				{
					r0();
					call<&jit::guest_monitor>();
					resume();
					return true;
				}
				case XED_ICLASS_MWAIT:
				{
					r0();
					call<&jit::guest_mwait>();
					resume();
					return true;
				}

				// Syntethic emulators.
				//
				case XED_ICLASS_PUSHF:
				{
					call<&jit::guest_get_sreg<XED_REG_FLAGS>>();
					issue_push( xed::reg{ XED_REG_AX }, 2 );
					resume();
					return true;
				}
				case XED_ICLASS_PUSHFD:
				{
					call<&jit::guest_get_sreg<XED_REG_EFLAGS>>();
					issue_push( xed::reg{ XED_REG_EAX }, 4 );
					resume();
					return true;
				}
				case XED_ICLASS_PUSHFQ:
				{
					call<&jit::guest_get_sreg<XED_REG_RFLAGS>>();
					issue_push( xed::reg{ XED_REG_RAX } );
					resume();
					return true;
				}
				case XED_ICLASS_POPF:
				{
					issue_pop( xed::reg{ XED_REG_CX }, 2 );
					call<&jit::guest_set_sreg<XED_REG_FLAGS>>();
					resume();
					return true;
				}
				case XED_ICLASS_POPFD:
				{
					issue_pop( xed::reg{ XED_REG_ECX }, 4 );
					call<&jit::guest_set_sreg<XED_REG_EFLAGS>>();
					resume();
					return true;
				}
				case XED_ICLASS_POPFQ:
				{
					issue_pop( xed::reg{ XED_REG_RCX }, 8 ); 
					call<&jit::guest_set_sreg<XED_REG_RFLAGS>>();
					resume();
					return true;
				}

				// (REP) MOVS* class:
				// - TODO: Acceleration.
				case XED_ICLASS_MOVSB:
				case XED_ICLASS_MOVSW:
				case XED_ICLASS_MOVSD:
				case XED_ICLASS_MOVSQ:
				case XED_ICLASS_REP_MOVSB:
				case XED_ICLASS_REP_MOVSW:
				case XED_ICLASS_REP_MOVSD:
				case XED_ICLASS_REP_MOVSQ:
				{
					int8_t length = ( int8_t ) decoding.mem_width( 0 );
					bool has_rep = iclass == XED_ICLASS_REP_MOVSB || iclass == XED_ICLASS_REP_MOVSW || iclass == XED_ICLASS_REP_MOVSD || iclass == XED_ICLASS_REP_MOVSQ;

					// Issue the memory operation.
					issue_read( xed::reg{ XED_REG_RSI }, length );
					issue_write( xed::reg{ XED_REG_RDI }, length );
					// Forward the iterators.
					assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_EAX }, ref_tf( &trapframe::rflags, 4 ) );
					assemble( XED_ICLASS_AND, xed::reg{ XED_REG_EAX }, xed::imm0{ 0x400, 32 } );
					assemble( XED_ICLASS_XOR, xed::reg{ XED_REG_EAX }, xed::imm0{ 0x400, 32 } );
					assemble( XED_ICLASS_SHR, xed::reg{ XED_REG_EAX }, xed::imm0{ 10 - ( xstd::msb( length ) + 1 ) } ); // 2= 1
					assemble( XED_ICLASS_LEA, xed::reg{ XED_REG_RDI }, xed::qword_ptr{ XED_REG_RDI } + xed::reg{ XED_REG_RAX } - length );
					assemble( XED_ICLASS_LEA, xed::reg{ XED_REG_RSI }, xed::qword_ptr{ XED_REG_RSI } + xed::reg{ XED_REG_RAX } - length );
					// If rep prefixed, jump to the beginning if RCX does not reach zero.
					if ( has_rep ) {
						assemble( XED_ICLASS_DEC, ref_tf( &trapframe::rcx ) );
						assemble( XED_ICLASS_JNZ, xed::relbr( -int64_t( ins->program.size() + 6 ), 32 ) );
					}
					// Resume the guest.
					resume();
					return true;
				}

				// (REP) STOS* class:
				// - TODO: Acceleration.
				case XED_ICLASS_STOSB:
				case XED_ICLASS_STOSW:
				case XED_ICLASS_STOSD:
				case XED_ICLASS_STOSQ:
				case XED_ICLASS_REP_STOSB:
				case XED_ICLASS_REP_STOSW:
				case XED_ICLASS_REP_STOSD:
				case XED_ICLASS_REP_STOSQ:
				{
					int8_t length = ( int8_t ) decoding.mem_width( 0 );
					bool has_rep = iclass == XED_ICLASS_REP_STOSB || iclass == XED_ICLASS_REP_STOSW || iclass == XED_ICLASS_REP_STOSD || iclass == XED_ICLASS_REP_STOSQ;

					// Issue the memory operation.
					assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_RAX }, ref_tf( &trapframe::rax ) );
					assemble( XED_ICLASS_MOV, ref_tf( &trapframe::temp, 8 ), xed::reg{ XED_REG_RAX } );
					issue_write( xed::reg{ XED_REG_RDI }, length );
					// Forward the iterators.
					assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_EAX }, ref_tf( &trapframe::rflags, 4 ) );
					assemble( XED_ICLASS_AND, xed::reg{ XED_REG_EAX }, xed::imm0{ 0x400, 32 } );
					assemble( XED_ICLASS_XOR, xed::reg{ XED_REG_EAX }, xed::imm0{ 0x400, 32 } );
					assemble( XED_ICLASS_SHR, xed::reg{ XED_REG_EAX }, xed::imm0{ 10 - ( xstd::msb( length ) + 1 ) } ); // 2= 1
					assemble( XED_ICLASS_LEA, xed::reg{ XED_REG_RDI }, xed::qword_ptr{ XED_REG_RDI } + xed::reg{ XED_REG_RAX } - length );
					// If rep prefixed, jump to the beginning if RCX does not reach zero.
					if ( has_rep ) {
						assemble( XED_ICLASS_DEC, ref_tf( &trapframe::rcx ) );
						assemble( XED_ICLASS_JNZ, xed::relbr( -int64_t( ins->program.size() + 6 ), 32 ) );
					}
					// Resume the guest.
					resume();
					return true;
				}

				// (REP) LODS* class:
				// - TODO: Acceleration.
				case XED_ICLASS_LODSB:
				case XED_ICLASS_LODSW:
				case XED_ICLASS_LODSD:
				case XED_ICLASS_LODSQ:
				case XED_ICLASS_REP_LODSB:
				case XED_ICLASS_REP_LODSW:
				case XED_ICLASS_REP_LODSD:
				case XED_ICLASS_REP_LODSQ:
				{
					int8_t length = ( int8_t ) decoding.mem_width( 0 );
					bool has_rep = iclass == XED_ICLASS_REP_LODSB || iclass == XED_ICLASS_REP_LODSW || iclass == XED_ICLASS_REP_LODSD || iclass == XED_ICLASS_REP_LODSQ;

					// Issue the memory operation.
					issue_read( xed::reg{ XED_REG_RSI }, length );
					switch ( length ) {
						case 1:
							assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_AL }, ref_tf( &trapframe::temp, 1 ) );
							assemble( XED_ICLASS_MOV, ref_tf( &trapframe::rax, 1 ), xed::reg{ XED_REG_AL } );
							break;
						case 2:
							assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_AX }, ref_tf( &trapframe::temp, 2 ) );
							assemble( XED_ICLASS_MOV, ref_tf( &trapframe::rax, 2 ), xed::reg{ XED_REG_AX } );
							break;
						case 4:
							assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_EAX }, ref_tf( &trapframe::temp, 4 ) );
							assemble( XED_ICLASS_MOV, ref_tf( &trapframe::rax, 8 ), xed::reg{ XED_REG_RAX } );
							break;
						case 8:
							assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_RAX }, ref_tf( &trapframe::temp, 8 ) );
							assemble( XED_ICLASS_MOV, ref_tf( &trapframe::rax, 8 ), xed::reg{ XED_REG_RAX } );
							break;
						default:
							return false;
					}
					// Forward the iterators.
					assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_EAX }, ref_tf( &trapframe::rflags, 4 ) );
					assemble( XED_ICLASS_AND, xed::reg{ XED_REG_EAX }, xed::imm0{ 0x400, 32 } );
					assemble( XED_ICLASS_XOR, xed::reg{ XED_REG_EAX }, xed::imm0{ 0x400, 32 } );
					assemble( XED_ICLASS_SHR, xed::reg{ XED_REG_EAX }, xed::imm0{ 10 - ( xstd::msb( length ) + 1 ) } ); // 2= 1
					assemble( XED_ICLASS_LEA, xed::reg{ XED_REG_RSI }, xed::qword_ptr{ XED_REG_RSI } + xed::reg{ XED_REG_RAX } - length );
					// If rep prefixed, jump to the beginning if RCX does not reach zero.
					if ( has_rep ) {
						assemble( XED_ICLASS_DEC, ref_tf( &trapframe::rcx ) );
						assemble( XED_ICLASS_JNZ, xed::relbr( -int64_t( ins->program.size() + 6 ), 32 ) );
					}
					// Resume the guest.
					resume();
					return true;
				}

				// Handle MOV specially to handle cases like [mov ax, cs].
				//
				case XED_ICLASS_MOV: {
					read_operand( decoding.operand( 1 )->name() );
					write_operand( decoding.operand( 0 )->name() );
					resume();
					return true;
				}
										 
				// Handle NOP specially to ignore operands.
				//
				case XED_ICLASS_NOP:
				case XED_ICLASS_NOP2:
				case XED_ICLASS_NOP3:
				case XED_ICLASS_NOP4:
				case XED_ICLASS_NOP5:
				case XED_ICLASS_NOP6:
				case XED_ICLASS_NOP7:
				case XED_ICLASS_NOP8:
				case XED_ICLASS_NOP9:{
					resume();
					return true;
				}

				// Handle LEA specially to handle AGEN.
				//
				case XED_ICLASS_LEA: {
					ref_mem( decoding.mem( 0 ) );
					write_operand( decoding.operand( 0 )->name(), xed::reg{ XED_REG_RCX } );
					resume();
					return true;
				}

				// Handle PUSH/POP.
				case XED_ICLASS_PUSH: {
					read_operand( decoding.operand( 0 )->name() );
					issue_push();
					resume();
					return true;
				}
				case XED_ICLASS_POP: {
					issue_pop();
					write_operand( decoding.operand( 0 )->name() );
					resume();
					return true;
				}

				// Handle CALL/JMP.
				//
				case XED_ICLASS_JMP:
				case XED_ICLASS_CALL_NEAR: {
					// Ready for jump.
					//
					read_operand( decoding.operand( 0 )->name(), xed::reg{ XED_REG_RCX } );
					call<&jit::guest_ready_jmp>();

					// Push RIP if relevant.
					//
					if ( iclass == XED_ICLASS_CALL_NEAR )
						issue_push( ref_tf( &trapframe::rip ) );

					// Change the RIP and resume.
					//
					move( ref_tf( &trapframe::rip ), ref_tf( &trapframe::ctx_2 ) );
					resume_nofwd();
					return true;
				}

				// TODO on sight:
				//
				case XED_ICLASS_LSL:
				case XED_ICLASS_VERW:
				case XED_ICLASS_VERR:
				case XED_ICLASS_ARPL:
				case XED_ICLASS_CMPSB:
				case XED_ICLASS_CMPSW:
				case XED_ICLASS_CMPSD:
				case XED_ICLASS_CMPSQ:
				case XED_ICLASS_REPE_CMPSB:
				case XED_ICLASS_REPE_CMPSW:
				case XED_ICLASS_REPE_CMPSD:
				case XED_ICLASS_REPE_CMPSQ:
				case XED_ICLASS_REPNE_CMPSB:
				case XED_ICLASS_REPNE_CMPSW:
				case XED_ICLASS_REPNE_CMPSD:
				case XED_ICLASS_REPNE_CMPSQ:
				case XED_ICLASS_SCASB:
				case XED_ICLASS_SCASW:
				case XED_ICLASS_SCASD:
				case XED_ICLASS_SCASQ:
				case XED_ICLASS_REPE_SCASB:
				case XED_ICLASS_REPE_SCASW:
				case XED_ICLASS_REPE_SCASD:
				case XED_ICLASS_REPE_SCASQ:
				case XED_ICLASS_REPNE_SCASB:
				case XED_ICLASS_REPNE_SCASW:
				case XED_ICLASS_REPNE_SCASD:
				case XED_ICLASS_REPNE_SCASQ:
				case XED_ICLASS_SYSCALL_AMD: // <- Compat-mode ones.
				case XED_ICLASS_SYSRET_AMD:
				case XED_ICLASS_SYSENTER:
				case XED_ICLASS_SYSEXIT:
				{
					xstd::error( "Unexpected instruction: %llu | %s"_es, iclass, decoding.to_string() );
					break;
				}

				// VMX/SVM instructions cause #UD, but are additionally logged.
				//
				case XED_ICLASS_VMCALL:    case XED_ICLASS_VMLAUNCH:
				case XED_ICLASS_VMRESUME:  case XED_ICLASS_VMXOFF:
				case XED_ICLASS_INVEPT:    case XED_ICLASS_INVVPID:
				case XED_ICLASS_VMREAD:    case XED_ICLASS_VMWRITE:
				case XED_ICLASS_VMPTRLD:   case XED_ICLASS_VMCLEAR:
				case XED_ICLASS_VMXON:     case XED_ICLASS_VMPTRST:
				case XED_ICLASS_CLGI:      case XED_ICLASS_INVLPGA:
				case XED_ICLASS_SKINIT:    case XED_ICLASS_STGI:
				case XED_ICLASS_VMLOAD:    case XED_ICLASS_VMMCALL:
				case XED_ICLASS_VMRUN:     case XED_ICLASS_VMSAVE:
				{
					assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_ECX }, xed::imm0( iclass ) );
					call<&jit::guest_vmm>();
					return true;
				}
				default: break;
			}

			// If the leftover is a system injection, assert fail.
			//
			if ( decoding.attribute( XED_ATTRIBUTE_RING0 ) ) {
				if ( cpl & 1 ) {
					assemble( XED_ICLASS_XOR, xed::reg{XED_REG_ECX}, xed::reg{XED_REG_ECX} );
					if ( origin_exception == interrupt_type::invalid_opcode ) {
						call<&jit::guest_inject<interrupt_type::invalid_opcode>>();
					} else {
						call<&jit::guest_inject<interrupt_type::general_protection_fault>>();
					}
					return true;
				}
				xstd::error( "Unexpected instruction: %s"_es, decoding );
			}

			// If this was a #UD, inject it.
			//
			if ( !force && origin_exception == interrupt_type::invalid_opcode ) {
				assemble( XED_ICLASS_XOR, xed::reg{XED_REG_ECX}, xed::reg{XED_REG_ECX} );
				call<&jit::guest_inject<interrupt_type::invalid_opcode>>();
				return true;
			}

			// Fail if this is not an appropriate memory instruction.
			//
			if ( size_t n = decoding.num_mem_operands(); n > 1 ) {
				if ( !force && !is_debug_build() ) return false;
				xstd::error( "Emulated memory operation has an unexpected number of memory operands: %u [%s]."_es, n, decoding );
			}

			// Find the memory operand:
			//
			const xed::operand* mem_op = nullptr;
			for ( auto op : decoding.operands() ) {
				if ( op->name() == XED_OPERAND_MEM0 ) {
					mem_op = op;
					break;
				}
			}
			auto mem_details = mem_op ? decoding.mem( 0 ) : xed::mem{};

			// If the memory is read from issue a read first. 
			//
			if ( mem_op && mem_op->read() ) {
				ref_mem( mem_details );
				issue_read( std::nullopt, mem_details.width() );
			}

			//
			// TODO:
			// lock prefix
			// xchg
			// cmpxchg
			// cmpxchg16b
			//

			// Calculate a mask of used GPRs.
			//
			uint64_t gpr_used = 0;
			for ( const xed::operand* operand : decoding.operands() ) {
				if ( operand->is_suppressed() ) continue;
				auto operand_name = operand->name();
				switch ( operand_name ) {
					// Register types:
					//
					case XED_OPERAND_REG0 ... XED_OPERAND_REG8:
					{
						auto reg = decoding.reg( operand_name );
						if ( operand->is_suppressed() && reg == XED_REG_RIP )
							continue;
						reg = xed::extend_register( reg );
						if ( xed::is_gpr64( reg ) ) xstd::bit_set( gpr_used, reg - XED_REG_GPR64_FIRST );
						break;
					}
					// Memory types:
					//
					case XED_OPERAND_MEM0:
					case XED_OPERAND_MEM1:
					case XED_OPERAND_AGEN: {
						size_t memop_idx = operand_name == XED_OPERAND_MEM1 ? 1 : 0;
						for ( auto reg : { decoding.mem_base( memop_idx ), decoding.mem_index( memop_idx ) } ) {
							reg = xed::extend_register( reg );
							if ( xed::is_gpr64( reg ) ) xstd::bit_set( gpr_used, reg - XED_REG_GPR64_FIRST );
						}
						break;
					}
					default:
						break;
				}
			}

			// Volatile register allocator.
			//
			uint64_t gprv_unused = 0;
			xstd::bit_set( gprv_unused, XED_REG_R8  - XED_REG_GPR64_FIRST );
			xstd::bit_set( gprv_unused, XED_REG_R9  - XED_REG_GPR64_FIRST );
			xstd::bit_set( gprv_unused, XED_REG_R10 - XED_REG_GPR64_FIRST );
			xstd::bit_set( gprv_unused, XED_REG_R11 - XED_REG_GPR64_FIRST );
			xstd::bit_set( gprv_unused, XED_REG_RAX - XED_REG_GPR64_FIRST );
			xstd::bit_set( gprv_unused, XED_REG_RCX - XED_REG_GPR64_FIRST );
			xstd::bit_set( gprv_unused, XED_REG_RDX - XED_REG_GPR64_FIRST );
			gprv_unused &= ~gpr_used;
			auto alloc_gprv = [ & ] () FORCE_INLINE {
				bitcnt_t b = xstd::lsb( gprv_unused );
				if ( b == xstd::bit_npos ) xstd::error( "Out of volatile registers."_es );
				xstd::bit_reset( gprv_unused, b );
				return xed::reg_t( XED_REG_GPR64_FIRST + b );
			};

			// Alias register allocator.
			//
			uint8_t aliases[ 16 ] = { 0 };
			auto alloc_gprv_alias = [ & ]( xed::reg_t gpr64 ) FORCE_INLINE {
				auto i = gpr64 - XED_REG_GPR64_FIRST;
				if ( auto& alias = aliases[ i ] ) {
					return xed::reg_t( XED_REG_GPR64_FIRST + ( alias - 1 ) );
				} else {
					auto alloc = alloc_gprv();
					alias = 1 + ( alloc - XED_REG_GPR64_FIRST );
					return alloc;
				}
			};

			// Reassemble the instruction replacing MEM0 with [RSP] and saving registers.
			//
			xed::encoding reassembled = { decoding };
			xstd::small_vector<std::pair<xed::reg_t, xed::encoder_operand>, 2> reg_fetch_list;
			xstd::small_vector<std::pair<xed::reg_t, xed::encoder_operand>, 2> reg_writeback_list;
			for ( const xed::operand* operand : reassembled.operands() ) {
				if ( operand->is_suppressed() ) continue;

				xed::op_name_t operand_name = operand->name();

				// Registers emit a fetch from trapframe if read from and write into trapframe if written to.
				//
				if ( XED_OPERAND_REG0 <= operand_name && operand_name <= XED_OPERAND_REG8 ) {
					// Extend the register.
					//
					auto oreg = decoding.reg( operand_name );
					auto reg =  oreg;
					if ( xed::is_gpr( reg ) ) {
						reg = xed::extend_register( reg );
					} else if ( xed::is_xmm( reg ) ) {
						reg = xed::reg_t( reg - XED_REG_XMM0 + XED_REG_YMM0 );
					} else if ( !xed::is_ymm( reg ) ) {
						continue;
					}

					// If it is in the trapframe:
					//
					auto [ref,  _] =  ref_gp( reg );
					if ( !xed::reg::cast( &ref ) ) {
						// If accessing RSP, replace with a volatile.
						//
						if ( reg == XED_REG_RSP ) [[unlikely]] {
							auto alias = alloc_gprv_alias( XED_REG_RSP );
							if ( oreg != XED_REG_RSP ) {
								auto [base, offset, sz] = xed::resolve_mapping( oreg );
								alias = xed::remap_register( alias, offset, sz );
							}
							reassembled.set_reg( operand_name, alias );
						}

						// Add into fetch/wb list.
						//
						if ( operand->read() )    reg_fetch_list.emplace_back( reg, ref );
						if ( operand->written() ) reg_writeback_list.emplace_back( reg, ref );
					}
				}
				// Memory operand is replaced with [RSP].
				//
				else if ( operand_name == XED_OPERAND_MEM0 || operand_name == XED_OPERAND_MEM1 ) {
					fassert( mem_op );
					size_t idx = operand_name == XED_OPERAND_MEM1 ? 1 : 0;
					reassembled.set_mem( idx, { mem_details.width_bits(), XED_REG_RSP } );
				}
			}

			// If the instruction reads any flags, partially load the flags.
			//
			auto* flag_info = decoding.flag_info();
			if ( uint32_t read_set = flag_info ? ( flag_info->read.flat & rflags_memop_mask ) : 0 ) {
				if ( ( read_set & rflags_lahf_mask ) == read_set ) {
					assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_AH }, ref_tf( &trapframe::rflags, 1 ) );
					assemble( XED_ICLASS_SAHF );
				} else {
					assemble( XED_ICLASS_MOV, xed::reg{ XED_REG_RAX }, ref_tf( &trapframe::rflags, 8 ) );
					assemble( XED_ICLASS_AND, xed::reg{ XED_REG_RAX }, xed::imm0{ rflags_memop_mask, 32 } );
					if ( ia32::read_flags().alignment_check_flag ) {
						assemble( XED_ICLASS_OR, xed::reg{ XED_REG_RAX }, xed::imm0{ RFLAGS_ALIGNMENT_CHECK_FLAG_FLAG, 32 } );
					}
					assemble( XED_ICLASS_PUSH, xed::reg{ XED_REG_RAX } );
					assemble( XED_ICLASS_POPFQ );
				}
			}

			// If any trapframe registers were read from, fetch them.
			//
			for ( auto& [reg, mem] : reg_fetch_list ) {
				assemble( mem.width_bits > 64 ? XED_ICLASS_VMOVUPS : XED_ICLASS_MOV, xed::reg{ reg }, mem );
			}

			// Create the new instruction and insert it.
			//
			do {
				if ( iclass == XED_ICLASS_MOVAPS ) iclass = XED_ICLASS_MOVUPS;
				else if ( iclass == XED_ICLASS_MOVAPD ) iclass = XED_ICLASS_MOVUPS;
				else if ( iclass == XED_ICLASS_MOVDQA ) iclass = XED_ICLASS_MOVUPS;
				else if ( iclass == XED_ICLASS_VMOVAPS ) iclass = XED_ICLASS_VMOVUPS;
				else if ( iclass == XED_ICLASS_VMOVAPD ) iclass = XED_ICLASS_VMOVUPS;
				else if ( iclass == XED_ICLASS_VMOVDQA ) iclass = XED_ICLASS_VMOVUPS;
				else if ( iclass == XED_ICLASS_VMOVDQA32 ) iclass = XED_ICLASS_VMOVDQU32;
				else if ( iclass == XED_ICLASS_VMOVDQA64 ) iclass = XED_ICLASS_VMOVDQU64;
				else if ( iclass == XED_ICLASS_MOVNTDQ ) iclass = XED_ICLASS_MOVUPS; // TODO: Not really.
				else if ( iclass == XED_ICLASS_MOVNTDQA ) iclass = XED_ICLASS_MOVUPS;
				else if ( iclass == XED_ICLASS_VMOVNTDQ ) iclass = XED_ICLASS_VMOVUPS;
				else if ( iclass == XED_ICLASS_VMOVNTDQA ) iclass = XED_ICLASS_VMOVUPS;
				else break;
				reassembled.set_iclass( iclass );
			} while ( false );
			insert( std::move( reassembled ) );

			// If any trapframe registers were written to, write them back.
			//
			for ( auto& [reg, mem] : reg_writeback_list ) {
				assemble( mem.width_bits > 64 ? XED_ICLASS_VMOVUPS : XED_ICLASS_MOV, mem, xed::reg{ reg } );
			}

			// If the instruction writes any flags, partially write them back.
			//
			if ( uint32_t written_set = flag_info ? flag_info->written.flat & rflags_memop_mask : 0 ) {
				if ( ( written_set & rflags_lahf_mask ) == written_set ) {
					assemble( XED_ICLASS_LAHF );
					assemble( XED_ICLASS_AND, xed::reg{ XED_REG_AH }, xed::imm0{ written_set, 8 } );
					assemble( XED_ICLASS_AND, ref_tf( &trapframe::rflags, 1 ), xed::imm0{ ~written_set & 0xFF, 8 } );
					assemble( XED_ICLASS_OR,  ref_tf( &trapframe::rflags, 1 ), xed::reg{ XED_REG_AH } );
				} else {
					assemble( XED_ICLASS_PUSHFQ );
					assemble( XED_ICLASS_POP, xed::reg{ XED_REG_RAX } );
					assemble( XED_ICLASS_AND, xed::reg{ XED_REG_RAX }, xed::imm0{ written_set, 32 } );
					assemble( XED_ICLASS_AND, ref_tf( &trapframe::rflags, 8 ), xed::imm0{ ~written_set, 32 } );
					assemble( XED_ICLASS_OR,  ref_tf( &trapframe::rflags, 8 ), xed::reg{ XED_REG_RAX } );
				}
			}

			// If the memory is written to, issue a write. 
			//
			if ( mem_op && mem_op->written() ) {
				ref_mem( mem_details );
				issue_write( std::nullopt, mem_details.width() );
			}

			// Finally, resume the guest.
			//
			resume();
			return true;
		}
	};

	// Returns whether or not the given instruction entry can be stored into the global cache or not.
	//
	FORCE_INLINE static bool global_cache_viable( const xed::decoding& dec )
	{
		return !dec.is_relative() && ( !dec.has_imm() || dec.imm_width() == 1 );
	}

	// Generates a handler and returns the status.
	//
	enum class jit_status : uint8_t
	{
		okay,
		error_propagated,
		invalid_opcode,
		unhandled_instruction,
	};
	static xstd::spinlock compiler_print_spinlock = {};
	COLD static std::pair<jit_status, emu_context::handler*> fetch_handler( vm_context* vm, trapframe* tf, const emu_context::local_key& ck, bool force, const uint8_t* ip_alt )
	{
		// Read guest memory and decode the instruction at RIP.
		//
		uint8_t buf[ xed::max_ins_len ];
		size_t limit = xed::max_ins_len;
		xed::result<xed::decoding> decoding{ XED_ERROR_BUFFER_TOO_SHORT };
		if ( ip_alt ) {
			decoding = xed::decode( ck.legacy ? xed::compat32 : xed::long64, ip_alt, 16 );
		} else {
			limit -= vm->read_guest( nullptr, buf, tf->rip, xed::max_ins_len, true );
			if ( limit != 0 )
				decoding = xed::decode( ck.legacy ? xed::compat32 : xed::long64, buf, limit );
		}
		interrupt_type original_exception = ( interrupt_type ) ck.oexc;

		// If we failed to decode the instruction:
		//
		if ( !decoding ) {
			// If it was due to memory read, inject a #PF and indicate error.
			//
			if ( decoding.status == XED_ERROR_BUFFER_TOO_SHORT ) {
				ia32::page_fault_exception ex_flags{ .flags = 0 };
				ex_flags.execute = true;
				ex_flags.user_mode_access = ( tf->seg_cs.request_privilege_level & 1 );
				ex_flags.present = false;
				vm->inject( tf, interrupt_type::page_fault, ex_flags.flags, tf->rip + limit );
				return { jit_status::error_propagated, nullptr };
			}
			// Otherwise:
			//
			else {
				// Inject #UD if it also matches the originating exception.
				//
				if ( original_exception == interrupt_type::invalid_opcode ) {
					vm->inject( tf, interrupt_type::invalid_opcode, 0 );
					return { jit_status::error_propagated, nullptr };
				}

				// Fail if force flag is set, else return the status.
				//
				if ( force ) {
					xstd::error( "Failed decoding: %p."_es, tf->rip );
				}
				return { jit_status::invalid_opcode, nullptr };
			}
		}

		// If global cache viable, lookup in the global cache.
		//
		std::optional<emu_context::global_key> gk = std::nullopt;
		if ( global_cache_viable( *decoding ) ) {
			gk.emplace();
			gk->cpl = ck.cpl;
			gk->legacy = ck.legacy;
			gk->oexc = ck.oexc;
			xstd::trivial_copy_n<15>( &gk->bytes[ 0 ], &buf[ 0 ] );

			std::shared_lock _g{ emu_context::global_cache_lock };
			if ( auto git = emu_context::global_cache.find( *gk ); git != emu_context::global_cache.end() ) {
				// Insert into the local cache and return the result.
				//
				return { jit_status::okay, &vm->emu.local_cache.emplace( ck, git->second ).first->second };
			}
		}

		// JIT compile the handler.
		//
		emu_context::handler handler{};
		if ( codegen cg = { &handler, *decoding, ( uint16_t ) ck.cpl, ck.legacy != 0, original_exception }; !cg.go( force ) ) [[unlikely]] {
			if ( force )
				xstd::error( "Failed code-generation for: %p %s."_es, tf->rip, *decoding );
			return { jit_status::unhandled_instruction, nullptr };
		} else if constexpr( jit_debug ) {
			std::lock_guard _g{ compiler_print_spinlock };
			xstd::log( "Succesfully compiled handler for: %p %s\n", tf->rip, decoding->to_string( tf->rip ) );
			size_t n = 0;
			for ( auto e : xed::decode64_n( handler.program ) ) {
				auto it = std::find_if( cg.annotations.begin(), cg.annotations.end(), [ & ] ( auto& pair ) { return pair.first == n; } );
				if ( it == cg.annotations.end() ) {
					xstd::log( " => %s\n", e.to_string() );
				} else {
					xstd::log( " => %s; %.*s\n", e.to_string(), it->second.size(), it->second.data() );
				}
				n += e.length();
			}
		}

		// If it was global cache viable, insert into the global cache.
		//
		if ( gk ) {
			std::unique_lock _g{ emu_context::global_cache_lock };
			emu_context::global_cache.emplace( *gk, handler );
		}

		// Insert into the local cache and return the result.
		//
		return { jit_status::okay, &vm->emu.local_cache.emplace( ck, handler ).first->second };
	}

	// Generates a cache key.
	//
	FORCE_INLINE static emu_context::local_key generate_cache_key( vm_context* vm, trapframe* tf, const uint8_t* ip_alt )
	{
		// Write basic details.
		//
		emu_context::local_key ck{};
		ck.address = tf->rip;
		ck.oexc =    uint8_t( int_is_exception( tf->type ) ? tf->type : interrupt_type::non_maskable );
		if ( tf->type == interrupt_type::debug ) {
			ck.oexc = uint8_t( interrupt_type::general_protection_fault );
		}
		ck.cpl =     tf->seg_cs.request_privilege_level & 1;
		ck.legacy =  tf->seg_cs.flags == host_seg_r3_ccode.flags;
		if ( ip_alt ) {
			xstd::trivial_copy_n<15>( &ck.bytes, ip_alt );
		} else {
			ck.ptpfn = is_kernel_va( tf->rip, true ) ? 0 : vm->mm.read_guest_cr3().address_of_page_directory;
		}
		return ck;
	}

	// Emulates the given instruction, returns true if emulation was successful and the supervisor
	// can continue execution from the trapframe.
	//
	bool vm_context::emulate( trapframe* tf, fn_vmemop callback, const uint8_t* ip_alt, bool force )
	{
		// Flush the cache if it is pending.
		//
		if ( emu.flush_pending ) [[unlikely]]
			flush_icache();

		// Lookup the cache.
		//
		auto ck = generate_cache_key( this, tf, ip_alt );
		auto it = emu.local_cache.find( ck );

		// Use cached handler if found, else try to generate a handler.
		//
		emu_context::handler* handler = nullptr;
		if ( it != emu.local_cache.end() ) [[likely]] {
			handler = &it->second;
		} else {
			auto [status, hnd] = fetch_handler( this, tf, ck, force, ip_alt );
			switch ( status ) {
				// If successfully generated, continue.
				//
				case jit_status::okay:
					handler = hnd;
					break;

				// If we injected an exception, indicate success.
				//
				case jit_status::error_propagated:
					return true;

				// If emulation failed with some other reason, fail.
				//
				default:
					fassert( !force );
					return false;
			}
		}

		// Write the return pointer and return.
		//
		tf->ctx_0 =   ( uint64_t ) callback;
		tf->retptr() = handler->program.data();
		return true;
	}

	// Flushes the instruction cache.
	//
	void vm_context::flush_icache()
	{
		emu.local_cache.clear();
		emu.flush_pending = false;
	}
};