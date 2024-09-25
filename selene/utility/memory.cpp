#include "memory.hpp"
#include <xstd/bitwise.hpp>
#include <sdk/mm/api.hpp>
#include <sdk/mi/api.hpp>
#include <sdk/expi/api.hpp>
#include <sdk/mi/pfn_cache_attribute_t.hpp>
#include <array>
#include <unordered_set>
#include <ntpp.hpp>
#include <sdk/mi/flags_t.hpp>
#include "../sched/irq.hpp"
#include "../misc/ntdll_info.hpp"
#include "../hooks/patch_manager.hpp"
#include "../su/su0.hpp"
#include "memory_isolation.hpp"

// Implement the IA32 interface.
//
void ia32::mem::ipi_flush_tlb()
{
	if ( !scheduler::initialized ) [[unlikely]]
		return xstd::cold_call( [] { ntpp::call_ipi( ia32::flush_tlb ); } );
	scheduler::call_ipi( [ ] { ia32::flush_tlb(); } );
}
void ia32::mem::ipi_flush_tlb( any_ptr ptr, size_t length )
{
	if ( length >= 128_mb || !scheduler::initialized ) [[unlikely]]
		return xstd::cold_call( [ ] { ipi_flush_tlb(); } );
	scheduler::call_ipi( [ = ] { ia32::invlpg( ptr, length ); } );
}
FORCE_INLINE any_ptr ia32::mem::map_physical_memory_range( uint64_t address, size_t length, bool cached )
{ 
	if ( ( address + length ) > ( ::mem::max_pfn() << 12 ) )
		return nullptr;
	auto ptr = ::mem::get_phys_base() + address;
	if ( !cached ) {
		for ( auto it = ptr; it < ( ptr + length ); ) {
			auto [pte, depth] = lookup_pte( it );
			std::atomic_ref( pte->flags ).fetch_or( PT_ENTRY_64_PAGE_LEVEL_CACHE_DISABLE_FLAG | PT_ENTRY_64_PAGE_LEVEL_WRITE_THROUGH_MASK );
			it += mem::page_size( depth );
		}
		mem::ipi_flush_tlb( ptr, length );
	}
	return ptr;
}
FORCE_INLINE void ia32::mem::unmap_physical_memory_range( any_ptr, size_t ) {}

namespace mem
{
	[[gnu::constructor( 120 )]] static void init()
	{
		// Initialize the virtual memory.
		//
		ia32::mem::init( px_index( *mm::pte_base ) );

		// Fix dynamic relocations.
		//
		__builtin_store_dynamic( "@.pfndb", *mm::pfn_database );
		__builtin_store_dynamic( "@.mistate", *( mi::visible_state_t** ) &mi::visible_state );
		__builtin_store_dynamic( "@.pmemdesc", *mm::physical_memory_block );

		// Initialize the VA types.
		//
		auto& visible_state = get_visible_state();
		for ( size_t n = 0; n != 256; n++ ) {
			system_va_types[ n ] = ( uint8_t ) mi::system_va_type_t::unused;
			pxi_flags[ n ] = va_user | va_process | va_paged;
		}
		for ( size_t n = 256; n != 512; n++ ) {
			auto type = mi::system_va_type_t( visible_state.system_va_type[ n - 256 ] );
			system_va_types[ n ] = ( uint8_t ) type;

			switch ( type ) {
				case mi::system_va_type_t::session_space:
					pxi_flags[ n ] = va_image | va_session | va_paged;
					break;
				case mi::system_va_type_t::process_space:
					pxi_flags[ n ] = va_process;
					break;
				case mi::system_va_type_t::paged_pool:
					pxi_flags[ n ] = va_pool | va_paged;
					break;
				case mi::system_va_type_t::non_paged_pool:
				case mi::system_va_type_t::special_pool_paged:
				case mi::system_va_type_t::special_pool_non_paged:
				case mi::system_va_type_t::secure_non_paged_pool:
					pxi_flags[ n ] = va_pool;
					break;
				case mi::system_va_type_t::system_ptes:
					pxi_flags[ n ] = va_syspte;
					break;
				case mi::system_va_type_t::session_global_space:
					pxi_flags[ n ] = va_session;
					break;
				case mi::system_va_type_t::driver_images:
					pxi_flags[ n ] = va_image | va_driver;
					break;
				case mi::system_va_type_t::kernel_stacks:
				case mi::system_va_type_t::kernel_shadow_stacks:
					pxi_flags[ n ] = va_stack;
					break;
				case mi::system_va_type_t::hal:
				case mi::system_va_type_t::system_cache:
					pxi_flags[ n ] = va_hal;
					break;
				case mi::system_va_type_t::pfn_database:
					pxi_flags[ n ] = va_pfn_db;
					break;
				case mi::system_va_type_t::boot_loaded:
					pxi_flags[ n ] = va_boot;
					break;
				default:
					pxi_flags[ n ] = va_system;
					break;
			}
		}
		pxi_flags[ self_ref_index() ] |= va_self_ref;
		pxi_flags[ mem::px_index( ke::km_user_shared_data_va ) ] |= va_ushared;
		pxi_flags[ mem::px_index( ke::um_user_shared_data_va ) ] |= va_ushared;

		// Determine the maximum PFN.
		//
		auto mmdesc = get_phys_mem_desc();
		size_t highest_pfn = 0;
		for ( auto& run : std::span{ &mmdesc->run[ 0 ], mmdesc->number_of_runs } )
			highest_pfn = std::max( highest_pfn, run.base_page + run.page_count );

		// Reserve the space and write the PTEs.
		//
		size_t max_pfn_v = set_max_valid_pfn( highest_pfn );
		auto phys_base = reserve_system_va( max_pfn_v << 12, mi::system_va_type_t::system_cache );
		fassert( lookup_pte( phys_base ).second == pde_level ); // PDE
		set_phys_base( phys_base );
		ia32::pt_entry_64* phys_base_pte_it = get_pte( phys_base, pde_level );
		for ( size_t pfn = 0; pfn < max_pfn_v; pfn += 512 ) {
			ia32::pt_entry_64 pte = { .flags = 0 };
			pte.present = true;
			pte.write = true;
			pte.large_page = true;
			pte.global = true;
			pte.page_frame_number = pfn;
			pte.execute_disable = true;
			*phys_base_pte_it++ = pte;
		}

		// Fix KUSER_SHARED_DATA privileges.
		//
		lookup_pte( ke::km_user_shared_data_va ).first->write = true;

		// Flush TLB.
		//
		ntpp::call_ipi( ia32::flush_tlb );
	}
	
	// Memcpy without write protection, address range must be locked for src.
	//
	void copy_nwp( any_ptr dst, any_ptr src, size_t n )
	{
		ia32::scope_irql<HIGH_LEVEL> irql{};

		// Iterate on page boundary.
		//
		for ( auto it = dst; it < ( dst + n ); ) {
			// Lookup the PTE.
			//
			auto [pte, depth] = lookup_pte( it );
			size_t size = page_size( depth );

			// If PTE is not present, reset the IRQL, touch the page and retry.
			//
			if ( !pte->present ) {
				ia32::set_irql( irql.prev );
				ia32::touch( it );
				ia32::set_irql( HIGH_LEVEL );
				continue;
			}

			// Determine the physical address and the limit of our copy.
			//
			uint64_t phys_addr = ( pte->page_frame_number << 12 ) | ( it & ( size - 1 ) );
			any_ptr va_limit = size + ( it & ~( size - 1 ) );
			size_t max_copy = std::min( va_limit, dst + n ) - it;

			// Copy the memory, forward the src pointer and the count.
			//
			memcpy( phys_ptr<>{ phys_addr }, src, max_copy );
			ia32::sfence();
			ia32::clwb_s( it, max_copy );

			src += max_copy;
			it += max_copy;
		}
	}

	// PTE details.
	//
	FORCE_INLINE bool is_copy_on_write( ia32::pt_entry_64* pte )
	{
		return !pte->write && ( ( nt::mmpte_t* ) pte )->hard.copy_on_write;
	}
	FORCE_INLINE bool set_copy_on_write( ia32::pt_entry_64* pte, bool value )
	{
		auto* mpte = ( ( nt::mmpte_t* ) pte );
		return xstd::make_atomic( mpte->hard.copy_on_write ).exchange( value );
	}
	FORCE_INLINE ia32::pt_entry_64 set_copy_on_write( ia32::pt_entry_64 pte, bool value )
	{
		auto* mpte = ( nt::mmpte_t* ) &pte;
		mpte->hard.copy_on_write = value;
		return pte;
	}

	// Physical address properties.
	//
	RINLINE bool is_physical_address_valid( uint64_t physical_address, bool strict ) {
		uint64_t pfn = physical_address >> 12;
		if ( !strict ) return pfn <= max_valid_pfn();

		auto* mmdesc = get_phys_mem_desc();
		for ( auto& run : std::span{ &mmdesc->run[ 0 ], mmdesc->number_of_runs } )
			if ( run.base_page <= pfn && pfn < ( run.base_page + run.page_count ) )
				return true;
		return false;
	}

	// Virtual page faults.
	//
	static nt::trapframe g_immune_frame = [ ] ()
	{
		nt::trapframe tf;
		tf.rflags.flags = 0x200;
		tf.seg_cs.flags = 0x33;
		tf.rip = 0;
		if ( sdk::exists( ke::user_pop_entry_s_list_fault ) )
			tf.rip = *( uint64_t* ) &ke::user_pop_entry_s_list_fault;
		return tf;
	}();
	CONST_FN static nt::trapframe* get_immune_frame() {
		return g_immune_frame.rip ? &g_immune_frame : nullptr;
	}
	void set_immune_pointer( any_ptr p ) { g_immune_frame.rip = p; }

	static nt::result<> virtual_fault_initial_validate( any_ptr address, ia32::page_fault_exception error ) {
		// Fail if non-cannonical or invalid address is given.
		//
		if ( !is_cannonical( address ) || !address )
			return nt::status{ STATUS_ACCESS_VIOLATION };

		// Detect privilege related errors.
		//
		if ( error.user_mode_access && address >= um_va_end )
			return nt::status{ STATUS_ACCESS_VIOLATION };
		if ( error.reserved_bit_violation )
			return nt::status{ STATUS_REPAIR_NEEDED };
		return nt::status{ STATUS_SUCCESS };
	}

	nt::result<> virtual_fault( any_ptr address, ia32::page_fault_exception error ) {
		// Pass through initial validation.
		//
		if ( auto status = virtual_fault_initial_validate( address, error ); status.fail() ) {
			return status;
		}

		// If error was due to page not being present:
		//
		if ( !error.present ) {
			// If PTE is present:
			//
			ia32::pt_entry_64 acc;
			auto [pte, level] = mem::lookup_pte( address, &acc );
			if ( pte->present ) {
				// Detect and silently correct TLB errors:
				//
				bool okay = true;
				okay = okay && ( !error.execute || !acc.execute_disable );
				okay = okay && ( !error.write   || acc.write );
				if ( okay ) {
					ia32::invlpg( address );
					return nt::status{ STATUS_SUCCESS };
				}
			}
		}

		// Fail if IRQL is too high or immune frame is not ready.
		//
		auto* immune_frame = get_immune_frame();
		if ( !immune_frame || ia32::get_effective_irql() > APC_LEVEL )
			return nt::status{ STATUS_INTERRUPT_STILL_CONNECTED };
		return ( nt::status ) mm::access_fault( error.flags, address, nt::mode_t::kernel_mode, immune_frame );
	}

	// With interrupts disabled, looks up a PTE and invokes virtual fault if it does not exist in a loop until we can get a hard PTE.
	// - Must be called with interrupts disabled, but should be enable ready.
	//
	std::pair<ia32::pt_entry_64, int8_t> establish_pte( any_ptr address, ia32::page_fault_exception error ) {
		ia32::scope_irql<APC_LEVEL, true> irql{};
		auto* immune_frame = get_immune_frame();

		// Pass through initial validation.
		//
		if ( virtual_fault_initial_validate( address, error ).success() ) {
			// Build hierarchy, start looping.
			//
			auto hierarchy = mem::get_pte_hierarchy( address );
			for ( size_t i = 0; i != 1024; i++ ) {
				// If PTE is present:
				//
				ia32::pt_entry_64 acc;
				auto [pte, level] = mem::lookup_pte( hierarchy, &acc );
				auto vpte = *pte;
				if ( vpte.present ) {
					// If it has proper access, return.
					//
					bool okay = true;
					okay = okay && ( !error.execute || !acc.execute_disable );
					okay = okay && ( !error.write || error.write );
					if ( okay ) {
						return { vpte, level };
					}
					error.present = true;
				}

				// Fail if IRQL is too high or immune frame is not ready.
				//
				if ( irql.prev > APC_LEVEL || !immune_frame ) {
					break;
				}

				// Virtual fault.
				//
				ia32::enable();
				auto status = ( nt::status ) mm::access_fault( error.flags, address, nt::mode_t::kernel_mode, immune_frame );
				ia32::disable();

				// Fail if unsuccesful.
				//
				if ( status.is_error() ) break;
			}
		}
		return { { .flags = 0 }, 0 };
	}

	// Page locking and unlocking.
	//
	bool lock_page( uint64_t _pfn )
	{
		// Lookup PFN and aquire the lock.
		//
		nt::mmpfn_t* pfn = lookup_pfn( _pfn );
		ntpp::unique_lock _g{ pfn };

		// Increment the reference count and return.
		//
		auto& ref = xstd::make_atomic( pfn->reference_count );
		auto refc = ref.load( std::memory_order::relaxed );
		while ( refc > 0 ) [[likely]]
			if ( ref.compare_exchange_strong( refc, refc + 1 ) ) [[likely]]
				return true;
		return false;
	}
	void unlock_page( uint64_t _pfn )
	{
		// Lookup PFN and aquire the lock.
		//
		nt::mmpfn_t* pfn = lookup_pfn( _pfn );
		ntpp::unique_lock _g{ pfn };

		// Decrement reference count and return.
		//
		int64_t new_count = --xstd::make_atomic( pfn->reference_count );
		dassert( new_count >= 0 );
	}
	bool is_pagable( uint64_t pfn )
	{
		return lookup_pfn( pfn )->flink != 0;
	}

	// Independent memory allocation / deallocation.
	//
	FORCE_INLINE any_ptr allocate_independent( size_t length )
	{
		return ( void* ) mm::allocate_independent_pages( xstd::align_up( length, 0x1000 ), -1ll );
	}
	FORCE_INLINE void free_independent( any_ptr ptr, size_t length )
	{
		mm::free_independent_pages( ptr, xstd::align_up( length, 0x1000 ) );
	}
	// Physical memory allocation via a MDL, optionally contigious.
	//
	nt::mdl_t* allocate_physical_for_mdl( uint32_t flags, size_t page_count, uint64_t max_pfn, nt::memory_caching_type_t cattr ) {
		flags |= MM_ALLOCATE_FULLY_REQUIRED;
		
		size_t alignment = 0;
		if ( flags & MM_ALLOCATE_REQUIRE_CONTIGUOUS_CHUNKS ) {
			// If 2MB or above, use large pages.
			//
			if ( page_count >= 512 ) {
				alignment =  512;
				page_count = xstd::align_up( page_count, alignment );
				max_pfn =    xstd::align_down( max_pfn, alignment );
			}
		}

		nt::mdl_t* result = mm::allocate_pages_for_mdl_ex(
			alignment << 12,  // min addr
			max_pfn   << 12,  // max addr
			alignment << 12,  // skip bytes
			page_count << 12, // total bytes
			cattr,
			flags
		);
		//xstd::log( "physmdl(min=%llx, max=%llx, skip=%llx, total=%llx, f=0x%x) -> %p\n",
		//		   alignment << 12,  // min addr
		//		   max_pfn << 12,  // max addr
		//		   alignment << 12,  // skip bytes
		//		   page_count << 12, // total bytes
		//		   flags,
		//		   result );
		return result;
	}
	void free_physical_mdl( nt::mdl_t* mdl, bool deallocate ) {
		mdl->start_va = nullptr;
		if ( deallocate ) mm::free_pages_from_mdl( mdl );
		ex::free_pool( mdl );
	}

	// Physical memory allocation / deallocation.
	//
	uint64_t allocate_physical_resident( size_t page_count, std::initializer_list<uint64_t> max_pfns, nt::memory_caching_type_t cattr ) {
		nt::mdl_t* mdl = nullptr;
		for ( uint64_t max_pfn : max_pfns ) {
			mdl = allocate_physical_for_mdl( MM_ALLOCATE_REQUIRE_CONTIGUOUS_CHUNKS, page_count, max_pfn, cattr );
			if ( mdl ) break;
		}
		if ( !mdl ) xstd::error( "Failed required physical allocation."_es );
		uint64_t pfn = pfn_array( mdl )[ 0 ];
		ex::free_pool( mdl );
		return pfn;
	}

	static nt::status try_allocate_pfn( mi::partition_t* partition, uint64_t length, uint64_t alignment, uint64_t min_pfn, uint64_t max_pfn, uint32_t node, mi::pfn_cache_attribute_t cattr, uint64_t* out )
	{
		if ( sdk::exists( mi::find_contiguous_pages ) )
		{
			return ( nt::status ) mi::find_contiguous_pages(
				// Related partition.
				partition,
				// Range of the requested PFN.
				min_pfn, max_pfn,
				// Alignment and allocation size.
				alignment, length,
				// Caching type.
				cattr,
				// Node and channel.
				node, 0x80000000,
				// Flags.
				0x20100001 /*no charge, initially referenced*/,
				// Output information.
				nullptr, out
			);
		}
		else
		{
			return ( nt::status ) mi::find_contiguous_pages_ex(
				// Related partition.
				partition,
				// Range of the requested PFN.
				min_pfn, max_pfn,
				// Alignment and allocation size.
				alignment, 0, length,
				// Caching type.
				cattr,
				// Node and channel.
				node, 0x80000000,
				// Flags.
				0x20100001 /*no charge, initially referenced*/,
				// Output information.
				0, nullptr, out
			);
		}
	}
	RINLINE uint64_t allocate_physical( size_t page_count, uint64_t max_pfn, mi::pfn_cache_attribute_t cattr )
	{
		// If 2MB or above, use large pages.
		//
		size_t alignment = 0;
		if ( page_count >= 512 ) {
			alignment =  512;
			page_count = xstd::align_up( page_count, 512 );
			max_pfn =    xstd::align_down( max_pfn, alignment );
		}
		
		// Enter the allocation loop.
		//
		auto* partition = ( mi::partition_t* ) &mi::system_partition;
		uint32_t node = 0x8000000;
		for( size_t n = 0; n < 16384; n++ )
		{
			uint64_t pfn = 0;
			nt::result<> status = try_allocate_pfn( partition, page_count, alignment, alignment, max_pfn, node, cattr, &pfn );
			
			// If successful, return the physical address.
			//
			if ( status.success() ) [[likely]] {
				if ( alignment )
					dassert( ( pfn & ( alignment - 1 ) ) == 0 );
				return pfn;
			}
			
			// If below or at APC level, wait for free pages.
			//
			if ( ia32::get_irql() <= APC_LEVEL ) {
				ntpp::yield_execution();
				mi::wait_for_free_page( partition );
			} else {
				n += 512;
			}

			// Try next node.
			//
			if ( node == 0x8000000 ) {
				node = 0;
			} else {
				node++;
				if ( node == *( uint16_t* ) &ke::number_nodes )
					node = 0x8000000;
			}
		}
		return 0;
	}
	RINLINE void free_physical( uint64_t pfn, size_t length )
	{
		auto desc = lookup_pfn( pfn );
		for ( auto it = desc; it != ( desc + length ); ++it ) {
			ntpp::unique_lock _g{ it };
			it->pte_long = 0;
			--it->reference_count;
			it->u2.delete_bit = true;
			mi::decrement_share_count( it );
		}
	}

	// Virtual address range allocation / deallocation, 2MB granularity.
	//
	RINLINE any_ptr reserve_system_va( size_t length, mi::system_va_type_t type, bool use_ptes )
	{
		size_t lpage_count = ( length + 0x1FFFFF ) >> ( 12 + 9 );
		uint64_t va = mi::obtain_system_va( lpage_count, type );
		if ( va ) {
			mi::make_zeroed_page_tables(
				get_pte( va ),
				get_pte( va + ( lpage_count << ( 12 + 9 ) ) - 1 ),
				1 | ( use_ptes ? 0 : 2 ),
				type
			);
		}
		return va;
	}
	RINLINE void return_system_va( any_ptr ptr, size_t length, mi::system_va_type_t type )
	{
		size_t lpage_count = ( length + 0x1FFFFF ) >> ( 12 + 9 );
		mi::return_system_va( ptr, ptr + ( lpage_count << ( 12 + 9 ) ), type, nullptr );
	}

	// Combined helpers.
	//
	nt::mdl_t* allocate_component_memory( size_t num_pages, mi::system_va_type_t type )
	{
		// Reserve virtual memory.
		//
		any_ptr base_address = reserve_system_va( num_pages << 12, type, true );
		if ( !base_address )
			return nullptr;

		// Allocate physical memory.
		//
		auto mdl = allocate_physical_for_mdl( 0, num_pages );
		if ( !mdl ) {
			return_component_memory( base_address, num_pages, type );
			return nullptr;
		}

		// Write the PTEs.
		//
		for ( size_t it = 0; it != num_pages; it++ ) {
			any_ptr va = base_address + ( it << 12 );
			ia32::pt_entry_64* pte = get_pte( va );
			uint64_t pfn = pfn_array( mdl )[ it ];
			iso::claim_pfn( pfn, va, iso::pfn_type::phys_component_image );
			pte->present = true;
			pte->write = true;
			pte->user = false;
			pte->page_level_write_through = false;
			pte->page_level_cache_disable = false;
			pte->accessed = false;
			pte->dirty = false;
			pte->large_page = false;
			pte->page_frame_number = pfn;
			pte->protection_key = 0;
			pte->execute_disable = false;
		}

		// Flush the TLB and return.
		//
		ipi_flush_tlb( base_address, num_pages << 12 );
		mdl->start_va = base_address;
		return mdl;
	}
	void return_component_memory( nt::mdl_t* mdl, size_t num_pages, mi::system_va_type_t type )
	{
		// Return the virtual address range.
		//
		return_system_va( mdl->start_va, num_pages << 12, type );

		// Return all physical memory.
		//
		free_physical_mdl( mdl );
	}

	// Virtual address range allocation / deallocation, no VA type specified, 4KB granularity.
	//
	RINLINE any_ptr reserve_system_va( size_t length )
	{
		size_t page_count = ( length + 0xFFF ) >> 12;
		auto ptes = ( ia32::pt_entry_64* ) mi::reserve_ptes( &get_visible_state().system_pte_info, page_count );
		if ( ptes )
			return pte_to_va( ptes );
		return nullptr;
	}
	RINLINE void return_system_va( any_ptr ptr, size_t length )
	{
		size_t page_count = ( length + 0xFFF ) >> 12;
		mi::release_ptes( &get_visible_state().system_pte_info, get_pte( ptr ), page_count );
	}

	// Hyperspace helpers.
	//
	RINLINE any_ptr map_hyperspace_at_dpc_level( uint64_t pfn )
	{
		CHECK_IRQL( == DISPATCH_LEVEL );
		return mi::map_page_in_hyper_space_worker( pfn, nullptr, 0 );
	}
	RINLINE std::pair<any_ptr, uint8_t> map_hyperspace( uint64_t pfn )
	{
		// Raise to DISPATCH_LEVEL.
		//
		CHECK_IRQL( <= DISPATCH_LEVEL );
		irql_t prev_irql = ia32::raise_irql( DISPATCH_LEVEL );
		uint64_t va = map_hyperspace_at_dpc_level( pfn );
		return { va, prev_irql };
	}
	RINLINE void unmap_hyperspace( any_ptr ptr )
	{
		CHECK_IRQL( == DISPATCH_LEVEL );
		mi::unmap_page_in_hyper_space_worker( ptr, 0x11 /*no irql change*/, 0 );
	}
	RINLINE void unmap_hyperspace( const std::pair<any_ptr, uint8_t>& value )
	{
		// Unmap page, lower to previous IRQL.
		//
		CHECK_IRQL( == DISPATCH_LEVEL );
		mi::unmap_page_in_hyper_space_worker( value.first.address, value.second, 0 );
		ia32::set_irql( value.second );
	}

	// Image details.
	//
	FORCE_INLINE ldr::km::data_table_entry_t* lookup_image( any_ptr ptr )
	{
		return mi::lookup_data_table_entry( ptr, 2 );
	}
	FORCE_INLINE bool session_has_image( any_ptr img_base )
	{
		return mi::session_lookup_image( img_base );
	}
	
	// Session details.
	//
	nt::eprocess_t* get_session_leader( mm::session_space_t* session )
	{
		for ( auto it = session->process_list.flink; it != &session->process_list; it = it->flink )
		{
			nt::eprocess_t* proc = xstd::ptr_at( it, -SDK_OFFSET( nt::eprocess_t, session_process_links ) );
			if ( proc->address_space_initialized )
				return proc;
		}
		return {};
	}
	bool attach_session( nt::eprocess_t* leader, nt::kapc_state_t* state )
	{
		if ( !leader )
			return false;
		return nt::status( mm::attach_session( leader, state ) ).is_success();
	}
	void detach_session( nt::eprocess_t* leader, nt::kapc_state_t* state ) 
	{
		if ( leader )
			mm::detach_session( leader, state );
	}

	// Global list of MDLs holding drivers in place.
	//
	static xstd::xspinlock<APC_LEVEL> g_image_mdls_lock = {};
	static std::unordered_map<void*, nt::mdl_t*, xstd::hasher<>> g_image_mdls;

	// Locks an image into memory.
	//
	bool lock_image( ldr::km::data_table_entry_t* img )
	{
		if ( !is_driver_address( img->dll_base ) ) {
			return false;
		}

		// Acquire the mutex, skip if already locked.
		//
		std::lock_guard _g{ g_image_mdls_lock };
		auto [it, inserted] = g_image_mdls.emplace( img->dll_base, nullptr );
		if ( !inserted ) {
			return false;
		}

		// Range-lock helper.
		//
		auto& first_mdl = it->second;
		nt::mdl_t* last_mdl = nullptr;
		auto lock_single_page = [ & ] ( any_ptr va ) {
			nt::mdl_t* mdl = io::allocate_mdl( va, 0x1000, false, false, nullptr );
			if ( !mdl ) ke::bug_check( 0x7d );
			
			ntpp::call_dpc( [ ] {} );
			auto pte = get_pte( va );
			mi::lock_code( img, pte, pte, 2 );
			mm::probe_and_lock_pages( mdl, 0, nt::lock_operation_t::read_access );
			mi::lock_code( img, pte, pte, 2 );

			{
				auto mpfn = lookup_pfn( get_pfn( va ) );
				ntpp::unique_lock _g{ mpfn };
				mpfn->reference_count += 12;
				*( uint64_t* ) ( mpfn ) |= 1;
			}

			if ( last_mdl ) {
				last_mdl->next = mdl;
			} else {
				first_mdl = mdl;
			}
			last_mdl = mdl;
		};

		// Lock the header.
		//
		lock_single_page( img->dll_base );

		// Enumerate sections:
		//
		auto* nt_hdrs = ( ( win::image_x64_t* ) img->dll_base )->get_nt_headers();
		for ( size_t n = 0; n != nt_hdrs->file_header.num_sections; n++ ) {
			// If non-discarded section:
			//
			auto scn = nt_hdrs->get_section( n );
			any_ptr begin = xstd::ptr_at( img->dll_base, scn->virtual_address );
			any_ptr end = begin + scn->virtual_size;
			if ( !scn->is_discardable() ) {
				// Lock the range.
				//
				begin = xstd::align_down( begin, 0x1000 );
				end =   xstd::align_down( end + 0xFFF, 0x1000 );
				for ( auto it = begin; it < end; it += 0x1000 )
					lock_single_page( it );
			}
		}
		return true;
	}
	bool unlock_image( ldr::km::data_table_entry_t* img ) 
	{
		if ( !is_driver_address( img->dll_base ) ) {
			return false;
		}

		// Acquire the mutex and find the entry.
		//
		std::lock_guard _g{ g_image_mdls_lock };
		auto it = g_image_mdls.find( img->dll_base );
		if ( it == g_image_mdls.end() ) return false;

		// Unlock all mdls.
		//
		for ( auto mdl = it->second; mdl; ) {
			auto next = std::exchange( mdl->next, nullptr );
			{
				auto mpfn = lookup_pfn( get_pfn( mdl->start_va ) );
				ntpp::unique_lock _g{ mpfn };
				mpfn->reference_count -= 12;
			}
			mm::unlock_pages( mdl );
			io::free_mdl( mdl );
			mdl = next;
		}

		// Erase the entry and return.
		//
		g_image_mdls.erase( it );
		return true;
	}

	// Finds an attaches to the first session where the VA is valid.
	//
	nt::eprocess_t* enter_session_for( any_ptr virtual_address, nt::kapc_state_t* apc_state )
	{
		// Skip if not session address or if above APC_LEVEL.
		//
		if ( ia32::get_effective_irql() > APC_LEVEL || !is_session_address( virtual_address ) )
			return nullptr;

		// Skip if session already contains the image.
		//
		if ( session_has_image( virtual_address ) )
			return nullptr;


		// Find the appropriate session and attach.
		//
		nt::eprocess_t* proc_found = nullptr;
		for ( auto&& proc : ntpp::session_list{} )
		{
			// Attach to session.
			//
			if ( !attach_session( proc, apc_state ) )
				continue;

			// If session has this image, declare found, else detach.
			//
			if ( session_has_image( virtual_address ) )
			{
				proc_found = proc;
				break;
			}
			detach_session( proc, apc_state );
		}

		fassert( proc_found );
		return proc_found;
	}

	// MDL internals.
	//
	FORCE_INLINE std::span<uint64_t> pfn_array( nt::mdl_t* mdl ) {
		size_t page_count = mdl->byte_count >> 12;
		page_count += ( ( mdl->byte_offset & 0xFFF ) + ( mdl->byte_count & 0xFFF ) + 0xFFF ) >> 12;
		return { (uint64_t*) std::next( mdl ), page_count };
	}
	bool copy_locked_mdl( any_ptr dst, nt::mdl_t* mdl, size_t length, size_t offset, bool swap )
	{
		// First of all, verify the range.
		//
		if ( mdl->byte_count < ( length + offset ) ) [[unlikely]]
			return false;

		// If MDL is already mapped to system memory, issue a memcpy.
		//
		if ( mdl->mdl_flags & ( MDL_SOURCE_IS_NONPAGED_POOL | MDL_MAPPED_TO_SYSTEM_VA ) )
		{
			any_ptr src = mdl->mapped_system_va;
			if ( !src ) [[unlikely]]
				return false;

			if ( swap ) {
				memcpy( src + offset, dst, length );
			} else {
				memcpy( dst, src + offset, length );
			}
			return true;
		}

		// Combine the offset with the internal byte offset.
		//
		offset += mdl->byte_offset;

		// PFN list is right after the MDL itself, apply whole page offsets immediately.
		//
		auto pfn_it = &pfn_array( mdl )[ offset >> 12 ];
		offset &= 0xFFF;

		// Until we copy everything:
		//
		while ( length != 0 )
		{
			// Fail if the PFN is invalid.
			//
			size_t pfn = *pfn_it++;
			if ( pfn > max_pfn() ) [[unlikely]]
				return false;

			// Determine the copy length and execute it.
			//
			size_t copy_length = std::min( length, 0x1000ull - offset );
			if ( swap ) {
				memcpy( phys_ptr<>{ ( pfn << 12 ) | offset }, dst, copy_length );
			} else {
				memcpy( dst, phys_ptr<>{ ( pfn << 12 ) | offset }, copy_length );
			}

			// Clear the offset, move the iterators.
			//
			dst += copy_length;
			length -= copy_length;
			offset = 0;
		}
		return true;
	}
	NO_INLINE bool copy_locked_mdl_chain( any_ptr dst, nt::mdl_t* mdl, size_t length, size_t offset, bool swap )
	{
		// While there's bytes to copy left:
		//
		for ( ; length; mdl = mdl->next )
		{
			// If we reached the end without finishing the copy, fail.
			//
			if ( !mdl ) [[unlikely]]
				return false;

			// If we're skipping the whole MDL, continue.
			//
			size_t mdl_len = mdl->byte_count;
			if ( offset >= mdl_len )
			{
				offset -= mdl_len;
				continue;
			}

			// Determine the copy length and execute it.
			//
			size_t copy_length = std::min( length, mdl_len - offset );
			if ( !copy_locked_mdl( dst, mdl, length, offset, swap ) ) [[unlikely]]
				return false;

			// Clear the offset, move the iterators.
			//
			dst += copy_length;
			length -= copy_length;
			offset = 0;
		}
		return true;
	}

	// Debug utils.
	//
	const char* va_name_px( any_ptr address ) {
		if constexpr ( is_debug_build() ) {
			if ( mem::px_index( address ) == mem::self_ref_index() ) {
				return "PTE";
			} else {
				switch ( mem::lookup_va_type( address ) ) {              
					case mi::system_va_type_t::session_space:
						return "Session space";
					case mi::system_va_type_t::process_space:
						return "Process space";
					case mi::system_va_type_t::non_paged_pool:
						return "Non paged pool";
					case mi::system_va_type_t::paged_pool:
						return "Paged pool";
					case mi::system_va_type_t::special_pool_paged:
						return "Special paged pool";
					case mi::system_va_type_t::special_pool_non_paged:
						return "Special non paged pool";
					case mi::system_va_type_t::driver_images:
						return "Driver image";
					case mi::system_va_type_t::kernel_stacks:
						return "Kernel stack";
					case mi::system_va_type_t::kernel_shadow_stacks:
						return "Kernel shadow stacks";
					case mi::system_va_type_t::pfn_database:
						return "PFN database";
					case mi::system_va_type_t::system_ptes:
						return "SPTE";
					case mi::system_va_type_t::hal:
						return "HAL";
					case mi::system_va_type_t::boot_loaded:
						return "Boot loaded";
					case mi::system_va_type_t::system_cache:
						return "System cache";
					case mi::system_va_type_t::kasan:
						return "KASAN";
					case mi::system_va_type_t::session_global_space:
						return "Session global space";
					case mi::system_va_type_t::secure_non_paged_pool:
						return "Secure non paged pool";
					default:
						return "Unknown";
				}
			}
		}
		return "";
	}
	std::string pa_name( uint64_t pa, int recursive ) {
		if constexpr ( is_debug_build() ) {
			// Calculate the VA.
			//
			uint64_t va = 0;
			if ( is_physical_address_valid( pa ) ) {
				// Is this our memory?
				//
				if ( auto info = iso::try_resolve( pa >> 12 ) ) {
					va = info->mapping_va;
					switch ( info->type ) {
						case iso::pfn_type::phys_image:
							return xstd::fmt::str( "Selene (%llx)", va );
						case iso::pfn_type::phys_component_image:
							return xstd::fmt::str( "Component (%llx)", va );
						case iso::pfn_type::phys_clone:
							return xstd::fmt::str( "MirrorClone (%llx)", va );
						case iso::pfn_type::phys_page_table:
							return xstd::fmt::str( "MirrorPT (%llx)", va );
						case iso::pfn_type::phys_pool:
							return xstd::fmt::str( "PhysPool (%llx)", va );
						case iso::pfn_type::phys_vmcs:
							return xstd::fmt::str( "VMM-VMCS (%llx)", va );
						case iso::pfn_type::phys_isr:
							return xstd::fmt::str( "VMM-ISR (%llx)", va );
						case iso::pfn_type::indep_pool:
						case iso::pfn_type::indep_pool_small:
							return xstd::fmt::str( "IndepPool (%llx)", va );
						case iso::pfn_type::indep_sstack:
							return xstd::fmt::str( "ShadowStack (%llx)", va );
						default:
							break;
					}
				} else {
					va = get_virtual_address( pa );
				}
			}
			bool no_va = va || va == pte_to_va( ( void* ) ( uint64_t ) -8ll );

			// If valid kernel VA:
			//
			if ( !no_va && va > km_va_start ) {
				if ( ( ke::km_user_shared_data_va <= va && va <= ( ke::km_user_shared_data_va + 0x2000 ) ) ||
					  ( ke::um_user_shared_data_va <= va && va <= ( ke::um_user_shared_data_va + 0x2000 ) ) ) {
					return xstd::fmt::str( "ushared[%llx]", va - ke::km_user_shared_data_va );
				} else if ( mem::is_driver_address( va ) ) {
					const char* fmt = "%s!%llx";
					if ( auto p = hook::lookup_pair_pfn( pa >> 12 ) ) {
						fmt = p->second ? "%s!%llx (S)" : "%s!%llx (R)";
					}
					if ( ntpp::ntoskrnl_range.contains( va ) ) {
						return xstd::fmt::str( fmt, "nt", va - ntpp::ntoskrnl_range.first );
					} else if ( auto entry = su::find_driver( va ) ) {
						return xstd::fmt::str( fmt, entry->info.file_name.c_str(), va - entry->mgx.base_address );
					}
				}
			}

			// If no recursion because invalid mapping, return empty if recursive call so VA is forced to resolve instead.
			//
			if ( no_va ) {
				// Use VA name.
				if ( recursive ) return {};
			} 
			// Otherwise if we did not reach the recursion limit, call VA handler, propagate if non-empty.
			//
			else if ( recursive < 5 ) {
				auto res = va_name( va, recursive + 1 );
				if ( !res.empty() ) return res;
			}
			return xstd::fmt::str( "Phys-%llx", pa );
		}
		return {};
	}
	std::string va_name( any_ptr va, int recursive ) {
		if constexpr ( is_debug_build() ) {
			// PTE?
			//
			auto [pva, pdepth] = rlookup_pte( va );
			if ( pdepth >= 0 ) {
				const char* n;
				switch ( pdepth ) {
					case pte_level:   n = "pte"; break;
					case pde_level:   n = "pde"; break;
					case pdpte_level: n = "pdpte"; break;
					case pml4e_level: n = "pml4e"; break;
				}
				return xstd::fmt::str( "%s{%s}", n, va_name( pva, recursive + 1 ) );
			}

			// Calculate the PA.
			//
			uint64_t pa = get_physical_address( va );
			bool no_pa = !pa || !is_physical_address_valid( pa );

			// Is this our memory?
			//
			if ( !no_pa ) {
				if ( auto info = iso::try_resolve( pa >> 12 ) ) {
					switch ( info->type ) {
						case iso::pfn_type::phys_image:
							return xstd::fmt::str( "Selene (%llx)", va );
						case iso::pfn_type::phys_component_image:
							return xstd::fmt::str( "Component (%llx)", va );
						case iso::pfn_type::phys_clone:
							return xstd::fmt::str( "MirrorClone (%llx)", va );
						case iso::pfn_type::phys_page_table:
							return xstd::fmt::str( "MirrorPT (%llx)", va );
						case iso::pfn_type::phys_pool:
							return xstd::fmt::str( "PhysPool (%llx)", va );
						case iso::pfn_type::phys_vmcs:
							return xstd::fmt::str( "VMM-VMCS (%llx)", va );
						case iso::pfn_type::phys_isr:
							return xstd::fmt::str( "VMM-ISR (%llx)", va );
						case iso::pfn_type::indep_pool:
						case iso::pfn_type::indep_pool_small:
							return xstd::fmt::str( "IndepPool (%llx)", va );
						case iso::pfn_type::indep_sstack:
							return xstd::fmt::str( "ShadowStack (%llx)", va );
						default:
							break;
					}
				}
			}

			// Physical memory identity mapping:
			//
			if ( mem::get_phys_base() <= va && va <= ( mem::get_phys_base() + ( mem::max_pfn() << 12 ) ) ) {
				if ( recursive < 5 ) {
					auto name = pa_name( va - mem::get_phys_base(), recursive + 1 );
					if ( !name.empty() )
						return "idphys->" + name;
				}
				return xstd::fmt::str( "idphys[%llx]", va - mem::get_phys_base() );
			}
			
			// Special VA ranges:
			//
			if ( ke::km_user_shared_data_va <= va && va <= ( ke::km_user_shared_data_va + 0x2000 ) ) {
				return xstd::fmt::str( "ushared_km[%llx]", va - ke::km_user_shared_data_va );
			} else if ( ke::um_user_shared_data_va <= va && va <= ( ke::um_user_shared_data_va + 0x2000 ) ) {
				return xstd::fmt::str( "ushared_um[%llx]", va - ke::um_user_shared_data_va );
			} else if ( mem::is_driver_address( va ) ) {
				if ( ntpp::ntoskrnl_range.contains( va ) ) {
					return xstd::fmt::str( "nt!%llx", va - ntpp::ntoskrnl_range.first );
				} else if ( auto entry = su::find_driver( va ) ) {
					return xstd::fmt::str( "%s!%llx", entry->info.file_name, va - entry->mgx.base_address );
				}
			}

			// If no recursion because invalid mapping, return empty if recursive call so PA is forced to resolve instead.
			//
			if ( no_pa ) {
				// Use PA name.
				if ( recursive ) return {};
			}
			// Otherwise if we did not reach the recursion limit, call PA handler, propagate if non-empty.
			//
			else if ( recursive < 5 ) {
				auto res = pa_name( va, recursive + 1 );
				if ( !res.empty() ) return res;
			}
			return xstd::fmt::str( "%llx (%s)", va, va_name_px( va ) );
		}
		return {};
	}
};