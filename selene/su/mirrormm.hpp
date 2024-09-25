#pragma once
#include <sdk/nt/mdl_t.hpp>
#include <sdk/nt/irp_t.hpp>
#include <sdk/nt/mode_t.hpp>
#include <sdk/nt/lock_operation_t.hpp>
#include <sdk/nt/physical_memory_range_t.hpp>
#include <ntpp.hpp>
#include <ia32/memory.hpp>
#include <xstd/result.hpp>

// Forward PLDP.
//
namespace su::plpd {
	struct alignas( 0x1000 ) memory;
};

// Implements a "fake" Mm interface interchangable with NT API, that can be used to isolate host memory state.
//
namespace su::mmm
{
	// PTE secret stored in ignored_2, 0 if disabled.
	//
	static constexpr uint8_t pte_secret = 0;

	// Primitives for generic use.
	//
	void read_physical( any_ptr dst, uint64_t phys_src, size_t count, plpd::memory* mem = nullptr );
	void write_physical( uint64_t phys_dst, any_ptr src, size_t count, plpd::memory* mem = nullptr );
	ia32::mem::vm_result read_virtual( any_ptr dst, any_ptr guest_src, size_t count, uint16_t vop_flags, plpd::memory* mem = nullptr );
	ia32::mem::vm_result write_virtual( any_ptr guest_dst, any_ptr src, size_t count, uint16_t vop_flags, plpd::memory* mem = nullptr );
	bool should_handle_va( any_ptr va, size_t count );
	bool should_handle_pa( uint64_t pa, size_t count );

	// NT Mdl API.
	//
	nt::mdl_t* __cdecl allocate_mdl( any_ptr va, size_t size, bool secondary_buffer, bool charge_quota, nt::irp_t* irp );
	void __cdecl build_mdl_for_non_paged_pool( nt::mdl_t* mdl );
	void __cdecl probe_and_lock_pages( nt::mdl_t* mdl, nt::mode_t access_mode, nt::lock_operation_t operation );
	int32_t __cdecl protect_mdl_system_address( nt::mdl_t* mdl, uint32_t protect );
	void __cdecl free_mdl( nt::mdl_t* mdl );
	any_ptr __cdecl map_locked_pages_specify_cache( nt::mdl_t* mdl, nt::mode_t access_mode, nt::memory_caching_type_t cache_type, any_ptr address, bool bugcheck_on_failure, uint32_t priority );

	// Misc. NT API.
	//
	uint64_t __cdecl get_physical_address( any_ptr address );
	bool __cdecl is_address_valid( any_ptr address );
	int32_t __cdecl mm_copy_memory( any_ptr dst, uint64_t src, size_t size, uint32_t flags, size_t* psize );
	int32_t __cdecl mm_copy_virtual_memory( nt::eprocess_t* src, any_ptr src_ptr, nt::eprocess_t* dst, any_ptr dst_ptr, size_t size, nt::mode_t previous_mode, size_t* psize );
	void* __cdecl map_io_space_ex( uint64_t physical_address, size_t size, uint32_t protect );
	void* __cdecl map_io_space( uint64_t physical_address, size_t size, nt::memory_caching_type_t cache_type );
	void __cdecl unmap_io_space( any_ptr ptr, size_t size );
}