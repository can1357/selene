#include "patch_manager.hpp"
#include <xstd/assert.hpp>
#include <xstd/bitwise.hpp>
#include <sdk/mm/api.hpp>
#include <nt/image.hpp>
#include <map>
#include <ntpp.hpp>
#include "../utility/page_manager.hpp"
#include "../utility/apic.hpp"
#include "../utility/memory.hpp"

namespace hook
{
	// Patch implementation.
	//
	template<bool PreAllocationPass>
	static void patch_helper( any_ptr ptr, std::span<const uint8_t> new_bytes )
	{
		// Iterate each page.
		//
		for ( any_ptr it = ptr; it < ( ptr + new_bytes.size() ); ) {
			// Lookup the PTE.
			//
			auto [pte, depth] = mem::lookup_pte( it );
			size_t sz = mem::page_size( depth );
			any_ptr next_page = ( it & ~( sz - 1 ) ) + sz;
			uint64_t target_pfn = pte->page_frame_number;
			
			if constexpr ( PreAllocationPass ) {
				// If we did not patch this page before:
				//
				if ( auto it1 = g_shadow_pfn_db.find( target_pfn ); it1 == g_shadow_pfn_db.end() ) {
					// Allocate a shadow page, preferably at a low point of memory
					//
					uint64_t copy_pfn = mem::allocate_physical_resident( sz >> 12, { 128_mb >> 12, 4_gb >> 12, 0xFFFFFFFFF } );

					// Spoof the PFNDB VA to place it at the same position as the original PFN.
					//
					auto cpfn0 = mem::lookup_pfn( copy_pfn );
					auto tpfn0 = mem::lookup_pfn( target_pfn );
					for ( size_t i = 0; i != ( sz >> 12 ); i++ ) {
						ntpp::unique_lock _g{ &cpfn0[ i ] };
						// Copy original_pte && pte_address.
						xstd::ref_at<uint64_t>( cpfn0 + i, 0x08 ) = xstd::ref_at<uint64_t>( tpfn0 + i, 0x08 );
						xstd::ref_at<uint64_t>( cpfn0 + i, 0x10 ) = xstd::ref_at<uint64_t>( tpfn0 + i, 0x10 );
						cpfn0[ i ].reference_count += 12;
					}

					// Copy the data and flush the address range.
					//
					pm::copy_page( mem::phys_ptr{ copy_pfn << 12 }, mem::phys_ptr{ target_pfn << 12 }, sz >> 12 );
					ia32::clwb_s( mem::phys_ptr{ copy_pfn << 12 }.get(), sz >> 12 );

					// Initialize the entries.
					//
					for ( size_t i = 0; i != ( sz >> 12 ); i++ ) {
						g_shadow_pfn_db.emplace( target_pfn + i, copy_pfn + i );
						g_shadow_pfn_db.emplace( copy_pfn + i, ( target_pfn + i ) | rshadow_flag );
					}
				}
			} else {
				// Write the patch.
				//
				uint64_t patch_begin_pa = ( target_pfn << 12 ) | ( it & ( sz - 1 ) );
				size_t patch_size = std::min( next_page, ptr + new_bytes.size() ) - it;
				mem::phys_ptr va{ patch_begin_pa };
				memcpy(
					va,
					new_bytes.data() + ( it - ptr ),
					patch_size
				);
				ia32::clwb_s( va.get(), patch_size );
			}
			it = next_page;
		}
	}

	// Patches the kernel with the given bytes, input must be smaller than a page.
	//
	void patch( const void* ptr, std::span<const uint8_t> new_bytes )
	{
		//xstd::log( "Patch (%p) -> %s\n", ptr, new_bytes );

		// Pre-allocate for the patch.
		//
		patch_helper<true>( ptr, new_bytes );

		// Call an IPI.
		//
		std::atomic<int32_t> latch = ( int32_t ) apic::number_of_processors();
		ntpp::call_ipi( [ & ]
		{
			ia32::scope_irql<HIGH_LEVEL> _g{};

			// Wait for all CPUs to disable interrupts.
			//
			--latch;
			while ( latch > 0 )
				yield_cpu();

			// If first processor, apply the patch.
			//
			if ( ia32::read_pcid() == 0 )
				patch_helper<false>( ptr, new_bytes );
			ia32::clflush( ptr, new_bytes.size() );

			// Synchronize until all work is finished.
			//
			--latch;
			while ( -latch != ( int32_t ) apic::number_of_processors() )
				yield_cpu();
		} );
	}
};