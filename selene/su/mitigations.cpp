#include "mitigations.hpp"
#include <ia32.hpp>
#include <ia32/perfmon.hpp>
#include "../sched/irq.hpp"
#include "../hooks/patch_manager.hpp"
#include <sdk/hal/api.hpp>
#include <sdk/halp/api.hpp>
#include <sdk/emon/api.hpp>
#include <sdk/nt/api.hpp>
#include "vm.hpp"

namespace su::mgx
{
	static bool requires_rtm_interrupt = false;
	static uint32_t um_cycle_pmc = 0;
	static uint32_t um_cycle_msr = 0;
	static uint32_t rtm_ctr_msr = 0;
	static uint8_t  um_cycle_shf = 0;
	static constexpr uint8_t core_clk_pmc = 0;
	static constexpr uint8_t rtm_pmc =      1;
	
	template<bool Safe = true>
	static void reset_lapic( const ia32::apic::controller<Safe>& apic = {} )
	{
		apic.write_register( ia32::apic::lvt_pmi_register, ia32::apic::command{ .mode = ia32::apic::delivery_mode::nmi } );
	}

	// Should be invoked on a PMI by the VM, returns true if it was due to an RTM trap
	// after clearing the PMI mask in the LVT.
	//
	bool reset_rtm_trap()
	{
		if ( !rtm_ctr_msr )
			return false;

		// Return false if the global status does not indicate PMC0 overflowing.
		//
		auto global_status = ia32::read_msr<ia32::perf_global_status_register>( IA32_PERF_GLOBAL_STATUS );
		if ( !( global_status.flags & ( IA32_PERF_GLOBAL_STATUS_OVF_PMC0_FLAG << rtm_pmc ) ) )
			return false;

		ia32::apic::controller apic{};

		// Clear the global status.
		//
		ia32::perf_global_status_reset_register reset = { .flags = 0 };
		reset.clear_cond_chgd = 1;
		reset.clear_ovf_pmcn = 1 << rtm_pmc;
		ia32::write_msr( IA32_PERF_GLOBAL_STATUS_RESET, reset );
		
		// Reset the LVT entry for PMI.
		//
		reset_lapic( apic );

		// Signal EoI and indicate matching condition.
		//
		apic.end_of_interrupt();
		return true;
	}

	// Sets the RTM trap state, returns false if it was skipped.
	//
	FORCE_INLINE bool set_rtm_trap_state( bool armed ) 
	{
		if ( !rtm_ctr_msr )
			return false;
		ia32::write_msr( rtm_ctr_msr, armed ? -1ll : 0ll );
		return true;
	}

	// Reads/writes the virtual cycle counter.
	//
	FORCE_INLINE uint64_t read_vtsc()
	{
		return ia32::read_pmc( um_cycle_pmc ) >> um_cycle_shf;
	}
	FORCE_INLINE void write_vtsc( uint64_t value )
	{
		ia32::write_msr( um_cycle_msr, value << um_cycle_shf );
	}

	// Acquires PMU ownership from HAL.
	//
	static void acquire_vpmu_exclusive()
	{
		// Disable monitoring.
		//
		ntpp::for_each_processor( [ ] {
			for ( size_t p = 0; p != 16; p++ )
				hal::stop_profile_interrupt( p );
		} );

		// First ask nicely.
		//
		if ( sdk::exists( halp::get_full_pmu_ownership ) ) {
			uint64_t handle = 0;
			halp::get_full_pmu_ownership( &handle );
		}


		// Disable PMUs.
		//
		if ( ia32::is_intel() ) {
			if ( sdk::exists( emon::pebs_in_use ) )                *( volatile uint32_t* ) &emon::pebs_in_use = 1;
			if ( sdk::exists( emon::number_arch_counters ) )       *( volatile uint32_t* ) &emon::number_arch_counters = 0;
			if ( sdk::exists( emon::number_fixed_counters ) )      *( volatile uint32_t* ) &emon::number_fixed_counters = 0;
			if ( sdk::exists( emon::number_counters ) )            *( volatile uint32_t* ) &emon::number_counters = 0;
		} else {
			if ( sdk::exists( nt::amd64_number_cache_counters ) )  *( volatile uint32_t* ) &nt::amd64_number_cache_counters = 0;
			if ( sdk::exists( nt::amd64_number_core_counters ) )   *( volatile uint32_t* ) &nt::amd64_number_core_counters = 0;
			if ( sdk::exists( nt::amd64_number_counters ) )        *( volatile uint32_t* ) &nt::amd64_number_counters = 0;
		}
		*( volatile uint32_t* ) &ki::hw_counters_count = 0;
		if ( sdk::exists( halp::pmu_in_use ) ) *( volatile uint32_t* ) &halp::pmu_in_use = 1;
		for ( auto& kpcr : ke::get_kprcbs() )
			kpcr->hal_reserved[ 2 ] |= 1;

		// Next we use violance.
		//
		*( void** ) &halp::profile_interface = ( void* ) &nt::default_profile_interface;
		hook::patch( &ke::start_profile, { 0xB0, 0x01, 0xC3 } );

		// Kill the counters.
		//
		if ( !ia32::is_intel() ) {
			ntpp::for_each_processor( [ ] {
				auto ctr = ia32::pmu::amd_traits::get_dynamic_counter_count();
				for ( uint32_t p = 0; p != ctr; p++ ) {
					write_msr( ia32::pmu::amd_traits::resolve_dynamic( p ).first, ia32::perfevtsel_register{.flags = 0 } );
				}
			} );
		}
	}

	// Initializes the PMU.
	//
	template<bool IsIntel>
	static void init_vpmu( ia32::pmu::traits_of<IsIntel> ) {
		using PMU = ia32::pmu::traits_of<IsIntel>;

		// Clear and validate PMU.
		//
		ntpp::for_each_processor( [ & ] () {
			// Clear global and fixed controls.
			//
			if ( PMU::global_control != UINT32_MAX ) ia32::write_msr( PMU::global_control, 0 );
			if ( PMU::fixed_control != UINT32_MAX ) ia32::write_msr( PMU::fixed_control, 0 );

			// Clear global status.
			//
			if constexpr ( IsIntel ) {
				auto& caps = ia32::static_cpuid_s<0xA, 0, ia32::cpuid_eax_0a>;
				if ( caps.eax.version_id_of_architectural_performance_monitoring > 3 ) {
					// Disable PEBS.
					//
					ia32::write_msr( IA32_PEBS_ENABLE, 0 );

					// Reset global status.
					//
					auto global_status = ia32::read_msr<ia32::perf_global_status_register>( IA32_PERF_GLOBAL_STATUS );
					ia32::perf_global_status_reset_register reset = { .flags = 0 };
					reset.clear_ovf_pmcn =       xstd::fill_bits( caps.eax.number_of_performance_monitoring_counter_per_logical_processor );
					reset.clear_ovf_fixed_ctrn = xstd::fill_bits( caps.edx.number_of_fixed_function_performance_counters );
					reset.clear_lbr_frz =        global_status.lbr_frz;
					reset.clear_ctr_frz =        global_status.ctr_frz;
					reset.clear_ovf_buf =        global_status.ovf_buf;
					reset.clear_cond_chgd =      global_status.cond_chgd;
					ia32::write_msr( IA32_PERF_GLOBAL_STATUS_RESET, reset );
				}
			}

			// For each dynamic counter:
			//
			if ( uint32_t dyn_counters = PMU::get_dynamic_counter_count() ) {
				for ( uint32_t i = 0; i != dyn_counters; i++ ) {
					auto [cfg, val] = PMU::resolve_dynamic( i );
					ia32::write_msr( cfg, 0 );

					// If debug build with vmware detection, disable PMU if MSRs are being ignored.
					//
					if constexpr ( fix_hypervisor_bugs ) {
						if ( !i && ia32::is_hypervisor() ) {
							ia32::write_msr( val, 1 );
							if ( !ia32::read_msr( val ) ) {
								disable_vpmu();
							}
						}
					}
				}
			} else {
				// Set no PMU if no dynamic counters available.
				//
				disable_vpmu();
			}
		} );

		// Fast fail if we had to disable PMCs.
		//
		if ( is_vpmu_disabled() ) {
			return;
		}

		// Determine the requested setup.
		//
		ia32::perf_global_ctrl_register glb_ctrl =   { .en_pmcn = 0, .en_fixed_ctrn = 0 };
		ia32::fixed_ctr_ctrl_register   fixed_ctrl = { .flags = 0 };
		xstd::small_vector<std::tuple<uint32_t, uint32_t, ia32::perfevtsel_register>, 4> dyn_ctrls;
		
		// Setup RTM interrupt if required.
		//
		if ( requires_rtm_interrupt ) {
			constexpr auto rtm_event = PMU::template dynamic_selector<ia32::pmu::event_id::rtm_retired_start>();
			if ( rtm_event ) {
				if ( auto [cfg, ctr] = PMU::resolve_dynamic( rtm_pmc, false, true ); cfg != UINT32_MAX ) {
					rtm_ctr_msr = ctr;
					glb_ctrl.en_pmcn |= 1 << rtm_pmc;

					ia32::perfevtsel_register sel = { .flags = 0 };
					sel.event_select = rtm_event.event_select;
					sel.u_mask = rtm_event.unit_mask;
					sel.edge = rtm_event.edge;
					sel.inv = rtm_event.invert;
					sel.cmask = rtm_event.count_mask;
					sel.os = false;
					sel.usr = true;
					sel.intr = true;
					sel.en = true;
					dyn_ctrls.emplace_back( cfg, ctr, sel );
				}
			}
		}

		// Try to setup a PMC to track user-mode cycles.
		//
		static constexpr auto clk_core_evtsel = PMU::template dynamic_selector<ia32::pmu::event_id::clock_core>();
		do {
			// Try setting up the fixed counter.
			//
			if constexpr ( IsIntel ) {
				static constexpr auto tsc_idx = PMU::template fixed_counter<ia32::pmu::event_id::clock_tsc>();
				if ( auto [fcfg, fctr] = PMU::resolve_fixed( tsc_idx, true ); fcfg != UINT32_MAX ) {
					um_cycle_pmc = ( 1u << 30 ) | tsc_idx;
					um_cycle_msr = fctr;
					um_cycle_shf = 2;
					glb_ctrl.en_fixed_ctrn |= 1u << tsc_idx;

					ia32::fixed_ctr_ctrl_register sfx = { .flags = 0 };
					sfx.en0_usr = 1;
					fixed_ctrl.flags |= sfx.flags << ( tsc_idx * ( IA32_FIXED_CTR_CTRL_EN1_USR_BIT - IA32_FIXED_CTR_CTRL_EN0_USR_BIT ) );
					break;
				}
			}

			// Otherwise, try using clock.
			//
			if ( clk_core_evtsel && PMU::get_dynamic_counter_count() > core_clk_pmc ) {
				if ( auto [cfg, ctr] = PMU::resolve_dynamic( core_clk_pmc, false, true ); cfg != UINT32_MAX ) {
					um_cycle_pmc = core_clk_pmc;
					um_cycle_msr = cfg;
					um_cycle_shf = 4;
					glb_ctrl.en_pmcn |= 1 << core_clk_pmc;

					ia32::perfevtsel_register sel = { .flags = 0 };
					sel.event_select = clk_core_evtsel.event_select;
					sel.u_mask = clk_core_evtsel.unit_mask;
					sel.edge = clk_core_evtsel.edge;
					sel.inv = clk_core_evtsel.invert;
					sel.cmask = clk_core_evtsel.count_mask;
					sel.os = false;
					sel.usr = true;
					sel.en = true;
					dyn_ctrls.emplace_back( cfg, ctr, sel );
					break;
				}
			}

			// If we couldn't find a suitable MSR, disable VPMU.
			//
			disable_vpmu();
		} while ( false );

		// Write back the registers.
		//
		ntpp::for_each_processor( [ & ] () {
			for ( auto& [cfg, ctr, sel] : dyn_ctrls ) {
				ia32::write_msr( ctr, 0 );
				ia32::write_msr( cfg, sel );
			}
			
			if ( PMU::global_control != UINT32_MAX ) ia32::write_msr( PMU::global_control, glb_ctrl );
			if ( PMU::fixed_control  != UINT32_MAX ) ia32::write_msr( PMU::fixed_control,  fixed_ctrl );

			if ( rtm_ctr_msr ) reset_lapic();
		} );
	}
	static void init_vpmu()
	{
		// Acquire exclusive access to the PMU from the HAL.
		//
		acquire_vpmu_exclusive();

		// Visit traits, initialize logic based on vendor.
		//
		ia32::pmu::visit_traits( [ ] ( auto traits ) { init_vpmu( traits ); } );
	}

	// Mitigates against information leaks via Intel TSX:
	//
	static void mitigate_tsx()
	{
		// Skip if CPU does not support RTM.
		//
		auto& cpuid7 = ia32::static_cpuid_s<7, 0, ia32::cpuid_eax_07>;
		if ( !cpuid7.ebx.rtm ) {
			if constexpr ( fix_hypervisor_bugs ) {
				if ( !ia32::is_hypervisor() ) {
					return;
				}
			}
		}

		// If CPU Supports IA32_ARCH_CAPABILITIES:
		//
		if ( cpuid7.edx.ia32_arch_capabilities ) {
			// If CPU Supports TSX_CTRL:
			//
			auto arch_caps = ia32::read_msr<ia32::arch_capabilities_register>( IA32_ARCH_CAPABILITIES );
			if ( arch_caps.tsx_ctrl ) {
				ntpp::for_each_processor( [ ] { ia32::write_msr( IA32_TSX_CTRL, IA32_TSX_CTRL_RTM_DISABLE_FLAG | IA32_TSX_CTRL_TSX_CPUID_CLEAR_FLAG ); } );
				return;
			}
		}

		// Since we cannot make the CPU #UD for us, notify the VPMU to set the interrupt on RTM.
		//
		requires_rtm_interrupt = true;

		// If CPU supports TSX_FA_FORCE_ABORT_RTM or TSX_FA_TSX_CPUID_CLEAR, set it:
		//
		if ( xstd::bit_test( cpuid7.edx.flags, 13 ) ) {
			uint32_t value = TSX_FA_FORCE_ABORT_RTM;
			if ( xstd::bit_test( cpuid7.edx.flags, 11 ) )
				value |= TSX_FA_TSX_CPUID_CLEAR;
			ntpp::for_each_processor( [ & ] { ia32::write_msr( IA32_TSX_FORCE_ABORT, value ); } );

			// Refresh PMU CPUID as it may have enabled an additional PMC.
			//
			ia32::refresh_cpuid<0xA, 0>();
		}
	}

	NO_INLINE void init()
	{
		// If Intel processor:
		//
		if ( ia32::is_intel() ) {
			// Mitigate against TSX.
			//
			mitigate_tsx();

			// Configure LBR to not record kernel branches and DEBUGCTL to skip BTS during kernel execution.
			//
			ntpp::for_each_processor( [ & ] {
				ia32::write_msr( IA32_DEBUGCTL, ia32::read_msr( IA32_DEBUGCTL ) | IA32_DEBUGCTL_BTS_OFF_OS_FLAG );

				if ( ia32::static_cpuid_s<7, 0, ia32::cpuid_eax_07>.edx.arch_lbr )
					ia32::write_msr( IA32_LBR_CTL, ia32::read_msr( IA32_LBR_CTL ) & ~LBR_CTL_CPL_EQ_0 );
				else
					ia32::write_msr( IA32_LBR_SELECT, ia32::read_msr( IA32_LBR_SELECT ) & ~LBR_SELECT_CPL_EQ_0 );
			} );
		} else {
			// Disable user-mode access to branch-tracing as AMD does not support any filtering facilities.
			//
			ntpp::for_each_processor( [ & ] {
				ke::get_kprcb()->feature_bits &= ~KF_DTS;
			} );
		}

		// Initialize the VPMU.
		//
		init_vpmu();
	}
};