#pragma once
#include <xstd/intrinsics.hpp>
#include <xstd/type_helpers.hpp>
#include <xstd/assert.hpp>
#include <ia32.hpp>
#include <tuple>
#include "memory.hpp"
#include "memory_isolation.hpp"

#pragma clang attribute push (__no_instrument, apply_to = function)

namespace pm
{
	typedef long long __m256i __attribute__((__vector_size__(32), __aligned__(32)));
	namespace impl
	{
		FORCE_INLINE static __m256i broadcast( uint64_t v ) { return __m256i{ int64_t( v ), int64_t( v ), int64_t( v ), int64_t( v ) }; }
	};

	// Allocates a properly aligned page, returns the physical address.
	//
	FORCE_INLINE static uint64_t alloc_page( mem::iso::pfn_type type, size_t count = 1 )
	{
		uint64_t pfn = mem::allocate_physical( count );
		if ( !pfn ) [[unlikely]]
			xstd::error( "Failed allocating 0x%llx pages for page manager."_es, count );
		mem::iso::claim_pfns( pfn, count, type );
		return pfn << 12;
	}

	// Takes a physical address and the number of pages, frees the whole range.
	//
	FORCE_INLINE static void free_page( uint64_t pa, size_t count = 1 )
	{
		mem::iso::return_pfns( pa >> 12, count );
		mem::free_physical( pa >> 12, count );
	}

	// Copies from one page aligned pointer to another a number of pages.
	//
	inline void copy_page( void* dst, const void* src, size_t count = 1 )
	{
		auto* pdst = xstd::assume_aligned<0x1000>( ( __m256i* ) dst );
		auto* psrc = xstd::assume_aligned<0x1000>( ( const __m256i* ) src );
		__hint_unroll_n( 4 )
		for ( size_t n = 0; n != ( count * 128 / 4 ); n++ )
		{
			std::array<__m256i, 4> tmp;
			__hint_unroll()
			for( __m256i& v : tmp )
				v = ia32::load_non_temporal( psrc++ );
			__hint_unroll()
			for( __m256i& v : tmp )
				ia32::store_non_temporal( pdst++, v );
		}
		ia32::sfence();
	}
	
	// Fills the entire page(s) with the given value.
	//
	inline void fill_page( void* dst, uint64_t value, size_t count = 1 )
	{
		auto vec = impl::broadcast( value );
		auto* pdst = xstd::assume_aligned<0x1000>( ( __m256i* ) dst );
		__hint_unroll_n( 16 )
		for ( size_t n = 0; n != ( count * 128 ); n++ )
			ia32::store_non_temporal( pdst++, vec );
		ia32::sfence();
	}

	// Custom page flags stored in the PTE.
	//
	// - [Bit 58] Is used to be the "borrow" flag, indicating that the PFN associated 
	//   with the entry is borrowed from the system.
	//
	// - [Bit 57:52] Is always cleared to be a user-defined space.
	//
	#define PM_PTE_BORROWED_FLAG (1ull<<58)

	template<size_t N>
	FORCE_INLINE static void masked_copy_ptes( ia32::pt_entry_64* dst, const ia32::pt_entry_64* src, uint64_t clear_src, uint64_t keep_dst, uint64_t set_mask )
	{
		if constexpr ( N >= 16 )
		{
			auto vset = impl::broadcast( set_mask );
			auto vnclr = impl::broadcast( ~clear_src );
			auto* pdst = xstd::assume_aligned<0x1000>( ( __m256i* ) dst );
			auto* psrc = xstd::assume_aligned<0x1000>( ( const __m256i* ) src );

			if ( keep_dst )
			{
				auto vkeep = impl::broadcast( keep_dst );
				for ( size_t n = 0; n != ( N / 16 ); n++ )
				{
					std::array<__m256i, 4> tmp;
					__hint_unroll()
					for( auto& v : tmp )
						v = *psrc++;
					
					__hint_unroll()
					for ( auto& v : tmp )
						v = vset | ( v & vnclr );

					__hint_unroll()
					for ( auto& v : tmp )
						v |= *pdst & vkeep;

					__hint_unroll()
					for( auto& v : tmp )
						*pdst++ = v;
				}
			}
			else
			{
				__hint_unroll_n( 2 )
				for ( size_t n = 0; n != ( N / 16 ); n++ )
				{
					std::array<__m256i, 4> tmp;
					__hint_unroll()
					for( auto& v : tmp )
						v = *psrc++;
					
					__hint_unroll()
					for ( auto& v : tmp )
						v = vset | ( v & vnclr );

					__hint_unroll()
					for( auto& v : tmp )
						*pdst++ = v;
				}
			}

			dst = ( ia32::pt_entry_64* ) pdst;
			src = ( const ia32::pt_entry_64* ) psrc;
		}
		if constexpr ( N % 16 )
		{
			for ( size_t i = 0; i != ( N % 16 ); i++ )
			{
				auto flags = src[ i ].flags;
				flags = set_mask | ( flags & ~clear_src );
				flags |= dst[ i ].flags & keep_dst;
				dst[ i ].flags = flags;
			}
		}
	}
	template<size_t N = 1>
	inline void borrow_ptes( ia32::pt_entry_64* dst, const ia32::pt_entry_64* src )
	{
		masked_copy_ptes<N>( dst, src, PT_ENTRY_64_IGNORED_2_FLAG, 0, PM_PTE_BORROWED_FLAG );
	}
	template<size_t N = 1>
	inline void copy_pte_rights( ia32::pt_entry_64* dst, const ia32::pt_entry_64* src )
	{
		static constexpr uint64_t mask =
			PT_ENTRY_64_WRITE_FLAG |
			PT_ENTRY_64_USER_FLAG |
			PT_ENTRY_64_PRESENT_FLAG |
			PT_ENTRY_64_PAGE_LEVEL_WRITE_THROUGH_FLAG |
			PT_ENTRY_64_PAGE_LEVEL_CACHE_DISABLE_FLAG |
			PT_ENTRY_64_LARGE_PAGE_FLAG |
			PT_ENTRY_64_EXECUTE_DISABLE_FLAG;
		masked_copy_ptes<N>( dst, src, ~mask, ~mask, 0 );
	}
	FORCE_INLINE static bool is_pfn_borrowed( ia32::pt_entry_64* pt )
	{
		return ( pt->flags & PM_PTE_BORROWED_FLAG ) == PM_PTE_BORROWED_FLAG;
	}
	FORCE_INLINE static void mark_pfn_borrowed( ia32::pt_entry_64* pt )
	{
		pt->flags |= PM_PTE_BORROWED_FLAG;
	}
	FORCE_INLINE static void mark_pfn_cloned( ia32::pt_entry_64* pt )
	{
		pt->flags &= ~( PM_PTE_BORROWED_FLAG | PT_ENTRY_64_GLOBAL_FLAG );
	}

	// Page table descriptor and basic memory management.
	//
	template<int8_t _depth>
	struct table
	{
		static constexpr int8_t depth = _depth;
		// Traits of the current level.
		//
		using entry_type = table<depth ? depth - 1 : 0>;
		static constexpr size_t page_size = mem::page_size( depth );
		static constexpr uint64_t index_of( any_ptr ptr ) { return 0x1FF & ( ( ptr.address >> 12 ) >> ( 9 * depth ) ); }

		// Large page check with constraints.
		//
		inline static constexpr bool is_large_page( const ia32::pt_entry_64& pte )
		{
			if ( depth == 0 || depth > mem::max_large_page_level )
				return false;
			else
				return pte.large_page;
		}

		// Entries.
		//
		std::array<ia32::pt_entry_64, 512> entries = {};

		// Walks the PTEs recursively, if callback returns true will stop iteration.
		//
		template<typename T>
		FORCE_INLINE void walk( T&& fn, any_ptr ptr )
		{
			// Get the PTE and invoke the callback.
			//
			size_t idx = index_of( ptr );
			auto pte = &entries[ idx ];
			bool last = !depth || !pte->present || is_large_page( *pte );

			using R = decltype( fn( this, idx, last ) );
			if constexpr ( !xstd::Void<R> )
			{
				if ( fn( this, idx, last ) )
					return;
			}
			else
			{
				fn( this, idx, last );
			}

			// If there are deeper entries, recurse.
			//
			if constexpr ( depth != 0 )
			{
				if ( !is_large_page( *pte ) && pte->present )
					return entry_type::from_pfn( pte->page_frame_number )->walk( std::forward<T>( fn ), ptr );
			}
		}
		
		// Looks up the bottom PTE.
		//
		FORCE_INLINE std::pair<ia32::pt_entry_64*, size_t> lookup( any_ptr ptr, bool own_pte, bool own_data, bool demote )
		{
			ia32::pt_entry_64* page_entry;
			int8_t depth;
			walk( [ & ] <typename T> ( T* tbl, size_t idx, bool last ) FORCE_INLINE
			{
				ia32::pt_entry_64* pte = &tbl->entries[ idx ];
				page_entry = pte;
				depth = T::depth;

				if ( last )
				{
					// If present and data ownership is requested:
					//
					if ( pte->present && own_data )
					{
						// Demote large pages if requested, copy otherwise.
						//
						if ( demote && is_large_page( tbl->entries[ idx ] ) )
							tbl->demote( idx );
						tbl->own( idx );
					}
				}
				else
				{
					// Own the PTE if requested.
					//
					if ( own_pte )
						tbl->own( idx );
				}
			}, ptr );
			return { page_entry, depth };
		}
		FORCE_INLINE std::pair<ia32::pt_entry_64*, int8_t> lookup( any_ptr ptr ) const
		{
			ia32::pt_entry_64* page_entry;
			int8_t depth;
			xstd::make_mutable( this )->walk( [ & ] <typename T> ( T * tbl, size_t idx, bool last ) FORCE_INLINE
			{
				if ( last )
				{
					ia32::pt_entry_64* pte = &tbl->entries[ idx ];
					page_entry = pte;
					depth = T::depth;
				}
			}, ptr );
			return { page_entry, depth };
		}

		// Owns an entry by its index.
		//
		void own( size_t idx )
		{
			// Skip if entry is not present or is not borrowed.
			//
			auto pte = &entries[ idx ];
			if ( !is_pfn_borrowed( pte ) || !pte->present )
				return;

			// Copy the data page / page table.
			//
			mem::phys_ptr<> old_page{ pte->page_frame_number << 12 };
			if ( !depth || is_large_page( *pte ) )
			{
				// Copy the entire page and change the PFN.
				//
				mem::phys_ptr<> new_page = alloc_page( mem::iso::pfn_type::phys_clone, page_size >> 12 );
				copy_page( new_page, old_page, page_size >> 12 );
				pte->page_frame_number = new_page.address >> 12;
			}
			else
			{
				// Copy the table.
				//
				pte->page_frame_number = entry_type::allocate_copy( old_page ).address >> 12;
			}

			// Mark cloned.
			//
			mark_pfn_cloned( pte );
		}

		// Demotes a large page by it's index.
		//
		void demote( size_t idx )
		{
			if constexpr ( depth != 0 )
			{
				// Skip if entry is not present or is not large.
				//
				auto pte = &entries[ idx ];
				if( !pte->present || !is_large_page( *pte ) )
					return;

				// Allocate and fill the page with entries.
				//
				mem::phys_ptr<entry_type> new_page = alloc_page();
				auto* tbl = new_page->entries.data();
				for ( size_t it = 0; it != new_page->entries.size(); it++ )
				{
					tbl[ it ] = *pte;
					tbl[ it ].large_page = ( depth - 1 ) != 0;
					tbl[ it ].page_frame_number += it << ( 9 * ( depth - 1 ) );
					borrow_ptes( &tbl[ it ], &tbl[ it ] );
				}

				// Update the original entry.
				//
				pte->page_frame_number = new_page.address >> 12;
				pte->large_page = false;
				mark_pfn_cloned( pte );
			}
		}

		// Deletes a specific entry recursively.
		//
		void free( size_t idx )
		{
			// Skip if borrowed or not present.
			//
			auto pte = &entries[ idx ];
			if ( is_pfn_borrowed( pte ) || !pte->present )
				return;

			// If another directory recurse.
			//
			if constexpr ( depth != 0 )
			{
				if ( !is_large_page( *pte ) )
				{
					auto tbl = entry_type::from_pfn( pte->page_frame_number );
					for ( size_t i = 0; i != tbl->entries.size(); i++ )
						tbl->free( i );
					free_page( pte->page_frame_number << 12 );
					pte->flags = 0;
					return;
				}
			}

			// Free the page.
			//
			free_page( pte->page_frame_number << 12, page_size >> 12 );
			pte->flags = 0;
		}

		// Deletes the whole table including self recursively.
		//
		void free()
		{
			for ( size_t i = 0; i != entries.size(); i++ )
				free( i );
			free_page( mem::get_physical_address( this ) );
		}

		// Copies the table from a given PFN.
		//
		static mem::phys_ptr<table> allocate_copy( mem::phys_ptr<> physical_address )
		{
			// Allocate a page, borrow all entries.
			//
			mem::phys_ptr<table> desc = alloc_page( mem::iso::pfn_type::phys_page_table );
			borrow_ptes<512>( desc->entries.data(), mem::phys_ptr<ia32::pt_entry_64>{ physical_address } );
			return desc;
		}

		// Allocates an empty table.
		//
		static mem::phys_ptr<table> allocate()
		{
			mem::phys_ptr<table> tbl = alloc_page( mem::iso::pfn_type::phys_page_table );
			fill_page( tbl, 0 );
			return tbl;
		}
		
		// Resolves the table from a given pointer.
		//
		FORCE_INLINE static mem::phys_ptr<table> from_pfn( uint64_t pfn ) { return pfn << 12; }
		static mem::phys_ptr<table> from_pte( ia32::pt_entry_64* pt ) { return mem::get_physical_address( xstd::align_down( pt, 0x1000 ) ); }

		// Resolves the system entry for the given address.
		//
		static ia32::pt_entry_64* get_system( any_ptr ptr ) { return mem::get_pte( ptr, depth ); }
	};
	using px =   table<mem::page_table_depth - 1>;
#if XSTD_IA32_LA57
	using pml5 = table<4>;
#endif
	using pml4 = table<3>;
	using pdpt = table<2>;
	using pd =   table<1>;
	using pt =   table<0>;

	FORCE_INLINE CONST_FN static px* get_current_px() { return ( px* ) mem::locate_page_table( mem::pxe_level ); }
};

#pragma clang attribute pop