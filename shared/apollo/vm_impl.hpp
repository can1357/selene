#pragma once
#include <xstd/intrinsics.hpp>
#include <xstd/random.hpp>

// VM details.
//
namespace apollo::vm
{
	// Auxililary argument to call for relying dispatcher type.
	//
	struct call_aux
	{
		union
		{
			uint64_t raw;
			struct
			{
				// Number of arguments.
				//
				uint32_t num_args;

				// Whether or not the function returns any value.
				//
				uint8_t  has_retval;
			};
		};
	};
	static_assert( sizeof( call_aux ) == sizeof( uint64_t ) );

	// Maximum entries in the stack.
	//
	static constexpr uint32_t stack_limit = 0x1000;

	// Custom opcodes derived from get/set globaql.
	//
	static constexpr uint16_t op_get_sp =      0x01FF;
	static constexpr uint16_t op_set_sp =      0x02FF;

	// Aux2 flags.
	//
	static constexpr uint64_t aux2_rmw_relax = 0xe2d0fb9a3ec16445;

	// Rolling key seeds.
	//
#ifdef VM_DEBUG
	static constexpr uint64_t stream_key =    0;
	static constexpr auto stream_keys =       xstd::make_constant_series<8>( [ ] ( auto v ) { return 0ull; } );
#else
	static constexpr uint64_t stream_key =    0x5d36d683f831817f;
	static constexpr auto stream_keys =       xstd::make_constant_series<8>( [ ] ( auto v ) { return xstd::lce_64_n( stream_key, v.value ); } );
#endif
};