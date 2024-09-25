#pragma once
#include <memory>
#include <array>
#include <ntpp.hpp>
#include <cfw/tls.hpp>
#include "memory.hpp"
#include "memory_isolation.hpp"

#define UM_JUMP_RBP_KEY 0x58cd5d0f
#define UM_JUMP_REG_KEY 0xa127c83ec46e215d

namespace thread
{
	// User-mode jump frame.
	//
	struct um_jump_frame
	{
		um_jump_frame* prev = nullptr;       // +0x00
		any_ptr        prev_um_stack_frame;  // +0x08
		any_ptr        prev_km_stack_frame;  // +0x10
		
		// <Internal Save Area>
		//
		uint64_t       ymm_save[ 10 * 2 ];   // +0x18
		uint64_t       __pad;                // +0xB8
		uint64_t       rbp_save;             // +0xC0
		// <Return Address and Original Stack>
	};
	static_assert( sizeof( um_jump_frame ) == 0xC8, "Invalid frame length." );

	// Temporary debug-register save area.
	//
	struct dbg_save_area
	{
		uint64_t  dr0 = 0;
		uint64_t  dr1 = 0;
		uint64_t  dr2 = 0;
		uint64_t  dr3 = 0;
		ia32::dr7 dr7 = { .flags = 0 };
		uint8_t   mask = 0;
	};

	// GDB state.
	// + Debug regs are in .original_dbg.
	//
	struct gdb_state
	{
		bool is_single_stepping = false;
		uint8_t sdebug_mask =     0;
	};

	// Thread local context.
	//
	struct context
	{
		// Backlink to the other.
		//
		nt::ethread_t* owner = nullptr;
		
		// Shadow stack.
		//
		uint8_t* shadow_stack = nullptr;
		any_ptr shadow_stack_base = nullptr;
		nt::kstack_control_t* shadow_stack_initial = nullptr;
		size_t stack_size = 0;

		// Entry depth.
		//
		volatile int32_t entry_depth = 0;

		// Exception handler state.
		//
		volatile uint64_t eh_context = 0;

		// Component framework data.
		//
		std::unique_ptr<cfw::thread_context> fw = {};
		std::array<int, 2> pool_slots = { 0, 0 };

		// Supervisor state (su3).
		//
		cfw::trapframe* trapframe = nullptr;
		any_ptr last_um_stack_frame = nullptr;
		um_jump_frame* prev_um_frame = nullptr;
		std::optional<su::mframe_t> interrupted_mframe = {};
		dbg_save_area original_dbg = {};
		uint16_t mode_switch_offset = 0;

		// Supervisor state (xt).
		//
		bool xt_skip_enter = false;
		bool xt_pending_available = false;
		uint32_t xt_skip_pcid = 0;
		uint32_t xt_skip_sp = 0;
		xstd::small_vector<uint8_t, 256> xt_pending_chk;

		// State hints for trapframe confusion.
		//
		any_ptr top_level_caller_frame = nullptr;
		std::array<any_ptr, 2> fake_um_frame = { nullptr };

		// GDB state.
		//
		gdb_state gdb = {};

		// Watchdog timer.
		//
		uint64_t watchdog_timer = 0;

		// Helpers to check thread state.
		//
		bool active() const { return top_level_caller_frame || entry_depth > 0; }

		// Allocates/Frees the thread stack.
		//
		void prepare_stack( size_t size )
		{
			ia32::scope_irql<DISPATCH_LEVEL> _g{};

			// If there is already a stack allocated, skip if length is different, else return.
			//
			if ( shadow_stack )
			{
				if ( stack_size >= size )
					free_stack();
				else
					return;
			}

			// Allocate the new stack.
			//
			stack_size = size;
			shadow_stack = mem::allocate_independent( size );
			if ( !shadow_stack ) xstd::error( "Memory allocation for stack failed."_es );
			mem::iso::claim_va( shadow_stack, size, mem::iso::pfn_type::indep_pool );
			shadow_stack_base = xstd::align_down<any_ptr>( shadow_stack + size - 1 - 0x30, 0x10 );
			shadow_stack_initial = shadow_stack_base;

			// Make the bottom page no write to catch overflows.
			//
			auto [pte, lev] = mem::lookup_pte( shadow_stack );
			fassert( lev == mem::pte_level );
			pte->write = false;
			mem::ipi_flush_tlb( shadow_stack );
		}
		void free_stack()
		{
			ia32::scope_irql<DISPATCH_LEVEL> _g{};
			if ( auto ssp = std::exchange( shadow_stack, nullptr ) )
			{
				mem::iso::return_va( ssp, stack_size );
				mem::free_independent( ssp, stack_size );
			}
		}

		~context() { free_stack(); }
	};

	// Trapframe obfuscation.
	// - Only relevant if tf->type == nt::trapframe_type::external.
	//
	inline volatile bool tf_confusion_enabled = true;
	void confuse_trapframe( nt::ethread_t* thr, context* ctx, nt::trapframe* tf );
	void mark_trapframe_not_confused( nt::trapframe* tf );
	bool enlighten_trapframe( nt::trapframe* tf );

	// Getter/setter for the thread context pointer.
	//
	FORCE_INLINE inline context* encdec_context( any_ptr x ) { return ( context* ) ( uint64_t ) -int64_t( x ); }
	FORCE_INLINE inline context* get_context( nt::ethread_t* thr = ke::get_ethread() ) { return encdec_context( thr->verifier_context ); }
	FORCE_INLINE inline void set_context( nt::ethread_t* thr, std::unique_ptr<context> ctx )
	{
		if ( thr->verifier_context )
		{
			if ( !ctx )
			{
				context* value = encdec_context( xstd::make_atomic( thr->verifier_context ).exchange( nullptr ) );
				if ( !value ) return;
				delete value;
			}
		}
		else if ( ctx )
		{
			thr->verifier_context = encdec_context( ctx.release() );
		}
	}

	// Shadow guard for stack spoofing on interrupt.
	//
	struct shadow_guard
	{
		any_ptr* _null = nullptr;
		FORCE_INLINE shadow_guard( context* _ctx = get_context() )
		{
			if ( !_ctx ) [[unlikely]]
				return;

			if ( auto& p = _ctx->top_level_caller_frame; !p )
			{
				_null = &p;
				p = _AddressOfReturnAddress();
			}
		}
		FORCE_INLINE explicit operator bool() const { return _null != nullptr; }
		FORCE_INLINE auto* release() { return std::exchange( _null, nullptr ); }
		FORCE_INLINE void reset()
		{
			if ( auto p = release() )
				*p = nullptr;
		}
		FORCE_INLINE ~shadow_guard() { reset(); }

		shadow_guard( const shadow_guard& ) = delete;
	};

	// Initializes thread local contexes and stack hiding.
	//
	void init();
};