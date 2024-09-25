#include "memory_isolation.hpp"
#include <xstd/random.hpp>
#include <xstd/crc.hpp>
#include <ntpp.hpp>
#include "memory.hpp"

// Implements page isolation between Selene and Ntoskrnl.
//
namespace mem::iso
{
	// Field encoding.
	//
	static constexpr uint64_t va_key = ( xstd::make_crandom<uint64_t>( 0xDD ) & xstd::fill_bits( 34, 12 ) ) | xstd::fill_bits( 64 - 46, 46 );
	static constexpr uint8_t type_key = 0x5A;
	inline static constexpr any_ptr encode_va( any_ptr va )
	{
		if ( !va ) return nullptr;
		return mem::get_pte( va ^ va_key );
	}
	inline static constexpr any_ptr decode_va( any_ptr pte )
	{
		if ( !pte ) return nullptr;
		return mem::pte_to_va( pte ) ^ va_key;
	}
	inline static constexpr uint8_t encode_type( pfn_type type )
	{
		return uint8_t( type ) ^ type_key;
	}
	inline static constexpr pfn_type decode_type( uint8_t type )
	{
		int8_t value = type ^ type_key;
		return pfn_type( ( value << 1 ) >> 1 );
	}

	// Constant field references.
	//
	//	fassert( SDK_OFFSET( nt::mmpfn_t, original_pte ) == 0x10 );
	//	fassert( SDK_OFFSET( nt::mmpfn_t, pte_address ) == 0x8 );
	FORCE_INLINE static auto& original_pte( nt::mmpfn_t* pfn ) { return xstd::ref_at<ia32::pt_entry_64>( pfn, 0x10 ); }
	FORCE_INLINE static auto& pte_address( nt::mmpfn_t* pfn ) { return xstd::ref_at<any_ptr>( pfn, 0x8 ); }

	// Batch encoding/decoding.
	//
	FORCE_INLINE static pfn_descriptor decode_pfn( nt::mmpfn_t* mpfn )
	{
		return {
			decode_type( original_pte( mpfn ).ignored_2 ),
			decode_va( pte_address( mpfn ) ),
		};
	}
	FORCE_INLINE static void encode_pfn( nt::mmpfn_t* mpfn, pfn_type type, any_ptr va )
	{
		pte_address( mpfn ) = encode_va( va );
		original_pte( mpfn ).ignored_2 = encode_type( type );
	}

	// Converts a page owned by the OS to an isolated one; and vice versa.
	// - If the allocation is purely physical, VA can be left null.
	//
	static constexpr any_ptr no_virtual_mapping = -8ll;
	FORCE_INLINE void claim_pfn( uint64_t pfn, any_ptr va, pfn_type type )
	{
		nt::mmpfn_t* mpfn = lookup_pfn( pfn );
		ntpp::unique_lock _g{ mpfn };
		mpfn->reference_count += 1224;

		// Validate the values.
		//
		if ( is_virtual_alloc( type ) )
			fassert( pte_address( mpfn ) == mem::get_pte( va ) );

		// Write the details.
		//
		encode_pfn( mpfn, type, va );
	}
	FORCE_INLINE void return_pfn( uint64_t pfn )
	{
		nt::mmpfn_t* mpfn = lookup_pfn( pfn );
		ntpp::unique_lock _g{ mpfn };
		mpfn->reference_count -= 1224;

		// Resolve the details.
		//
		auto [type, va] = decode_pfn( mpfn );

		// Restore the original details.
		//
		if ( is_virtual_alloc( type ) )
			pte_address( mpfn ) = mem::get_pte( va );
		else
			pte_address( mpfn ) = no_virtual_mapping;
		original_pte( mpfn ).ignored_2 = 0;
	}

	// Range based versions.
	//
	void claim_va( any_ptr ptr, size_t length, pfn_type type )
	{
		// Iterate page boundaries:
		//
		for ( auto it = ptr; it < ( ptr + length ); )
		{
			// Get the PTE, if not present, touch and retry.
			//
			auto [pte, depth] = lookup_pte( it );
			if ( !pte->present )
			{
				ia32::touch( it );
				continue;
			}

			// Redirect to PFN version.
			//
			size_t sz = mem::page_size( depth );
			fassert( !( it & ( sz - 1 ) ) );
			for ( size_t n = 0; n != ( sz >> 12 ); n++ )
				claim_pfn( pte->page_frame_number + n, it + ( n << 12 ), type );
			it += sz;
		}
	}
	void return_va( any_ptr ptr, size_t length )
	{
		// Iterate page boundaries:
		//
		for ( auto it = ptr; it < ( ptr + length ); )
		{
			// Get the PTE, if not present, touch and retry.
			//
			auto [pte, depth] = lookup_pte( it );
			if ( !pte->present )
			{
				ia32::touch( it );
				continue;
			}

			// Redirect to PFN version.
			//
			size_t sz = mem::page_size( depth );
			fassert( !( it & ( sz - 1 ) ) );
			for ( size_t n = 0; n != ( sz >> 12 ); n++ )
				return_pfn( pte->page_frame_number + n );
			it += sz;
		}
	}
	void claim_pfns( uint64_t pfn, size_t count, pfn_type type )
	{
		while ( count-- )
			claim_pfn( pfn++, nullptr, type );
	}
	void return_pfns( uint64_t pfn, size_t count )
	{
		while ( count-- )
			return_pfn( pfn++ );
	}

	// Given an isolated PFN, resolves the details of the mapping.
	//
	FORCE_INLINE pfn_descriptor resolve( uint64_t pfn )
	{
		nt::mmpfn_t* mpfn = lookup_pfn( pfn );
		return decode_pfn( mpfn );
	}

	// Given a PFN, if isolated, resolves the details of the mapping.
	//
	FORCE_INLINE std::optional<pfn_descriptor> try_resolve( uint64_t pfn )
	{
		// Lookup the PFN.
		//
		nt::mmpfn_t* mpfn = lookup_pfn( pfn );
		if ( mpfn->reference_count <= 1224 )
			return std::nullopt;

		// Validate type.
		//
		pfn_descriptor desc = decode_pfn( mpfn );
		if ( !is_valid( desc.type ) )
			return std::nullopt;

		// Virtual address must be valid and either null or in kernel space.
		//
		if ( desc.mapping_va && !is_kernel_va( desc.mapping_va, true ) )
			return std::nullopt;
		return desc;
	}

	// Given a PFN returns whether or not the page is isolated.
	//
	FORCE_INLINE bool is_isolated( uint64_t pfn, bool pre_init )
	{
		// Handle pre-init pages.
		//
		if ( pre_init ) {
			nt::mmpfn_t* mpfn = lookup_pfn( pfn );
			return pte_address( mpfn ) == 0x7a4e31c5;
		}
		return try_resolve( pfn ).has_value();
	}

	// Given a VA checks whether or not it is a selene image address.
	//
	FORCE_INLINE bool is_isolated_image_va( any_ptr ptr )
	{
		// If not in the system images va range, not our image.
		//
		if ( !is_driver_address( ptr ) )
			return false;
		
		// Iterate the page tables until the PTE.
		//
		for ( int8_t n = pxe_level - 1; n != pte_level; n-- )
		{
			auto* entry = get_pte( ptr, n );
			
			// Always allocated as PTEs, so if that's not the case, not our image.
			//
			if ( !entry->present || entry->large_page )
				return false;
		}

		// Fail if invalid address.
		//
		auto* pte = get_pte( ptr );
		if ( !pte->present )
			return false;

		// Fail if not isolated or if not image.
		//
		auto info = try_resolve( pte->page_frame_number );
		return info && ( info->type == pfn_type::phys_image || info->type == pfn_type::phys_component_image );
	}

	// Initializes memory isolation by converting node allocated pages
	// mapping this driver into isolated pages.
	//
	NO_INLINE void init()
	{
		// Validate page state.
		//
		fassert( is_isolated( mem::get_pfn( &init ), true ) );

		// Recursively iterate every page in the same top level page table entry as us.
		//
		auto rec = [ & ] <auto N> ( auto&& self, uint64_t va, xstd::const_tag<N> ) -> void
		{
			auto pte = mem::get_pte( va, N );

			// Skip if not present.
			//
			if ( !pte->present )
				return;

			// If above PTE level:
			//
			if constexpr ( N != 0 )
			{
				// Skip if large page.
				//
				if ( pte->large_page )
					return;

				// Iterate all entries:
				//
				for ( size_t ipte = 0; ipte != 512; ipte++ )
					self( self, va | ( ipte << ( 12 + 9 * ( N - 1 ) ) ), xstd::const_tag<N - 1>{} );
			}
			// If RWX PTE:
			//
			else if ( pte->write && !pte->execute_disable )
			{
				// If pre-init memory:
				//
				if ( is_isolated( pte->page_frame_number, true ) ) {
					// Isolate.
					//
					claim_pfn( pte->page_frame_number, va, pfn_type::phys_image );
				}
			}
		};
		rec( rec, mem::make_cannonical( mem::get_driver_px() << ( mem::va_bits - 9 ) ), xstd::const_tag<mem::page_table_depth - 1>{} );

		// Make sure we've converted all pages as expected.
		//
		fassert( is_isolated( mem::get_pfn( &init ) ) );
	}
}