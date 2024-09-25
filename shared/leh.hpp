#pragma once
#include <ia32.hpp>
#include <ia32/memory.hpp>
#include <xstd/random.hpp>
#include <xstd/result.hpp>

// Implements a linear exception handling using linked lists in arbitrary cannonical storage.
//
namespace leh
{
	// Declare the pointer encoding.
	//
	inline constexpr size_t   pointer_rotn =          13;
	inline constexpr uint64_t pointer_hi_key =        0xE4;  // 7 bits for always-on LA57 support.
	inline constexpr size_t   block_alignment =       8;
	FORCE_INLINE constexpr any_ptr encode_ptr( any_ptr ptr )
	{
		uint64_t result = rotl( ptr.address, 8 );

		if constexpr ( is_kernel_mode() )
			return result ^ ( xstd::fill_bits( 7, 1 ) ^ pointer_hi_key );
		else
			return result ^ pointer_hi_key;
	}
	FORCE_INLINE constexpr any_ptr decode_ptr( any_ptr ptr )
	{
		if ( ( ptr & xstd::fill_bits( 8 ) ) != ( pointer_hi_key | is_kernel_mode() ) )
			return nullptr;

		if constexpr ( is_kernel_mode() )
			ptr.address ^= xstd::fill_bits( 7, 1 ) ^ pointer_hi_key;
		else
			ptr.address ^= pointer_hi_key;
		return rotr( ptr.address, 8 );
	}

	// Declare the exception model concept making sure it is exporting the storage intrinsics.
	//
	template<typename T>
	concept ExceptionModel = requires ( T& mut, const T& immut ) 
	{
		// Must have get/set/exchange primitives to store the blocks.
		( uint64_t ) immut.get();
		mut.unlink( std::declval<uint64_t>() );
		( uint64_t ) mut.link( std::declval<uint64_t>() );
		
		// Must have a default constructible argument type.
		std::declval<typename T::argument_type>();
		xstd::DefaultConstructible<typename T::argument_type>;
	};

	// Declare the status type.
	//
	template<ExceptionModel Model>
	struct [[gnu::packed]] status
	{
		using argument_type = typename Model::argument_type;

		// Status traits.
		//
		struct status_traits
		{
			static constexpr uint32_t success_value = 0;
			static constexpr uint32_t failure_value = 0xFFFFFFFF;
			static constexpr bool is_success( const status& s ) { return s.code == success_value; }
		};

		// The error code and it's arguments.
		//
		uint32_t code = 0;
		argument_type arguments = {};

		// Default copy/move.
		//
		constexpr status( status&& ) noexcept = default;
		constexpr status( const status& ) = default;
		constexpr status& operator=( status&& ) noexcept = default;
		constexpr status& operator=( const status& ) = default;

		// Construction from value:
		//
		template<typename T>
		constexpr status( uint32_t code, T&& arguments ) : code( code ), arguments( std::forward<T>( arguments ) ) {}
		constexpr status( uint32_t code = status_traits::failure_value ) : code( code ) {}

		// Comparison against code for the status traits.
		//
		constexpr bool operator==( uint32_t other ) const noexcept { return code == other; }

		// String conversion.
		//
		std::string to_string() const noexcept { return xstd::fmt::str( "Error %08x %s"_es, code, arguments ); }

		// Decay to bool.
		//
		explicit constexpr operator bool() const noexcept { return status_traits::is_success( *this ); }
	};
	template<typename Model, typename T = std::monostate>
	using result = xstd::basic_result<T, status<Model>>;

	// Declare the control block.
	//
	template<ExceptionModel Model>
	struct exception_block
	{
		// Previous exception block or arbitrary store value.
		//
		uint64_t previous = 0;

		// Pointer to the landingpad label, and the expected stack pointer.
		//
		any_ptr landingpad_ip = nullptr;
		any_ptr landingpad_sp = nullptr;

		// Reference to the local exception state.
		//
		status<Model>& state;

		// Constructed by a reference to the state.
		//
		exception_block( status<Model>& state_ref ) : state( state_ref ) {}

		// No move/copy.
		//
		exception_block( exception_block&& ) = delete;
		exception_block( const exception_block& ) = delete;
	};

	// Helper to get current block, exposed for the exception handler itself.
	//
	template<ExceptionModel Model>
	FORCE_INLINE inline static exception_block<Model>* current( const Model& mdl )
	{
		return decode_ptr( mdl.get() );
	}
	template<ExceptionModel Model>
	FORCE_INLINE inline static exception_block<Model>* pop( const Model& mdl, uint64_t sp )
	{
		exception_block<Model>* block = decode_ptr( mdl.get() );
		if ( !block ) return nullptr;
		if ( block->landingpad_sp != sp )
			return nullptr;
		mdl.unlink( block->previous );
		return block;
	}
	template<ExceptionModel Model> requires xstd::DefaultConstructible<Model>
	FORCE_INLINE inline static exception_block<Model>* current()
	{
		return current<Model>( Model{} );
	}
	template<ExceptionModel Model> requires xstd::DefaultConstructible<Model>
	FORCE_INLINE inline static exception_block<Model>* pop( uint64_t sp )
	{
		return pop<Model>( Model{}, sp );
	}
	
	// Try implementation.
	//
	template<ExceptionModel Model, typename F, typename... Tx> requires xstd::InvocableWith<F, Tx...>
	FLATTEN FORCE_INLINE inline static auto wrap( Model mdl, F&& fn, Tx&&... args )
	{
		using R = decltype( fn( std::forward<Tx>( args )... ) );
		using Tr = xstd::basic_result<std::conditional_t<xstd::Void<R>, std::monostate, R>, leh::status<Model>>;

		// Declare a result and exception block.
		//
		Tr result = {};
		exception_block<Model> block{ result.status };
		block.previous = mdl.link( encode_ptr( &block ) );
		
		// Save the expected stack pointer and the landing pad, mark with goto to hint the 
		// compiler that we may jump, and to allow the inliner pass to work.
		// -- Note: We cannot  just take the address of the label and pass it in the constructor
		//          since LLVM Inliner Pass explicitly checks for block-address reference outside 
		//          of callbr and fast fails; instead a real asm volatile goto label needs to 
		//          reference it.
		//
		uint64_t landingpad_ip;
		asm volatile goto( "lea %l2(%%rip), %1; mov %%rsp, %0;" : "=m" ( block.landingpad_sp ), "=r" ( landingpad_ip ) ::: __landingpad ); // Basic block #1
		block.landingpad_ip = landingpad_ip;

		if constexpr ( xstd::Void<R> )
		{
			// Invoke the function and emit another hint.
			//
			fn( std::forward<Tx>( args )... );
			asm volatile goto( "" :::: __landingpad ); // Basic block #2
			
			// Emplace the result.
			//
			result.emplace( std::monostate{} );
		}
		else
		{
			// Invoke the function and emit another hint.
			//
			auto&& rval = fn( std::forward<Tx>( args )... );
			asm volatile goto( "" :::: __landingpad ); // Basic block #3
			
			// Emplace the result.
			//
			result.emplace( std::forward<decltype( rval )>( rval ) );
		}

	__landingpad:
		if constexpr( is_debug_build() )
			asm volatile( "nop" ::: "memory" );
		else
			asm volatile( "" ::: "memory" );
		mdl.unlink( xstd::make_volatile( block.previous ) );
		return result;
	}
	template<ExceptionModel Model, typename F, typename... Tx> requires ( xstd::DefaultConstructible<Model> && xstd::InvocableWith<F, Tx...> )
	FLATTEN FORCE_INLINE inline static auto wrap( F&& fn, Tx&&... args )
	{
		return wrap<Model, F, Tx...>( Model{}, std::forward<F>( fn ), std::forward<Tx>( args )... );
	}
};