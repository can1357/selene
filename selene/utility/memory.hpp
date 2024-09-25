#pragma once
#include <ia32.hpp>
#include <xstd/intrinsics.hpp>
#include <xstd/type_helpers.hpp>
#include <sdk/mi/visible_state_t.hpp>
#include <sdk/mi/system_va_type_t.hpp>
#include <sdk/mi/pfn_cache_attribute_t.hpp>
#include <sdk/nt/mmpfn_t.hpp>
#include <sdk/nt/physical_memory_descriptor_t.hpp>
#include <sdk/ldr/km/data_table_entry_t.hpp>
#include <ntpp.hpp>
#include <ia32/memory.hpp>

#pragma clang attribute push (__no_instrument, apply_to = function)

namespace mem
{
	using namespace ia32::mem;

	// Constant properties.
	//
	CONST_FN inline mi::visible_state_t& get_visible_state()
	{
		return *( mi::visible_state_t* ) __builtin_fetch_dynamic( "@.mistate" );
	}
	CONST_FN inline nt::physical_memory_descriptor_t* get_phys_mem_desc()
	{
		return ( nt::physical_memory_descriptor_t* ) __builtin_fetch_dynamic( "@.pmemdesc" );
	}
	CONST_FN inline nt::mmpfn_t* lookup_pfn( uint64_t pfn )
	{
		return pfn + ( nt::mmpfn_t* ) __builtin_fetch_dynamic( "@.pfndb" );
	}

	// VA flags.
	//
	enum va_flags : uint16_t
	{
		va_none =      0,
		
		// Image regions.
		//
		va_driver =    1 << 0,  // => driver_images
		va_image =     1 << 1,  // => driver_images | session_space
		
		// Special regions.
		//
		va_self_ref =  1 << 2,  // => self_ref_idx
		va_stack =     1 << 3,  // => kernel_stacks | kernel_shadow_stacks
		va_pfn_db =    1 << 4,  // => pfn_database
		va_pool =      1 << 5,  // => paged_pool | non_paged_pool | special_pool_paged | special_pool_non_paged | secure_non_paged_pool
		va_ushared =   1 << 6,  // *kuser_shared_data
		va_hal =       1 << 7,  // => hal | system_cache
		va_boot =      1 << 8,  // => boot_loaded
		va_syspte =    1 << 9,  // => system_ptes
		va_system =    1 << 10, // => *

		// Transient regions.
		//
		va_session =   1 << 11, // => session_space | session_global_space
		va_process =   1 << 12, // => < 256 | process_space
		va_user =      1 << 13, // => < 256

		// Paged bit.
		//
		va_paged =     1 << 14,
	};
	inline std::array<uint8_t, 512> system_va_types = { 0 };
	inline std::underlying_type_t<va_flags> pxi_flags[ 512 ] = { 0 };

	// Memcpy without write protection, address range must be locked for src.
	//
	void copy_nwp( any_ptr dst, any_ptr src, size_t n );

	// PTE details.
	//
	bool is_copy_on_write( ia32::pt_entry_64* pte );
	bool set_copy_on_write( ia32::pt_entry_64* pte, bool value );
	ia32::pt_entry_64 set_copy_on_write( ia32::pt_entry_64 pte, bool value );

	// Physical address properties.
	//
	bool is_physical_address_valid( uint64_t physical_address, bool strict = false );

	// Simpler wrappers around the VA type array.
	//
	CONST_FN inline va_flags get_pxi_flags( uint32_t pxi )
	{ 
		if ( xstd::const_condition( pxi < 256 ) )
			return va_flags( va_user | va_process | va_paged );
		else
			return ( va_flags ) pxi_flags[ pxi ]; 
	}
	CONST_FN inline mi::system_va_type_t get_pxi_type( uint32_t pxi ) { return ( mi::system_va_type_t ) system_va_types[ pxi ]; }
	CONST_FN inline mi::system_va_type_t lookup_va_type( any_ptr ptr ) { return get_pxi_type( px_index( ptr ) ); }
	CONST_FN inline va_flags lookup_va_flags( any_ptr ptr ) { return get_pxi_flags( px_index( ptr ) ); }
	CONST_FN inline bool is_pool_address( any_ptr ptr ) { return lookup_va_flags( ptr ) & va_pool; }
	CONST_FN inline bool is_stack_address( any_ptr ptr ) { return lookup_va_flags( ptr ) & va_stack; }
	CONST_FN inline bool is_image_address( any_ptr ptr ) { return lookup_va_flags( ptr ) & va_image; }
	CONST_FN inline bool is_session_address( any_ptr ptr ) { return lookup_va_flags( ptr ) & va_session; }
	CONST_FN inline bool is_driver_address( any_ptr ptr )
	{
		uint64_t difference = uint64_t( ia32::get_ip() ) ^ ptr;
		difference >>= ( 12 + 9 * pxe_level );
		return !difference;
		//return lookup_va_flags( ptr ) & va_driver;
	}
	CONST_FN inline uint64_t get_driver_px() 
	{ 
		return ( uint64_t( ia32::get_ip() ) >> ( 12 + 9 * pxe_level ) ) & 511; 
	}

	// Physical to virtual translation.
	//
	inline any_ptr get_virtual_address( uint64_t physical_address )
	{
		uint64_t ptea = xstd::ref_at<uint64_t>( lookup_pfn( physical_address >> 12 ), 0x8 /*.pte_address*/ );
		uint64_t base = pte_to_va( ( void* ) ( ptea | ( 1ull << 63 ) ) );
		return base | ( physical_address & 0xFFF );
	}

	// Internal details.
	//
	void set_immune_pointer( any_ptr p );

	// Virtual page faults.
	//
	nt::result<> virtual_fault( any_ptr address, ia32::page_fault_exception error = { .flags = 0 } );

	// With interrupts disabled, looks up a PTE and invokes virtual fault if it does not exist in a loop until we can get a hard PTE.
	// - Must be called with interrupts disabled, but should be enable ready.
	//
	std::pair<ia32::pt_entry_64, int8_t> establish_pte( any_ptr address, ia32::page_fault_exception error = { .flags = 0 } );

	// Page locking and unlocking.
	//
	bool lock_page( uint64_t pfn );
	void unlock_page( uint64_t pfn );
	bool is_pagable( uint64_t pfn );

	// Independent memory allocation / deallocation.
	//
	any_ptr allocate_independent( size_t length );
	void free_independent( any_ptr ptr, size_t length );

	// Physical memory allocation via a MDL, optionally contigious.
	//
	nt::mdl_t*  allocate_physical_for_mdl( uint32_t flags, size_t page_count, uint64_t max_pfn = 0xFFFFFFFFF, nt::memory_caching_type_t cattr = nt::memory_caching_type_t::cached );
	void        free_physical_mdl( nt::mdl_t* mdl, bool deallocate = true );
	// Frees the MDL but keeps the memory forever.
	inline void make_physical_mdl_resident( nt::mdl_t* mdl ) { return free_physical_mdl( mdl, false ); }

	// Physical memory allocation / deallocation.
	//
	uint64_t allocate_physical_resident( size_t page_count, std::initializer_list<uint64_t> max_pfn = { 0xFFFFFFFFF }, nt::memory_caching_type_t cattr = nt::memory_caching_type_t::cached );
	uint64_t allocate_physical( size_t page_count, uint64_t max_pfn = 0xFFFFFFFFF, mi::pfn_cache_attribute_t cattr = mi::pfn_cache_attribute_t::cached );
	void free_physical( uint64_t pfn, size_t length );

	// Virtual address range allocation / deallocation, 2MB granularity.
	//
	any_ptr reserve_system_va( size_t length, mi::system_va_type_t type, bool use_ptes = false );
	void return_system_va( any_ptr ptr, size_t length, mi::system_va_type_t type );

	// Combined helpers.
	//
	nt::mdl_t* allocate_component_memory( size_t num_pages, mi::system_va_type_t type = mi::system_va_type_t::driver_images );
	void return_component_memory( nt::mdl_t* mdl, size_t num_pages, mi::system_va_type_t type = mi::system_va_type_t::driver_images );

	// Virtual address range allocation / deallocation, no VA type specified, 4KB granularity.
	//
	any_ptr reserve_system_va( size_t length );
	void return_system_va( any_ptr ptr, size_t length );

	// Hyperspace helpers.
	//
	any_ptr map_hyperspace_at_dpc_level( uint64_t pfn );
	std::pair<any_ptr, uint8_t> map_hyperspace( uint64_t pfn );
	void unmap_hyperspace( any_ptr ptr );
	void unmap_hyperspace( const std::pair<any_ptr, uint8_t>& value );

	// Image details.
	//
	ldr::km::data_table_entry_t* lookup_image( any_ptr ptr );
	bool session_has_image( any_ptr img_base );

	// Session details.
	//
	nt::eprocess_t* get_session_leader( mm::session_space_t* session );
	bool attach_session( nt::eprocess_t* leader, nt::kapc_state_t* state );
	void detach_session( nt::eprocess_t* leader, nt::kapc_state_t* state );

	// Locks or unlocks an image in memory.
	//
	bool lock_image( ldr::km::data_table_entry_t* img );
	bool unlock_image( ldr::km::data_table_entry_t* img );

	// Finds an attaches to the first session where the VA is valid.
	//
	nt::eprocess_t* enter_session_for( any_ptr virtual_address, nt::kapc_state_t* apc_state );

	// MDL internals.
	//
	std::span<uint64_t> pfn_array( nt::mdl_t* mdl );
	bool copy_locked_mdl( any_ptr dst, nt::mdl_t* mdl, size_t length, size_t offset = 0, bool swap = false );
	bool copy_locked_mdl_chain( any_ptr dst, nt::mdl_t* mdl, size_t length, size_t offset = 0, bool swap = false );

	// Debug utils.
	//
	const char* va_name_px( any_ptr address );
	std::string pa_name( uint64_t pa, int recursive = false );
	std::string va_name( any_ptr va, int recursive = false );
};

#pragma clang attribute pop