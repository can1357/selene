#include "vdbg.hpp"
#include <xstd/xvector.hpp>
#include <ntpp.hpp>
#include "../utility/thread.hpp"
#include "su0.hpp"

namespace su::vdbg {
	alignas( 0x20 ) static constexpr auto permutation_masks = [ ]()
	{
		std::array<std::array<uint32_t, 8>, 16> table = {};

		for ( size_t mask = 0; mask != 16; mask++ )
		{
			auto& perm = table[ mask ];

			uint32_t slot = 0;
			for ( size_t i = 0; i != 4; i++ )
			{
				// If slot is free:
				if ( !( mask & ( 1 << i ) ) )
				{
					perm[ i * 2 + 0 ] = slot++;
					perm[ i * 2 + 1 ] = slot++;
				}
				// If slot is taken:
				else
				{
					perm[ i * 2 + 0 ] = -1;
					perm[ i * 2 + 1 ] = -1;
				}
			}
		}
		return table;
	}( );

	using v4i64 = xstd::xvec<int64_t, 4>;
	using v8i32 = xstd::xvec<int32_t, 8>;
	using v4u64 = xstd::xvec<uint64_t, 4>;

	FORCE_INLINE static v4u64 pack_drs( const uint64_t* drs, ia32::dr7 dr7 )
	{
		v4u64 addresses = v4u64::load( drs );
		v4u64 flags = v4u64::broadcast( ( uint32_t ) dr7.flags );
		v4u64 cc = flags >> v4u64{ DR7_READ_WRITE_0_BIT,       DR7_READ_WRITE_1_BIT,       DR7_READ_WRITE_2_BIT,       DR7_READ_WRITE_3_BIT };
		v4u64 en = flags >> v4u64{ DR7_LOCAL_BREAKPOINT_0_BIT, DR7_LOCAL_BREAKPOINT_1_BIT, DR7_LOCAL_BREAKPOINT_2_BIT, DR7_LOCAL_BREAKPOINT_3_BIT };
		return ( addresses | ( ( cc & 0b1111 ) << 59 ) | ( ( en & 1 ) << 63 ) );
	}
	FORCE_INLINE static v4u64 pack_drs( const cfw::breakpoint_list& list )
	{
		return v4u64::load( &list.raw_array );
	}
	FORCE_INLINE static v4u64 subtract_drs( v4u64 s1, v4u64 s2 )
	{
		auto cc =
			( s1 == s2.shuffle<0, 1, 2, 3>( s2 ) ) |
			( s1 == s2.shuffle<1, 2, 3, 0>( s2 ) ) |
			( s1 == s2.shuffle<2, 3, 0, 1>( s2 ) ) |
			( s1 == s2.shuffle<3, 0, 1, 2>( s2 ) );
		return s1 & ~cc;
	}
	FORCE_INLINE static uint8_t get_mask_drs( v4u64 s1 )
	{
		constexpr uint32_t mask =
			( 1ull << ( 8 * 4 - 1 ) ) | ( 1ull << ( 8 * 3 - 1 ) ) |
			( 1ull << ( 8 * 2 - 1 ) ) | ( 1ull << ( 8 * 1 - 1 ) );
		return xstd::bit_pext<uint32_t>( s1.bmask(), mask );
	}
	FORCE_INLINE static v4u64 append_drs( v4u64 src, v4u64 with, uint8_t* original_mask )
	{
		uint8_t mask = get_mask_drs( src );
		*original_mask = mask;

		v8i32 perm = v8i32::load( &permutation_masks[ mask ] );
		v4u64 mask_prsv = ( perm < 0 ).reinterpret<uint64_t>();
		v4u64 mask_free = ~mask_prsv;

		v4u64 placements = xstd::vec::perm8x32( with.reinterpret<int32_t>(), perm ).reinterpret<uint64_t>();
		return ( src & mask_prsv ) | ( placements & mask_free );
	}

	FORCE_INLINE static bool cpu_tracing_supported()
	{
		return ke::get_kprcb()->feature_bits & KF_DTS;
	}
	FORCE_INLINE static bool cpu_tracing_in_use()
	{
		uint32_t etw_flags = *( const uint32_t* ) &ki::cpu_tracing_flags;
		return ( etw_flags & 2 ) != 0;
	}

	template<bool Dynamic>
	static void exit_callback( su::vm_context* vmcs ) {
		if ( auto* saved = vmcs->active_dbg_save_area ) {
			if ( !Dynamic || ( saved->dr7.flags & 0xFFFF ) ) {
				ia32::write_dr0( saved->dr0 );
				ia32::write_dr1( saved->dr1 );
				ia32::write_dr2( saved->dr2 );
				ia32::write_dr3( saved->dr3 );
				ia32::write_dr7( saved->dr7 );
				return;
			}
		}
		ia32::write_dr7( { .flags = 0 } );
	}

	// Starts virtual debug state.
	//
	FORCE_INLINE void enter( vm_context* vmcs, const breakpoint_list& bp_set, const breakpoint_list& bp_ignore, bool km )
	{
		auto* saved = vmcs->active_dbg_save_area;

		// Save the debug registers on the trapframe.
		//
		uint64_t* __restrict dr_array = &saved->dr0;
		ia32::dr7& __restrict dr7 = saved->dr7;

		// If trapframe has debug registers enabled:
		//
		v4u64 drs = pack_drs( bp_set );
		saved->mask = 0;
		if ( dr7.flags & 0xFFFF )
		{
			// Handle IA32_DEBUGCTL.
			//
			if ( !km ) {
				uint32_t tracing_flags = dr7.flags & 0x300;
				if ( tracing_flags && cpu_tracing_supported() && !cpu_tracing_in_use() )
					ia32::write_msr( IA32_DEBUGCTL, tracing_flags >> 8 );
			}

			// Read original debug registers.
			//
			v4u64 original_drs = pack_drs( dr_array, dr7 );

			// Subtract the ignored list.
			//
			original_drs = subtract_drs( original_drs, pack_drs( bp_ignore ) );

			// Append the requested list.
			//
			drs = append_drs( original_drs, drs, &saved->mask );
		}

		// Set the exit callback.
		//
		if ( km ) {
			vmcs->exit_callback = &exit_callback<false>;
		} else {
			vmcs->exit_callback = &exit_callback<true>;
		}

		// Apply the final debug registers.
		//
		v4u64 addresses = ( v4u64 ) ( ( ( v4i64 ) ( drs << 5 ) ) >> 5 );
		ia32::write_dr0( ( uint64_t ) addresses[ 0 ] );
		ia32::write_dr1( ( uint64_t ) addresses[ 1 ] );
		ia32::write_dr2( ( uint64_t ) addresses[ 2 ] );
		ia32::write_dr3( ( uint64_t ) addresses[ 3 ] );
		if ( !km ) ia32::write_dr6( { .flags = 0 } );

		v4u64 cc = ( drs >> 59 ) & 0b1111;
		v4u64 en = ( ( v4i64 ) drs ) < 0;
		cc <<= v4u64{ DR7_READ_WRITE_0_BIT,        DR7_READ_WRITE_1_BIT,        DR7_READ_WRITE_2_BIT,        DR7_READ_WRITE_3_BIT };
		en &=  v4u64{ DR7_LOCAL_BREAKPOINT_0_FLAG, DR7_LOCAL_BREAKPOINT_1_FLAG, DR7_LOCAL_BREAKPOINT_2_FLAG, DR7_LOCAL_BREAKPOINT_3_FLAG };
		ia32::write_dr7( { .flags = xstd::vec::reduce_or( cc | en ) } );
	}

	// User and kernel wrappers.
	//
	FORCE_INLINE void uupdate( vm_context* vmcs ) {
		auto* thr = ( thread::context* ) vmcs->vmm_ud;
		auto* ix = thr->fw->get_instrument();
		enter( vmcs, ix->bp_set, ix->bp_ignore, false );
	}
	FORCE_INLINE bool uenter( vm_context* vmcs, nt::trapframe* __restrict tf ) {
		auto* thr = ( thread::context* ) vmcs->vmm_ud;
		auto* ix = thr->fw->get_instrument();
		if ( !( ix->bp_set.num_elements + ix->bp_ignore.num_elements ) ) [[likely]] {
			vmcs->active_dbg_save_area = nullptr;
			return false;
		}
		auto* saved = vmcs->active_dbg_save_area = &thr->original_dbg;
		uint64_t* __restrict dr_array = &saved->dr0;
		ia32::dr7& __restrict dr7 = saved->dr7;
		if ( tf ) {
			xstd::trivial_copy_n<4 * 8>( dr_array, &tf->dr0 );
			dr7 = tf->dr7;
		}
		enter( vmcs, ix->bp_set, ix->bp_ignore, false );
		return true;
	}
	FORCE_INLINE void kupdate( vm_context* vmcs ) {
		auto* mgx = ( su::r0::mgx_info* ) vmcs->vmm_ud;
		enter( vmcs, mgx->bp_list, mgx->bp_skip, true );
	}
	FORCE_INLINE bool kenter( vm_context* vmcs ) {
		auto* mgx = ( su::r0::mgx_info* ) vmcs->vmm_ud;
		if ( !mgx || !( mgx->bp_list.num_elements + mgx->bp_skip.num_elements ) ) [[likely]] {
			vmcs->active_dbg_save_area = nullptr;
			return false;
		}

		auto* saved = vmcs->active_dbg_save_area = &vmcs->local_dbg_save_area;
		saved->dr0 = ia32::read_dr0();
		saved->dr1 = ia32::read_dr1();
		saved->dr2 = ia32::read_dr2();
		saved->dr3 = ia32::read_dr3();
		saved->dr7 = ia32::read_dr7();
		enter( vmcs, mgx->bp_list, mgx->bp_skip, true );
		return true;
	}
};