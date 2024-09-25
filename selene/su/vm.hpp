#pragma once
#include <ia32.hpp>
#include <xedpp.hpp>
#include <leh.hpp>
#include <unordered_map>
#include <xstd/random.hpp>
#include <xstd/bitwise.hpp>
#include <xstd/bitmap.hpp>
#include <xstd/hashable.hpp>
#include <xstd/crc.hpp>
#include <xstd/small_vector.hpp>
#include <cfw/trapframe.hpp>
#include <sdk/nt/kpcr_t.hpp>
#include "../utility/memory.hpp"
#include "../utility/apic.hpp"
#include "../utility/thread.hpp"
#include "../utility/page_manager.hpp"
#include "../utility/safe_wrappers.hpp"
#include "register_mask.hpp"
#include "trapframe.hpp"
#include "xt.hpp"
#include "ext/vpmu.hpp"
#include "plpd.hpp"

namespace su
{
	inline constexpr auto host_has_smep = [ ] { return ia32::static_cpuid<7, 0, ia32::cpuid_eax_07>.ebx.smep; };
	inline constexpr auto host_has_smap = [ ] { return ia32::static_cpuid<7, 0, ia32::cpuid_eax_07>.ebx.smap; };
	inline constexpr auto host_has_umip = [ ] { return ia32::static_cpuid<7, 0, ia32::cpuid_eax_07>.ecx.umip; };

	//
	// ISR table configuration.
	//
	inline constexpr size_t max_specialized_isr = ( size_t ) interrupt_type::debug_service_trap;
	using isr_t =       void( * )( );
	using isr_pair_t =  std::array<isr_t, 2>; // [Guest, Host]
	using isr_table_t = const std::array<isr_pair_t, max_specialized_isr + 2>*;

	template<xstd::StatelessLambda Fn>
	struct isr_table_generator
	{
		static constexpr auto value = xstd::make_constant_series<max_specialized_isr + 2>( [] <auto N> ( xstd::const_tag<N> ) -> isr_pair_t
		{
			return Fn{}( ( interrupt_type ) N );
		} );
	};
	template<xstd::StatelessLambda Fn>
	inline constexpr isr_table_t make_isr_table( Fn ) { return &isr_table_generator<Fn>::value; }

	//
	// Host configuration.
	//
	inline constexpr size_t host_gdt_count = 0xB;
	inline constexpr size_t host_idt_count = 0x100;
	inline constexpr ia32::segment_selector host_seg_r0_code =  { .flags = 0x10 };
	inline constexpr ia32::segment_selector host_seg_r0_data =  { .flags = 0x18 };
	inline constexpr ia32::segment_selector host_seg_r3_ccode = { .flags = 0x23 };
	inline constexpr ia32::segment_selector host_seg_r3_data =  { .flags = 0x2b };
	inline constexpr ia32::segment_selector host_seg_r3_code =  { .flags = 0x33 };
	inline constexpr ia32::segment_selector host_seg_task =     { .flags = 0x40 };
	inline constexpr ia32::segment_selector host_seg_fs_data =  { .flags = 0x53 };

	//
	// Privilege levels.
	//
	inline constexpr char r0_vpl =                 2;
	inline constexpr interrupt_type non_privileged_interrupts[] = 
	{ 
		interrupt_type::debug,        interrupt_type::breakpoint, 
		interrupt_type::overflow,     interrupt_type::raise_security_check, 
		interrupt_type::raise_assert, interrupt_type::debug_service_trap 
	};
	
	//
	// Virtualization configuration.
	//
	inline constexpr bool fix_hypervisor_bugs =    is_debug_build() && true;  // Virtualize certain things to hide a host VMX for debugging
	inline constexpr bool cpuid_faulting =         is_debug_build() && false; // CPUID faulting for debugging.
	inline constexpr bool enable_mtf =             is_debug_build() && false; // Enables MTF for debugging.
	inline constexpr bool isr_print_context =      true;
	inline constexpr bool vr0_iopl =               false;

	//
	// Segmentation configuration.
	//
	inline constexpr ia32::gdt_entry guest_vr0_code_seg = {
		.limit_low =   0,        .offset_low = 0,       .offset_middle =  0,
		.ac =          true,     .rw =         true,    .dc =             false, 
		.exec =        true,     .s =          true,    .priv =           r0_vpl, 
		.present =     true,     .limit_high = 0,       .avl =            0,
		.l =           true,     .sz =         false,   .granularity =    false, 
		.offset_high = 0,
	};
	inline constexpr ia32::gdt_entry guest_vr0_data_seg = {
		.limit_low =   0,        .offset_low = 0,       .offset_middle = 0,
		.ac =          true,     .rw =         true,    .dc =            false, 
		.exec =        false,    .s =          true,    .priv =          r0_vpl, 
		.present =     true,     .limit_high = 0,       .avl =           0, 
		.l =           false,    .sz =         true,    .granularity =   false, 
		.offset_high = 0,
	};
	inline constexpr ia32::segment_selector guest_seg_vr0_code = {
		.request_privilege_level = r0_vpl,
		.table = 0,
		.index = host_gdt_count
	};
	inline constexpr ia32::segment_selector guest_seg_vr0_data = {
		.request_privilege_level = r0_vpl,
		.table = 0,
		.index = host_gdt_count + 1
	};

	//
	// Memory configuration.
	//
	inline constexpr size_t stack_size =     64_kb;
	inline constexpr size_t ist_stack_size = 16_kb;

	//
	// Control register configuration.
	//
	inline const register_mask cr4_mask = {
		// Force set:
		( host_has_smep() ? CR4_SMEP_ENABLE_FLAG : 0ull ) |
		( host_has_umip() ? CR4_USERMODE_INSTRUCTION_PREVENTION_FLAG : 0ull ) |
		( host_has_pcid() ? CR4_PCID_ENABLE_FLAG : 0ull ),
		// -- Timestamp disable is set conditionally by additional logic.

		// Mask off:
		CR4_PERFORMANCE_MONITORING_COUNTER_ENABLE_FLAG |
		CR4_PAGE_GLOBAL_ENABLE_FLAG |
		( fix_hypervisor_bugs ? CR4_VMX_ENABLE_FLAG : 0ull ),
	};

	// Interrupt injection flags.
	//
	enum int_injection_flags : uint8_t
	{
		int_inject_external =         0,
		int_inject_syscall =          1 << 0, 
		int_inject_user_req =         1 << 1, // INT1, INT3, INTO, INT n
		int_inject_no_record =        1 << 2,
		int_inject_no_cpl_check =     1 << 3, // INT1
		int_inject_recursive =        1 << 4,
	};

	// Emulation context:
	//
	struct emu_context
	{
		// Handler storage.
		//
		struct handler
		{
			xstd::small_vector<uint8_t, 128> program = {};
		};

		// Common hasher for keys.
		//
		struct key_hasher
		{
			template<typename T>
			FORCE_INLINE uint32_t operator()( const T& key ) const noexcept { return ia32::crc32ci( &key, sizeof( key ) ); }
		};

		// Local and global key types.
		//
#pragma pack(push, 1)
		struct local_key
		{
			// Address of the fault.
			//
			any_ptr address = nullptr;

			// Page table context for the address if as is if using iCache, else bytes.
			//
			union {
				uint64_t ptpfn;
				uint8_t  bytes[ 15 ] = { 0 };
			};

			// Flags.
			//
			union {
				struct {
					// Privilege level of the cached fault, legacy/long switch, originating exception.
					//
					uint8_t cpl : 1;
					uint8_t legacy : 1;
					uint8_t oexc : 6;
				};
				uint8_t flags = 0;
			};
			
			// Implement comparison.
			//
			bool operator<( const local_key& o ) const noexcept { return memcmp( this, &o, sizeof( *this ) ) < 0; }
			bool operator==( const local_key& o ) const noexcept { return xstd::trivial_equals( *this, o ); }
			bool operator!=( const local_key& o ) const noexcept { return !xstd::trivial_equals( *this, o ); }
		};
		struct global_key
		{
			// Bytes of the instruction.
			//
			uint8_t  bytes[ 15 ] = { 0 };
			union
			{
				struct
				{
					// Privilege level of the cached fault, legacy/long switch, originating exception.
					//
					uint8_t cpl         : 1;
					uint8_t legacy      : 1;
					uint8_t oexc        : 6;
				};
				uint8_t flags = 0;
			};

			// Implement comparison.
			//
			bool operator<( const global_key& o ) const noexcept { return memcmp( this, &o, sizeof( *this ) ) < 0; }
			bool operator==( const global_key& o ) const noexcept { return xstd::trivial_equals( *this, o ); }
			bool operator!=( const global_key& o ) const noexcept { return !xstd::trivial_equals( *this, o ); }
		};
#pragma pack(pop)
		static_assert( sizeof( global_key ) == 16 && sizeof( local_key ) == 24, "Invalid key size." );

		// Emulated extensions.
		//
		ext::vpmu vpmu = {};
		uint64_t kguest_debugctl = 0;

		// Handler cache.
		//
		std::unordered_map<local_key, handler, key_hasher> local_cache = {};
		volatile bool flush_pending = false;
		
		// Global handler cache.
		//
		inline static xstd::shared_spinlock global_cache_lock = {};
		inline static std::unordered_map<global_key, handler, key_hasher> global_cache = {};

		// Reserve a fixed amount on creation.
		//
		emu_context() { local_cache.reserve( 512 ); }
	};

	// Virtual machine context:
	//
	struct alignas(0x1000) vm_context
	{
		// The ISR stacks.
		//
		alignas( 0x10 ) uint8_t isr_stack[ stack_size ];
		alignas( 0x10 ) uint8_t nmi_stack[ ist_stack_size ];
		alignas( 0x10 ) uint8_t df_stack[ ist_stack_size ];

		// Processor-local page directory.
		//
		plpd::memory mm = {};
		
		// GDT and TSS.
		//
		ia32::gdt_entry gdt[ host_gdt_count + 2 ] = {};
		ia32::tss<> tss = {};

		// Reference to the owner KPCR.
		//
		nt::kpcr_t*                          kpcr =      nullptr;
		ia32::segment_descriptor_register_64 kpcr_idtr = {};
		ia32::segment_descriptor_register_64 kpcr_gdtr = {};
		const void*                          kpcr_tss =  nullptr;
		uint64_t                             pcid = 0;

		// Active execution tracing buffer.
		//
		std::shared_ptr<xt::local_buffer> event_buffer = nullptr;

		// Guest context.
		//
		ia32::segment_descriptor_register_64 guest_idtr = {};
		ia32::segment_descriptor_register_64 guest_gdtr = {};
		ia32::segment_selector guest_tr = {};
		uint8_t guest_cr8 = {};
		ia32::cr4 guest_cr4 = {};
		uint64_t guest_lstar = ia32::read_msr( IA32_LSTAR );
		uint64_t guest_cstar = ia32::read_msr( IA32_CSTAR );
		// Fixed values for optimization reasons, writes should fail:
		const uint64_t guest_star = ia32::read_msr( IA32_STAR );
		const uint64_t guest_fmask = ia32::read_msr( IA32_FMASK );

		// Persistent VCPU state.
		//
		any_ptr guest_cr2 = {};
		uint32_t guest_tsc_aux = {};

		// Monitor state.
		//
		volatile uint8_t pending_nmi = 0;
		
		// Virtual machine configuration.
		//
		using exit_callback_t = void(*)( vm_context* vmcs );
		isr_table_t vm_isr_table = nullptr;
		exit_callback_t exit_callback = [ ] ( vm_context* ) {};
		bool rtm_trap_set = false;

		// MTF.
		//
		isr_t mtf = nullptr;

		// Emulation context.
		//
		emu_context emu = {};

		// Debug save area.
		//
		thread::dbg_save_area* active_dbg_save_area = nullptr;
		thread::dbg_save_area local_dbg_save_area = {};

		// Local context for exception handling.
		//
		volatile uint64_t leh_ctx = 0;

		// Temporary for VMM state.
		//
		void* vmm_ud = nullptr;

		// Creates the VM context given the processor, reserved for internal use.
		//
		vm_context( nt::kpcr_t* kpcr );

		// Checks if the given pointer is within monitor stack.
		//
		inline xstd::numeric_range<any_ptr> get_monitor_stack_range() const { return { std::begin( isr_stack ), std::end( df_stack ) }; }
		inline bool is_monitor_stack( any_ptr p ) const { return get_monitor_stack_range().contains( p ).has_value(); }

		// Gets the first trapframe in the stack.
		//
		inline trapframe* get_base_trapframe() const { return std::prev( ( trapframe* ) std::end( isr_stack ) ); }

		// Updates the guest Cr4.
		//
		void set_guest_cr4( ia32::cr4 value );

		// Primitives for reading and writing guest memory, on failure returns the number of bytes left.
		// - Injects a #PF on failure if TF is given.
		// - If TF is not given, ignores permissions.
		//
		size_t read_guest( trapframe* tf, any_ptr dst, any_ptr src, size_t n, bool execute = false );
		size_t write_guest( trapframe* tf, any_ptr dst, any_ptr src, size_t n );

		// Helpers writing basic read/write.
		//
		template<typename T>
		FORCE_INLINE std::optional<T> from_guest( trapframe* tf, const T* src, bool execute = false ) {
			std::optional<T> result;
			if ( read_guest( tf, &result.emplace(), src, sizeof( T ), execute ) ) {
				result.reset();
			}
			return result;
		}
		template<typename T>
		FORCE_INLINE bool into_guest( trapframe* tf, any_ptr dst, const T& value ) {
			return !write_guest( tf, dst, &value, sizeof( T ) );
		}

		// GDT/IDT utilities.
		//
		template<typename T = ia32::gdt_entry>
		FORCE_INLINE inline T* ref_guest_gdt( size_t n ) {
			size_t offset = n * sizeof( ia32::gdt_entry );
			if ( ( offset + sizeof( T ) ) > ( 1ull + guest_gdtr.limit ) ) [[unlikely]] {
				return nullptr;
			}
			return ( T* ) ( guest_gdtr.base_address + offset );
		}
		template<typename T = ia32::idt_entry>
		FORCE_INLINE inline T* ref_guest_idt( size_t n ) {
			size_t offset = n * sizeof( ia32::idt_entry );
			if ( ( offset + sizeof( T ) ) > ( 1ull + guest_idtr.limit ) ) [[unlikely]] {
				return nullptr;
			}
			return ( T* ) ( guest_idtr.base_address + offset );
		}
		template<typename T = ia32::gdt_entry>
		FORCE_INLINE inline std::optional<T> read_guest_gdt( size_t n ) {
			T* ptr = ref_guest_gdt<T>( n );
			if ( !ptr ) [[unlikely]] return std::nullopt;
			if ( guest_gdtr.base_address == kpcr_gdtr.base_address ) [[likely]] {
				return *ptr;
			} else {
				return from_guest( nullptr, ptr );
			}
		}
		template<typename T = ia32::idt_entry>
		FORCE_INLINE inline std::optional<T> read_guest_idt( size_t n ) {
			T* ptr = ref_guest_idt<T>( n );
			if ( !ptr ) [[unlikely]] return std::nullopt;
			if ( guest_idtr.base_address == kpcr_idtr.base_address ) [[likely]] {
				return *ptr;
			} else {
				return from_guest( nullptr, ptr );
			}
		}

		// Switches to VM context and starts virtual execution on procedure return.
		//
		void enter( nt::trapframe* tf );

		// Switches to VM context immediately.
		//
		void enter( uint8_t vpl, ia32::rflags flags = { .flags = 0x246 } );

		// Exits the VM context and starts real execution on procedure return.
		//
		void exit( trapframe* tf );
		void exit [[noreturn]] ( cfw::trapframe* tf );
		void exit_for_suspend();

		// Delivers an interrupt within the guest context to the host.
		// - Does not exit the VM.
		//
		void deliver( trapframe* tf, interrupt_type type, uint64_t error_code = 0, any_ptr fault_address = nullptr, uint8_t flags = int_inject_external );
		void deliver( cfw::trapframe* tf, interrupt_type type, uint64_t error_code = 0, any_ptr fault_address = nullptr, uint8_t flags = int_inject_external );

		// Injects an interrupt within the guest context to the host.
		// - Exits the VM.
		//
		template<typename Tf>
		inline void inject( Tf* tf, interrupt_type type, uint64_t error_code = 0, any_ptr fault_address = nullptr, uint8_t flags = int_inject_external )
		{
			// Record the interrupt injection.
			//
			if ( !( flags & int_inject_no_record ) && event_buffer )
			{
				if ( flags & int_inject_syscall )
					record_checkpoint( tf, type == interrupt_type::native_syscall ? xt::checkpoint_syscall : xt::checkpoint_csyscall, tf->rax, tf->r10, tf->rdx, tf->r8, tf->r9 );
				if ( int_has_error( tf->type ) )
					record_interrupt( tf, type, error_code );
				else
					record_interrupt( tf, type );
			}

			// Deliver the interrupt.
			//
			deliver( tf, type, error_code, fault_address, flags );
			exit( tf );
		}
		template<typename Tf>
		inline void inject( Tf* tf, uint8_t flags = int_inject_external ) { inject( tf, tf->type, tf->error_code, tf->fault_address, flags ); }

		// Resumes guest execution.
		//
		void resume( trapframe* tf );
		void resume [[noreturn]] ( cfw::trapframe* tf );

		// Emulates the given instruction, returns true if emulation was successful and the supervisor
		// can continue execution from the trapframe.
		// - Callbacks will be read/write on tf->temp and they are allowed to do trapframe::current()
		//
		using fn_vmemop = void( __cdecl* )( void* target, uint32_t length, bool is_write );
		bool emulate( trapframe* tf, fn_vmemop callback = nullptr, const uint8_t* ip_alt = nullptr, bool force = false );
		FORCE_INLINE void emulate_s( trapframe* tf, fn_vmemop callback = nullptr, const uint8_t* ip_alt = nullptr ) { return ( void ) emulate( tf, callback, ip_alt, true ); }

		// Flushes the instruction cache.
		//
		void flush_icache();

		// Clears the VM state from previous execution.
		//
		void clear()
		{
			if constexpr ( enable_mtf ) {
				mtf = nullptr;
			}
			event_buffer.reset();
			vm_isr_table = nullptr;
			rtm_trap_set = false;
			active_dbg_save_area = nullptr;
			exit_callback = [ ] ( vm_context* ) {};
		}

		// Observers.
		//
		FORCE_INLINE bool is_active() {
			return vm_isr_table != nullptr;
		}
		FORCE_INLINE nt::ethread_t* get_current_thread() {
			return ( nt::ethread_t* ) kpcr->prcb.current_thread;
		}

		// Helpers wrapping around the event buffer.
		//
		template<typename Tf>
		FORCE_INLINE xt::task_snapshot tf_snapshot( const Tf* tf )
		{
			uint8_t irql = tf->rflags.interrupt_enable_flag ? guest_cr8 : HIGH_LEVEL;
			return { .ip = tf->rip, .sp = tf->rsp, .tpr = irql, .pcid = 0 /*Not used by minimal events.*/ };
		}
		template<typename Tf>
		FORCE_INLINE xt::task_parameters tf_task_parameters( const Tf* tf, uint8_t irql )
		{
			// Query the stack range.
			//
			auto* thread =       get_current_thread();
			auto [range, type] = ntpp::query_stack_information( tf->rsp, irql, thread );
			return { 
				.stack_used = ( uint32_t ) ( *range.end() - tf->rsp ), 
				.stack_size = ( uint32_t ) range.size(), 
				.tid = ( uint32_t ) ( size_t ) thread->cid.unique_thread 
			};
		}
		template<typename Tf>
		FORCE_INLINE xt::control_parameters tf_control_parameters( const Tf* tf )
		{
			// Fast-read the stack.
			//
			uint64_t tos = safe::read<uint64_t>( tf->rsp ).value_or( 0 );
			return { .tos = tos, .retval = tf->rax };
		}

		// -- XT wrappers
		COLD void unchecked_transfer_deferred( const xt::task_snapshot& snap, std::span<const uint8_t> deferred );
		template<typename Tf, typename... Tx>
		NO_INLINE FLATTEN void unchecked_record_enter( const Tf* tf, const Tx&... args )
		{
			// Snapshot the trapframe, get current thread details, clear pendingav flag.
			//
			auto snap = tf_snapshot( tf );
			nt::ethread_t* thread = get_current_thread();
			thread::context* tls =  thread::get_context( thread );
			if ( tls ) tls->xt_pending_available = false;

			// Record the enter:
			//
			do {
				// If thread wanted to skip enter sequence:
				//
				if ( tls && std::exchange( tls->xt_skip_enter, false ) ) {
					// If landed on the same processor and expected stack, record nothing.
					//
					if ( pcid == tls->xt_skip_pcid && tf->rsp == tls->xt_skip_sp )
						break;

					// Otherwise record a swap context.
					//
					event_buffer->swap_context( snap, tls->xt_skip_pcid, ( uint32_t ) ( size_t ) thread->cid.unique_thread );
					break;
				}

				// Record a normal enter.
				//
				event_buffer->enter( snap, tf_task_parameters( tf, snap.tpr ), tf_control_parameters( tf ), args... );
			} while ( false );

			// If thread has pending checkpoints:
			//
			if ( tls && !tls->xt_pending_chk.empty() ) [[unlikely]] {
				// Transfer all deferred events and clear.
				//
				unchecked_transfer_deferred( snap, { tls->xt_pending_chk } );
				tls->xt_pending_chk.clear();
			}
		}
		template<typename Tf, typename... Tx>
		NO_INLINE FLATTEN void unchecked_record_checkpoint( const Tf* tf, xt::checkpoint_id chk, const Tx&... args )
		{
			event_buffer->checkpoint( tf_snapshot( tf ), chk, args... );
		}
		template<typename Tf, typename... Tx>
		NO_INLINE FLATTEN void unchecked_record_exit( const Tf* tf, const Tx&... args )
		{
			event_buffer->exit( tf_snapshot( tf ), tf_control_parameters( tf ), args... );
		}
		template<typename Tf, typename... Tx>
		NO_INLINE FLATTEN void unchecked_record_exit_silent( const Tf* tf )
		{
			event_buffer->silent_exit( tf_snapshot( tf ) );
		}
		template<typename Tf, typename... Tx>
		NO_INLINE FLATTEN void unchecked_record_interrupt( const Tf* tf, interrupt_type vec, const Tx&... args )
		{
			event_buffer->interrupt( tf_snapshot( tf ), xt::interrupt_id( vec ), args... );
		}
		template<typename Tf, typename... Tx>
		NO_INLINE FLATTEN void unchecked_record_comment( const Tf* tf, const Tx&... args )
		{
			event_buffer->comment( tf_snapshot( tf ), args... );
		}
		template<typename Tf, typename... Tx>
		NO_INLINE FLATTEN void unchecked_record_error( const Tf* tf, const Tx&... args )
		{
			event_buffer->error( tf_snapshot( tf ), args... );
		}
		// -- Buffer checking wrappers
		template<typename Tf, typename... Tx>
		FORCE_INLINE void record_enter( const Tf* tf, const Tx&... args )
		{
			if ( event_buffer )
				return unchecked_record_enter( tf, args... );
		}
		template<typename Tf, typename... Tx>
		FORCE_INLINE void record_checkpoint( const Tf* tf, xt::checkpoint_id chk, const Tx&... args )
		{
			if ( event_buffer )
				return unchecked_record_checkpoint( tf, chk, args... );
		}
		template<typename Tf, typename... Tx>
		FORCE_INLINE void record_exit( const Tf* tf, const Tx&... args )
		{
			if ( event_buffer )
				return unchecked_record_exit( tf, args... );
		}
		template<typename Tf, typename... Tx>
		FORCE_INLINE void record_exit_silent( const Tf* tf )
		{
			if ( event_buffer )
				return unchecked_record_exit_silent( tf );
		}
		template<typename Tf, typename... Tx>
		FORCE_INLINE void record_interrupt( const Tf* tf, interrupt_type vec, const Tx&... args )
		{
			if ( event_buffer )
				return unchecked_record_interrupt( tf, vec, args... );
		}
		template<typename Tf, typename... Tx>
		FORCE_INLINE void record_comment( const Tf* tf, const Tx&... args )
		{
			if ( event_buffer )
				return unchecked_record_comment( tf, args... );
		}
		template<typename Tf, typename... Tx>
		FORCE_INLINE void record_error( const Tf* tf, const Tx&... args )
		{
			if ( event_buffer )
				return unchecked_record_error( tf, args... );
		}
	};
	static_assert( sizeof( vm_context ) <= 2_mb, "VM context should fit a single large page." );

	// Global table of VM contexes.
	//
	inline vm_context* vmcs_table[apic::max_processor_count] = {};
	FORCE_INLINE inline vm_context* get_vm( uint32_t number ) { return vmcs_table[ number ]; }
	FORCE_INLINE inline vm_context* get_vm() 
	{
		dassert( !ia32::interrupts_enabled() );
		return get_vm( ia32::read_pcid() );
	}

	// Records a thread checkpoint.
	//
	template<typename... Tx>
	FORCE_INLINE inline void record_thr_checkpoint( xt::checkpoint_id chk, const Tx&... args ) {
		if ( auto tls = thread::get_context(); tls && tls->xt_pending_available ) {
			xt::write_partial( tls->xt_pending_chk, chk, args... );
		}
	}

	// Initializes the monitor.
	//
	void init();

	// Debug helper.
	//
	COLD inline void isr_print_debug( trapframe* tf )
	{
		char disasm[ 128 ] = { '?', '?', 0 };
		uint8_t bytes[ xed::max_ins_len ] = { 0x00 };

		if ( !tf->guest_level ) {
			if ( size_t bytes_read = std::size( bytes ) - safe::copy( bytes, tf->rip, std::size( bytes ) ) ) {
				if ( auto ins = xed::decode64( &bytes[ 0 ], bytes_read ) )
					ins->to_string( disasm, std::size( disasm ) - 1, tf->rip );
				else
					disasm[ 0 ] = '*';
			}
		} else {
			if ( size_t bytes_read = std::size( bytes ) - tf->vmcs->read_guest( nullptr, bytes, tf->rip, std::size( bytes ), true ) ) {
				if ( auto ins = xed::decode64( &bytes[ 0 ], bytes_read ) )
					ins->to_string( disasm, std::size( disasm ) - 1, tf->rip );
				else
					disasm[ 0 ] = '*';
			} else if ( size_t bytes_read = std::size( bytes ) - tf->vmcs->read_guest( nullptr, bytes, tf->rip, std::size( bytes ) ) ) {
				disasm[ 0 ] = 'N';
				disasm[ 1 ] = 'X';
				disasm[ 2 ] = ' ';

				if ( auto ins = xed::decode64( &bytes[ 0 ], bytes_read ) )
					ins->to_string( disasm + 3, std::size( disasm ) - 4, tf->rip );
				else
					disasm[ 3 ] = '*';
			}
		}

		if constexpr ( !isr_print_context ) {
			xstd::log( "[CPU %llu] #%02x(%02x) @ [ %02x:%p %-28s ] | SP: %02x:%p | EFL: %08llx | CR8: %d | CR2: %llx\n",
						  ia32::read_pcid(),
						  ( uint32_t ) tf->type, ( uint32_t ) tf->error_code,
						  ( uint32_t ) tf->seg_cs.flags, tf->rip, disasm,
						  ( uint32_t ) tf->seg_ss.flags, tf->rsp, tf->rflags.flags,
						  ia32::read_cr8(), ia32::read_cr2() );
		} else {
			xstd::log( "[CPU %llu] #%02x(%02x) @ [ %02x:%p %-28s ] | SP: %02x:%p | EFL: %08llx | A=%p C=%p D=%p 8=%p 9=%p 10=%p 11=%p BP=%p | CR8: %d | CR2: %llx | CR3: [%llx %llx %llx]\n",
						  ia32::read_pcid(),
						  ( uint32_t ) tf->type, ( uint32_t ) tf->error_code,
						  ( uint32_t ) tf->seg_cs.flags, tf->rip, disasm,
						  ( uint32_t ) tf->seg_ss.flags, tf->rsp, tf->rflags.flags,
						  tf->rax, tf->rcx, tf->rdx, tf->r8, tf->r9, tf->r10, tf->r11, tf->rbp,
						  ia32::read_cr8(), ia32::read_cr2(),
						  ( tf->vmcs->mm.read_guest_cr3().flags << 1 ) >> 1,
						  ( tf->vmcs->mm.get_vmm_cr3().flags << 1 ) >> 1,
						  ( tf->vmcs->mm.get_vm_cr3().flags << 1 ) >> 1
			);
		}
	}

	// Exception handling model.
	//
	struct [[gnu::packed]] exception_details
	{
		interrupt_type type = interrupt_type::max;
		uint64_t       code = 0;
		any_ptr        fault_address = nullptr;

		auto tie() { return std::tie( type, code, fault_address ); }
	};
	struct eh_model
	{
		using argument_type = exception_details;

		vm_context* vmcs;
		FORCE_INLINE eh_model( vm_context* vmcs = get_vm() ) : vmcs( vmcs ) {}

		eh_model( eh_model&& ) noexcept = default;
		eh_model( const eh_model& ) = default;
		eh_model& operator=( eh_model&& ) noexcept = default;
		eh_model& operator=( const eh_model& ) = default;

		FORCE_INLINE uint64_t get() const { return vmcs->leh_ctx; }
		FORCE_INLINE uint64_t link( uint64_t value ) const { return std::exchange( vmcs->leh_ctx, value ); }
		FORCE_INLINE void unlink( uint64_t value ) const { vmcs->leh_ctx = value; }
	};
};