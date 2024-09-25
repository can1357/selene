#pragma once
#include <xstd/intrinsics.hpp>
#include <xstd/type_helpers.hpp>
#include <xstd/robin_hood.hpp>
#include <xstd/spinlock.hpp>
#include <span>
#include <initializer_list>
#include <ia32.hpp>

namespace hook
{
	// Patched PFN -> Original PFN.
	// - Used without any locks during init, afterwards using g_shadow_lock;
	//
	//inline xstd::shared_xspinlock<HIGH_LEVEL> g_shadow_lock;
	static constexpr uint64_t rshadow_flag = ( 1ull << 63 );
	inline robin_hood::unordered_flat_map<uint64_t, uint64_t> g_shadow_pfn_db;

	// Simple lookup.
	//
	inline std::optional<std::pair<uint64_t, bool>> lookup_pair_pfn( uint64_t pfn ) {
		//std::shared_lock _g{ g_shadow_lock };
		auto it = g_shadow_pfn_db.find( pfn );
		if ( it != g_shadow_pfn_db.end() ) {
			uint64_t pfn = it->second;
			bool     is_shadow = !( pfn & rshadow_flag );
			pfn &= ~rshadow_flag;
			return std::pair{ pfn,is_shadow };
		}
		return std::nullopt;
	}
	inline std::optional<uint64_t> lookup_shadow_pfn( uint64_t pfn ) {
		if ( auto p = lookup_pair_pfn( pfn ); p && p->second ) {
			return p->first;
		}
		return std::nullopt;
	}
	inline std::optional<uint64_t> lookup_rshadow_pfn( uint64_t pfn ) {
		if ( auto p = lookup_pair_pfn( pfn ); p && !p->second ) {
			return p->first;
		}
		return std::nullopt;
	}

	// Patches the kernel with the given bytes, input must be smaller than a page.
	//
	void patch( const void* ptr, std::span<const uint8_t> new_bytes );
	inline void patch( const void* ptr, std::initializer_list<uint8_t> new_bytes ) 
	{
		return patch( ptr, std::span{ new_bytes } );
	}
};