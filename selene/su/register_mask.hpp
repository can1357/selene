#pragma once
#include <xstd/intrinsics.hpp>
#include <xstd/type_helpers.hpp>

// Implements masked registers for convenience.
//
namespace su
{
	// Implementation detail, distinguishes ia32::<> types.
	//
	namespace impl
	{
		template<typename T>
		concept Ia32Register = requires( T && x ) { x.flags; };
	};

	// Mask applied to a register.
	//
	struct register_mask
	{
		uint64_t or_mask = 0;
		uint64_t nand_mask = 0;

		// Application using apply.
		//
		FORCE_INLINE constexpr uint64_t apply( uint64_t value ) const
		{
			return ( value & ~nand_mask ) | or_mask;
		}
		template<impl::Ia32Register R>
		FORCE_INLINE constexpr R apply( R value ) const
		{
			return R{ .flags = apply( value.flags ) };
		}

		// Decays to bool, false if no-op.
		//
		FORCE_INLINE constexpr explicit operator bool() const { return !or_mask && !nand_mask; }
	};
};