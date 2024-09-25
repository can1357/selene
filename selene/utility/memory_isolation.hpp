#pragma once
#include <xstd/type_helpers.hpp>

// Implements page isolation between Selene and Ntoskrnl.
//
namespace mem::iso
{
	// Page descriptor containing various information about an allocation.
	//
	enum class pfn_type : int8_t
	{
		// >= 0
		// Physical allocations:
		//
		phys_image =           0, // 4KB
		phys_component_image = 1, // 4KB
		phys_clone =           2, // *
		phys_page_table =      3, // 4KB
		phys_pool =            4, // 2MB
		phys_vmcs =            5, // 2MB
		phys_isr =             6, // *
		phys_max =             phys_isr,
		
		// < 0
		// Independent page allocations:
		//
		indep_pool =           -1, // 2MB
		indep_pool_small =     -2, // 4KB
		indep_sstack =         -3, // 4KB
		indep_min =            -3,
	};

	// PFN descriptor.
	//
	struct pfn_descriptor
	{
		pfn_type      type;
		any_ptr mapping_va;
		auto tie() { return std::tie( type, mapping_va ); }
	};

	// Traits for PFN types.
	//
	static constexpr bool is_valid( pfn_type type )
	{
		return pfn_type::indep_min <= type && type <= pfn_type::phys_max;
	}
	static constexpr bool is_virtual_alloc( pfn_type type )
	{
		return type < pfn_type( 0 );
	}
	// -- Pool: allocated by new/malloc.
	static constexpr bool is_pool( pfn_type type )
	{
		return type == pfn_type::indep_pool || type == pfn_type::indep_pool_small || type == pfn_type::phys_pool;
	}
	// -- Image: this image or the components.
	static constexpr bool is_image( pfn_type type )
	{
		return type == pfn_type::phys_image || type == pfn_type::phys_component_image;
	}
	// -- Private: under no condition anyone should be allowed to touch.
	static constexpr bool is_private( pfn_type type )
	{
		return is_image( type ) || type == pfn_type::phys_vmcs || type == pfn_type::phys_page_table || type == pfn_type::phys_clone || type == pfn_type::phys_isr;
	}
	// -- Public: host is allowed to touch.
	static constexpr bool is_public( pfn_type type )
	{
		return type == pfn_type::indep_sstack || is_pool( type );
	}
	// -- Restricted: guest is not allowed to touch.
	static constexpr bool is_restricted( pfn_type type )
	{
		return is_private( type ) || is_pool( type );
	}

	// Converts a page owned by the OS to an isolated one; and vice versa.
	// - If the allocation is purely physical, VA can be left null.
	//
	void claim_pfn( uint64_t pfn, any_ptr va, pfn_type type );
	void return_pfn( uint64_t pfn );

	// Range based versions.
	//
	void claim_va( any_ptr ptr, size_t length, pfn_type type );
	void return_va( any_ptr ptr, size_t length );
	void claim_pfns( uint64_t pfn, size_t count, pfn_type type );
	void return_pfns( uint64_t pfn, size_t count );

	// Given a PFN returns whether or not the page is isolated.
	//
	bool is_isolated( uint64_t pfn, bool pre_init = false );

	// Given an isolated PFN, resolves the details of the mapping.
	//
	pfn_descriptor resolve( uint64_t pfn );

	// Given a PFN, if isolated, resolves the details of the mapping.
	//
	std::optional<pfn_descriptor> try_resolve( uint64_t pfn );

	// Given a VA checks whether or not it is a selene image address.
	//
	bool is_isolated_image_va( any_ptr ptr );

	// Initializes memory isolation by converting node allocated pages
	// mapping this driver into isolated pages.
	//
	void init();
}