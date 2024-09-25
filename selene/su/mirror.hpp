#pragma once
#include <xstd/spinlock.hpp>
#include <map>
#include <vector>
#include <mutex>
#include <nt/image.hpp>
#include "../utility/memory.hpp"
#include "../utility/page_manager.hpp"

namespace su
{
	// Mirrored PTE descriptor.
	//
	struct pte_details_t
	{
		uint64_t _padb        : PT_ENTRY_64_IGNORED_2_BIT;
		uint64_t trapped      : 1;
		uint64_t was_w        : 1;
		uint64_t was_xd       : 1;
		uint64_t shadowed     : 1;
		uint64_t reserved     : 2;
		uint64_t pfn_borrowed : 1;
		uint64_t _pade        : 64 - PT_ENTRY_64_PROTECTION_KEY_BIT;
	};
	static_assert( sizeof( pte_details_t ) == sizeof( ia32::pt_entry_64 ) );
	inline pte_details_t* pte_details( ia32::pt_entry_64* pt ) { return ( pte_details_t* ) pt; }
	inline const pte_details_t* pte_details( const ia32::pt_entry_64* pt ) { return ( const pte_details_t* ) pt; }

	// Mirrored address space.
	// - Mirrored ranges are non-executable in VM memory.
	// - Trapped ranges are non-executable in host memory.
	//
	struct mirror_space
	{
		mutable xstd::shared_xspinlock<DISPATCH_LEVEL> lock = {};

		// The shadowed PXE we're maintaining.
		//
		mem::phys_ptr<pm::px::entry_type> pxe = {};
		size_t pxi = std::string::npos;
		inline mem::phys_ptr<pm::px::entry_type> get_pxe( size_t pxi ) {
			if ( this->pxi == pxi )
				return pxe;
			return nullptr;
		}
		
		// List of ranges we're trapping.
		//
		std::map<uint64_t, size_t> trapped_ranges = {};

		// Returns whether or not the image/pointer given is shadowed, meaning it is in a PXE that we are managing.
		// - Atomic operation, no lock acquired needed.
		//
		inline bool is_shadowed( any_ptr ptr )
		{
			return pxi == mem::px_index( ptr );
		}

		// Lock free and faster implementation of is_trapped, only returns a boolean.
		//
		bool is_trapped_fast( any_ptr pointer ) const;

		// Mapping, updating, and unmapping of memory ranges.
		// - Must be non-paged memory that is in a shadowed PDPT.
		//
		bool map( any_ptr pointer, size_t length, bool trapped );
		bool update( any_ptr pointer, size_t length );
		bool unmap( any_ptr pointer, size_t length );

		// Changes the shadowing of a PDPT.
		//
		void set_shadowed( size_t pxi, bool empty );
	};

	// Shared, mirroring address space used for all kernel-mode drivers.
	//
	inline mirror_space kernel_mirror = {};
};