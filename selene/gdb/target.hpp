#pragma once
#include "target_desc.hpp"
#include <ntpp.hpp>
#include "../utility/thread.hpp"

// Implements the target controller.
//
namespace gdb
{
	// Wrapper around get/set context.
	//
	inline bool set_context( nt::ethread_t* thr, const nt::context& ctx )
	{
		return !( ( nt::status ) psp::set_context_thread_internal( thr, &ctx, nt::mode_t::kernel_mode, nt::mode_t::user_mode, nt::mode_t::kernel_mode ) ).is_error();
	}
	inline std::optional<nt::context> get_context( nt::ethread_t* thr, uint32_t context_flags )
	{
		std::optional<nt::context> result = {};
		auto& ctx = result.emplace();
		ctx.context_flags = context_flags;
		if ( ( ( nt::status ) psp::get_context_thread_internal( thr, &ctx, nt::mode_t::kernel_mode, nt::mode_t::user_mode, nt::mode_t::kernel_mode ) ).is_error() )
			result.reset();
		return result;
	}

	// Initializes hooks for the signal catching.
	//
	void init_signal();

	// Target state.
	//
	struct target_state
	{
		// EPROCESS associated.
		//
		ntpp::ref<nt::eprocess_t> process = {};

		// Currently selected thread.
		//
		ntpp::ref<nt::ethread_t> current_thread = {};

		// Whether or not the target is currently frozen.
		//
		bool frozen = false;

		// Constructed by a process reference.
		//
		target_state( ntpp::ref<nt::eprocess_t> process ) : process( std::move( process ) ) {}

		// Memory access.
		//
		inline size_t read_memory( uint64_t address, void* to, size_t length )
		{
			if ( ntpp::is_exiting( process ) )
				return 0;

			auto limit = um_va_end;
			if ( address > limit ) return 0;
			if ( ( address + length ) > limit )
				length = limit - address;

			ntpp::scope_process _g{ process };
			return ntpp::read_memory( ob::current_process(), to, ( void* ) address, length ).value_or( 0 );
		}
		inline size_t write_memory( uint64_t address, const void* from, size_t length )
		{
			if ( ntpp::is_exiting( process ) )
				return 0;

			auto limit = um_va_end;
			if ( address > limit ) return 0;
			if ( ( address + length ) > limit )
				length = limit - address;

			ntpp::scope_process _g{ process };
			return ntpp::write_memory( ob::current_process(), ( void* ) address, from, length ).value_or( 0 );
		}

		// Resumes or freezes the process.
		//
		bool resume()
		{
			if ( ntpp::is_exiting( process ) )
				return false;
			if ( !std::exchange( frozen, false ) )
				return false;
			return !nt::status( ps::resume_process( process.get() ) ).is_error();
			//return ( bool ) ( uint8_t ) ps::thaw_process( process.get(), 0ull );
		}
		bool interrupt()
		{
			if ( ntpp::is_exiting( process ) )
				return false;
			if ( std::exchange( frozen, true ) )
				return false;
			return !nt::status( ps::suspend_process( process.get() ) ).is_error();
			//return ( bool ) ( uint8_t ) ps::freeze_process( process.get(), 0ull );
		}

		// Kills the process.
		//
		void kill()
		{
			if ( ntpp::is_exiting( process ) )
				return;
			ntpp::terminate_process( process );
		}

		// Register read/write.
		//
		bool write_general_registers( nt::ethread_t* thr, const general_registers& regs )
		{
			nt::context ctx = {};
			ctx.context_flags = CONTEXT_CONTROL | CONTEXT_INTEGER | CONTEXT_SEGMENTS;
			convert_context<true>( &ctx, &regs );
			return set_context( thr, ctx );
		}
		std::optional<general_registers> read_general_registers( nt::ethread_t* thr )
		{
			auto ctx = get_context( thr, CONTEXT_CONTROL | CONTEXT_INTEGER | CONTEXT_SEGMENTS );
			if ( !ctx )
				return std::nullopt;
			general_registers out;
			convert_context<true>( &out, &*ctx );
			return out;
		}
		bool read_register( nt::ethread_t* thr, reg_num r, void* out )
		{
			auto ctx = get_context( thr, CONTEXT_FULL );
			if ( !ctx )
				return false;
			full_registers tctx;
			convert_context<false>( &tctx, &*ctx );

			auto [off, len] = reg_map[ size_t( r ) ];
			memcpy( out, xstd::ptr_at( &tctx, off ), len );
			return true;
		}
		bool write_register( nt::ethread_t* thr, reg_num r, const void* from, size_t length )
		{
			auto ctx = get_context( thr, CONTEXT_FULL );
			if ( !ctx )
				return false;
			full_registers tctx;
			convert_context<false>( &tctx, &*ctx );

			auto [off, len] = reg_map[ size_t( r ) ];
			memcpy( xstd::ptr_at( &tctx, off ), from, length );

			convert_context<false>( &*ctx, &tctx );
			return set_context( thr, *ctx );
		}

		// Single stepping.
		//
		bool step( nt::ethread_t* thr )
		{
			if ( ntpp::is_exiting( process ) )
				return false;
			if ( !frozen ) 
				return false;
			auto* thrc = thread::get_context( thr );
			thrc->gdb.is_single_stepping = true;
			return resume();
		}

		// Resume if frozen.
		//
		~target_state() 
		{
			resume();
		}
	};

	// Global breakpoint list, lock-free.
	//
	enum class breakpoint_type : uint64_t
	{
		execute = 0, // z1
		write =   1, // z2
		read =    2, // z3
		access =  3, // z4
	};
	enum class breakpoint_length : uint64_t
	{
		byte =     0,
		word =     1,
		qword =    2,
		dword =    3,
	};
	struct breakpoint_entry
	{
		uint64_t          address : 48 = 0;
		breakpoint_type   type    : 2 = {};
		breakpoint_length len     : 2 = {};
	};
	inline std::array<breakpoint_entry, 4> global_breakpoints = {};

	// Redirects a crashing signal.
	//
	bool redirect_signal( nt::exception_record_t* record, nt::exframe* xf, nt::trapframe* tf );
};