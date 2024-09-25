#include "mirror.hpp"
#include <xstd/algorithm.hpp>
#include <ia32.hpp>
#include "../hooks/patch_manager.hpp"

namespace su
{
	static void setup_page_rights( ia32::pt_entry_64* spt, ia32::pt_entry_64* pt, bool trapped, bool shadowed )
	{
		( void ) spt;

		// Save the previous bits.
		//
		auto* ptd = pte_details( pt );
		ptd->trapped = trapped;
		ptd->was_w = pt->write;
		ptd->was_xd = pt->execute_disable;
		ptd->shadowed = shadowed;

		// If present:
		//
		if ( pt->present )
		{
			// Disable execution if system image.
			//
			if ( !trapped )
				pt->execute_disable = true;

			// Apply strict W^X.
			//
			if ( !pt->execute_disable && pt->write )
				pt->write = false;
		}
	}
	static void update_page_rights( ia32::pt_entry_64* spt, ia32::pt_entry_64* pt, bool trapped, bool shadowed )
	{
		( void ) shadowed; ( void ) spt;

		auto* ptd = pte_details( pt );
		ptd->was_w = pt->write;

		// If present:
		//
		if ( pt->present )
		{
			// Disable execution if system image.
			//
			if ( !trapped )
				pt->execute_disable = true;
			else
				pt->execute_disable = ptd->was_xd;

			// Apply strict W^X.
			//
			if ( !pt->execute_disable && pt->write )
				pt->write = false;
		}
	}

	// If the given pointer is trapped, returns the base address of the range, else returns nullptr.
	// - Caller must hold the lock.
	//
	static any_ptr is_trapped( const mirror_space& m, any_ptr pointer )
	{
		auto it = m.trapped_ranges.upper_bound( pointer );
		if ( it == m.trapped_ranges.begin() )
			return nullptr;
		--it;
		return it->first <= pointer && pointer < ( it->first + it->second ) ? it->first : 0;
	}
	
	// Lock free and faster implementation of is_trapped, only returns a boolean.
	//
	bool mirror_space::is_trapped_fast( any_ptr pointer ) const
	{
		if ( mem::px_index( pointer ) != pxi ) return false;
		auto [pte, _] = pxe->lookup( pointer );
		return pte->present && pte_details( pte )->trapped;
	}

	// Mapping, updating, and unmapping of memory ranges.
	// - Must be non-paged memory that is in a shadowed PXE.
	//
	bool mirror_space::map( any_ptr pointer, size_t length, bool trapped )
	{
		// Fail if the range is not page aligned.
		//
		if ( ( pointer | length ) & 0xFFF ) [[unlikely]]
			xstd::error( "Target is misaligned."_es );

		// Acquire a unique lock, fail if shadow PXE is not covering this range.
		//
		std::lock_guard _g{lock};
		mem::phys_ptr<pm::pdpt> pxe_ref = pxe;
		if ( auto pxi = mem::px_index( pointer ); pxi != mem::px_index( pointer + length ) )
			xstd::error( "Target is overflowing a single PXE."_es );
		else if ( pxi != this->pxi )
			xstd::error( "Target is not in shadow ranges."_es );

		// Add to the trap range if relevant.
		//
		if ( trapped )
			trapped_ranges.emplace( pointer, length );

		// Walk on page boundaries:
		//
		bool status = true;
		for ( size_t it = pointer; status && it < ( pointer + length ); )
		{
			size_t sz = 0x1000;
			pxe_ref->walk( [ & ] <typename T> ( T* tbl, size_t idx, bool )
			{
				// Resolve the entry and the corresponding system entry.
				//
				ia32::pt_entry_64* spte = T::get_system( it );
				ia32::pt_entry_64* pte = &tbl->entries[ idx ];

				// If last page:
				//
				if ( !T::depth || !spte->present || spte->large_page )
				{
					sz = T::page_size;

					// Free previous entry, borrow system PTE.
					//
					tbl->free( idx );
					pm::borrow_ptes( pte, spte );

					// If present, check for any patches.
					//
					bool shadowed = false;
					if ( pte->present )
					{
						if ( auto v = hook::lookup_shadow_pfn( pte->page_frame_number ) )
							pte->page_frame_number = *v, shadowed = true;
					}

					// Setup page rights and continue.
					//
					setup_page_rights( spte, pte, trapped, shadowed );
					return true;
				}
				// If page table, clone the table.
				//
				else if ( !pte->present || pm::is_pfn_borrowed( pte ) )
				{
					// Own a copy of the table.
					//
					pm::borrow_ptes( pte, spte );
					tbl->own( idx );

					// Clear every entry other than the target.
					//
					auto entry_table = T::entry_type::from_pfn( pte->page_frame_number );
					size_t nidx = T::entry_type::index_of( it );
					for ( size_t i = 0; i != entry_table->entries.size(); i++ )
						if ( i != nidx )
							entry_table->entries[ i ].flags = 0;
				}

				// Continue walking.
				//
				return false;
			}, it );
			it += sz;
		}
		return status;
	}
	bool mirror_space::update( any_ptr pointer, size_t length )
	{
		// Fail if the range is not page aligned.
		//
		if ( ( pointer | length ) & 0xFFF ) [[unlikely]]
			xstd::error( "Target is misaligned."_es );

		// Acquire a unique lock, fail if shadow PXE is not covering this range.
		//
		std::lock_guard _g{lock};
		mem::phys_ptr<pm::pdpt> pxe_ref = pxe;
		if ( auto pxi = mem::px_index( pointer ); pxi != mem::px_index( pointer + length ) )
			xstd::error( "Target is overflowing a single PXE."_es );
		else if ( pxi != this->pxi )
			xstd::error( "Target is not in shadow ranges."_es );

		// Walk on page boundaries:
		//
		bool status = true;
		bool trapped = is_trapped( *this, pointer );
		for ( size_t it = pointer; status && it < ( pointer + length ); )
		{
			size_t sz = 0x1000;
			pxe_ref->walk( [ & ] <typename T> ( T* tbl, size_t idx, bool )
			{
				// Resolve the entry and the corresponding system entry, skip until 
				// we reach the bottom page, halt if (correctly) borrowed table.
				//
				sz = T::page_size;
				ia32::pt_entry_64* spte = T::get_system( it );
				ia32::pt_entry_64* pte = &tbl->entries[ idx ];
				//auto apte_v = pte->flags;

				// If last page:
				//
				if ( !T::depth || !spte->present || spte->large_page )
				{
					sz = T::page_size;

					// If system page is freed, repeat.
					//
					if ( !spte->present ) {
						tbl->free( idx );
					} 
					// Otherwise, if this page did not exist, map it now.
					//
					else if ( !pte->present ) {
						pm::borrow_ptes( pte, spte );

						// If present, check for any patches.
						//
						bool shadowed = false;
						if ( pte->present ) {
							if ( auto v = hook::lookup_shadow_pfn( pte->page_frame_number ) )
								pte->page_frame_number = *v, shadowed = true;
						}

						// Setup page rights and continue.
						//
						if ( trapped ) pte->execute_disable = false; // Ughh??
						setup_page_rights( spte, pte, trapped, shadowed );
					} 
					// If trapped, update the entry. Won't be patched eitherway.
					//
					else if ( trapped ) {
						pte->page_frame_number = spte->page_frame_number;
						update_page_rights( spte, pte, trapped, false );
					}
					// Otherwise if we just have to update:
					//
					else {
						// If borrowed, update PFN.
						//
						bool shadowed = false;
						if ( pm::is_pfn_borrowed( pte ) ) {
							if ( auto v = hook::lookup_shadow_pfn( spte->page_frame_number ) )
								pte->page_frame_number = *v, shadowed = true;
							else
								pte->page_frame_number = spte->page_frame_number;
						}

						// Update rights.
						//
						update_page_rights( spte, pte, false, shadowed );
					}
					//if ( apte_v != pte->flags ) {
					//	xstd::log( "[ PTE Update ] %p | %p -> %p | System PTE: %p\n", it, apte_v, pte->flags, spte->flags );
					//}
					return true;
				}
				// If page table, clone the table.
				//
				else if ( !pte->present || pm::is_pfn_borrowed( pte ) )
				{
					// Own a copy of the table.
					//
					pm::borrow_ptes( pte, spte );
					tbl->own( idx );

					// Clear every entry other than the target.
					//
					auto entry_table = T::entry_type::from_pfn( pte->page_frame_number );
					size_t nidx = T::entry_type::index_of( it );
					for ( size_t i = 0; i != entry_table->entries.size(); i++ )
						if ( i != nidx )
							entry_table->entries[ i ].flags = 0;
				}

				// Continue walking.
				//
				return false;
			}, it );
			it += sz;
		}
		return status;
	}
	bool mirror_space::unmap( any_ptr pointer, size_t length )
	{
		// Fail if the range is not page aligned.
		//
		if ( ( pointer | length ) & 0xFFF ) [[unlikely]]
			xstd::error( "Target is misaligned."_es );

		// Acquire a unique lock, fail if shadow PXE is not covering this range.
		//
		std::lock_guard _g{lock};
		mem::phys_ptr<pm::pdpt> pxe_ref = pxe;
		if ( auto pxi = mem::px_index( pointer ); pxi != mem::px_index( pointer + length ) )
			xstd::error( "Target is overflowing a single PXE."_es );
		else if ( pxi != this->pxi )
			xstd::error( "Target is not in shadow ranges."_es );

		// Remove the trapped range entry.
		//
		if ( auto base = is_trapped( *this, pointer ) )
		{
			fassert( base == pointer );
			trapped_ranges.erase( base.address );
		}

		// Free every page:
		//
		for ( size_t it = pointer; it < ( pointer + length ); )
		{
			pxe_ref->walk( [ & ] <typename T> ( T * tbl, size_t idx, bool last )
			{
				if ( !last ) return;
				it += T::page_size;
				tbl->free( idx );
			}, it );
		}
		return true;
	}

	// Changes the shadowing of a PXE.
	//
	void mirror_space::set_shadowed( size_t pxi, bool empty )
	{
		std::lock_guard _g{lock};
		if ( pxe ) pxe->free();

		this->pxi = pxi;
		if ( empty )
			pxe = pm::px::entry_type::allocate();
		else
			pxe = pm::px::entry_type::allocate_copy( mem::get_pxe_by_index( pxi )->page_frame_number << 12 );
	}
};