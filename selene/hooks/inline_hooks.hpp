#pragma once
#include <xstd/intrinsics.hpp>
#include <xstd/type_helpers.hpp>
#include <atomic>
#include <memory>

namespace hook
{
	// Configuration of the hook.
	//
	struct config
	{
		// Determines the type of gadget we'll be using to subvert the control flow.
		//
		enum gadget_type_id : uint8_t
		{
			gadget_any,       // Wildcard implying opportunistically chosen setting, rest are in order of preference.
			call_short,       // CALL rel32
			jmp_short,        // JMP rel32
			jmp_long,         // JMP [rip]; &abs64
		} gadget_type = gadget_any;

		// Determines the type of positioning we'll be using for the gadget.
		//
		enum pos_type_id : uint8_t
		{
			pos_any,          // Wildcard implying opportunistically chosen setting, rest are in order of preference.
			mid_hook,         // Automatically computed mid-hook past first 5 bytes within the prologue.
			exact,            // Exact position.
		} pos_type = pos_any;

		// If set will assume invalid stack pointer and non-standard calling convention 
		// during the selection of wildcarded configuration.
		//
		bool strict = false;

		// If set will precede any previous hook.
		//
		bool priority = false;
	};

	// Record of the hook.
	//
	struct record
	{
		// Relevant patch entry and the configuration of the original hook.
		// - Do not use the patch entry to unhook as it may be shared.
		//
		const void* source = nullptr;
		const void* destination = nullptr;

		// Redirection stub containing code for the [src->[x]->dst]
		//
		uint8_t redirect_stub[ 0x200 + 64 ];
		uint8_t* redirect_begin = nullptr;
		const void** redirect_addr = nullptr;

		// Continuation stub containing code for the call to original [dst->[x]->src].
		//
		uint8_t continue_stub[ 256 ];
		uint8_t* continue_it = nullptr;

		// Actual pointer we use to call into the original function, this is not directly
		// referencing continue stub so that other hooks can chain onto it if they're hooking
		// the same function instead of hooking multiple times or sharing functions.
		//
		const void* continue_pos = nullptr;

		// Allocates continuation code bytes.
		//
		uint8_t* alloc_continue( size_t length )
		{
			if ( !continue_it )
				continue_it = std::begin( continue_stub );
			auto it = continue_it;
			if ( it + length > std::end( continue_stub ) )
				return nullptr;
			continue_it += length;
			memset( it, 0, length );
			return it;
		}

		// Calls into the original routine.
		//
		template<typename P>
		FORCE_INLINE P next() const { return P( continue_pos ); }
		template<typename... Tx> FORCE_INLINE uint64_t operator()( Tx... args ) const { return next<uint64_t( __cdecl* )( Tx... )>()( args... ); }
	};

	// Adds an inline hook to the function specified [src] redirecting it to [dst].
	//
	void add_br( record* rec, const void* src, const void* dst, config cfg = {} );

	// Wrappers for the real function above making sure dest is stdcall and lambda types work fine.
	//
	namespace impl
	{
		template<typename T>
		concept ConstLambda = requires { &T::operator(); xstd::DefaultConstructible<T>; };
	};
	template<typename T, typename... Tx>
	static decltype(auto) add( record* rec, const void* src, T( __cdecl* dst )( Tx... ), config cfg = {} )
	{ 
		return add_br( rec, src, dst, std::move( cfg ) );
	}
	template<typename T> requires impl::ConstLambda<T>
	static decltype(auto) add( record* rec, const void* src, T&& lambda, config cfg = {} )
	{
		return add_br( rec, src, +lambda, std::move( cfg ) );
	}
};