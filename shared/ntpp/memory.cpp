#if !__private_binary__ && not defined(NO_NTPP)
#include "memory.hpp"

namespace ntpp
{
	// User-mode memory API.
	//
	nt::result<void*> allocate_memory( void* address, size_t size, uint32_t protection, uint32_t allocation_type, void* process )
	{
		scope_mode _p{};

		nt::result<void*> result = {};
		result.status = os::allocate_virtual_memory(
			process,
			&result.result.emplace( address ),
			0,
			&size,
			allocation_type,
			protection
		);
		return result;
	}
	nt::result<> deallocate_memory( void* address, size_t size, uint32_t deallocation_type, void* process )
	{
		scope_mode _p{};
		return ( nt::status ) os::free_virtual_memory(
			process,
			&address,
			&size,
			deallocation_type
		);
	}
#if KERNEL_TARGET
	nt::result<uint32_t> protect_memory( any_ptr& address, size_t& size, uint32_t protection, void* process )
	{
		nt::result<uint32_t> prev;
		ntpp::ref<nt::eprocess_t> ref;
		nt::eprocess_t* prc;
		if ( process == ob::current_process() ) {
			prc = ke::get_eprocess();
		} else {
			ref = resolve_handle<nt::eprocess_t>( process );
			if ( !ref ) return nt::status{ STATUS_INVALID_HANDLE };
			prc = ref.get();
		}
		prev.status = mm::protect_virtual_memory( prc, prc, &address, &size, protection, &prev.result.emplace() );
		return prev;
	}
#else
	nt::result<uint32_t> protect_memory( any_ptr& address, size_t& size, uint32_t protection, void* process )
	{
		nt::result<uint32_t> prev;
		scope_mode _p{};
		prev.status = os::protect_virtual_memory(
			process,
			( void** ) &address,
			&size,
			protection,
			&prev.result.emplace()
		);
		return prev;
	}
#endif
	nt::result<> lock_memory( const void* address, size_t size, uint32_t type, void* process )
	{
		scope_mode _p{};
		return ( nt::status ) os::lock_virtual_memory( process, (void**)&address, &size, type );
	}
	nt::result<> unlock_memory( const void* address, size_t size, uint32_t type, void* process )
	{
		scope_mode _p{};
		return ( nt::status ) os::unlock_virtual_memory( process, (void**)&address, &size, type );
	}
	nt::result<size_t> read_memory( void* handle, void* dst, const void* src, size_t n )
	{
		scope_mode _p{};

		nt::result<size_t> prev;
		prev.status = os::read_virtual_memory( handle, ( void* ) src, dst, n, &prev.result.emplace( n ) );
		return prev;
	}
	nt::result<size_t> write_memory( void* handle, void* dst, const void* src, size_t n )
	{
		scope_mode _p{};

		nt::result<size_t> prev;
		prev.status = os::write_virtual_memory( handle, dst, ( void* ) src, n, &prev.result.emplace( n ) );
		return prev;
	}

	// User-mode section API.
	//
	nt::result<unique_handle> open_section( const nt::unicode_view& name, uint32_t access_mask )
	{
		scope_mode _p{};

		nt::object_attributes_t attributes = {};
		attributes.length = sizeof( nt::object_attributes_t );
		attributes.object_name = ( nt::unicode_view* ) &name;
		attributes.attributes = OBJ_CASE_INSENSITIVE | default_attributes;

		nt::result<unique_handle> result;
		result.status = os::open_section(
			&result.result.emplace().handle,
			access_mask,
			&attributes
		);
		return result;
	}
	nt::result<unique_handle> create_section( void* file_handle, uint32_t page_prot, uint32_t alloc_attrib, uint32_t section_access )
	{
		scope_mode _p{};
		nt::result<unique_handle> result;

		nt::object_attributes_t attributes = {};
		attributes.length = sizeof( nt::object_attributes_t );
		attributes.attributes = default_attributes;

		result.status = os::create_section(
			&result.result.emplace().handle,
			SECTION_QUERY | section_access,
			&attributes,
			nullptr,
			page_prot,
			alloc_attrib,
			file_handle
		);
		return result;
	}
	nt::result<> map_section( map_section_args& args )
	{
		scope_mode _p{};
		return ( nt::status ) os::map_view_of_section(
			args.section_handle,
			args.process_handle,
			&args.address,
			0,
			0,
			&args.view_offset,
			&args.view_size,
			args.inherit,
			args.allocation_type,
			args.protection
		);
	}
	nt::result<> unmap_section( void* base, void* process )
	{
		scope_mode _p{};
		return ( nt::status ) os::unmap_view_of_section( process, base );
	}

	// User-mode triage API.
	//
	nt::result<std::unique_ptr<nt::memory_dump64_t>> create_triage_dump()
	{
		// Describe the requested dump, only thread dumped is this one.
		//
		scope_mode _p{};
		win::sysdbg_triage_dump_t triage = {};
		auto self = ntpp::open_thread( ntpp::get_client_id().unique_thread );
		triage.handles = &self->handle;
		triage.thread_handles = 1;

		// Request the dump.
		//
		std::unique_ptr<nt::memory_dump64_t> triage_dump{ ( nt::memory_dump64_t* ) new uint8_t[ 1_mb ] };
		uint32_t out_size = 0;
		auto triage_status = ( nt::status ) os::system_debug_control(
			win::sysdbg_command_t::get_triage_dump,
			&triage,
			sizeof( triage ),
			triage_dump.get(),
			1_mb,
			&out_size
		);

		// If there was an error, free the allocation.
		//
		if ( !triage_status.is_success() )
			triage_dump.reset();
		return { std::move( triage_dump ), triage_status };
	}

#if KERNEL_TARGET
	// Kernel-mode section utilities.
	//
	nt::control_area_t* section_control_area( nt::section_t* scn )
	{
		any_ptr ptr = ( ( any_ptr ) scn->file_object ) & ~3;
		nt::file_object_t* fo = ptr;

		if ( scn->remote_image_file_object )
			return ( nt::control_area_t* ) fo->section_object_pointer->image_section_object;
		if ( scn->remote_data_file_object )
			return ( nt::control_area_t* ) fo->section_object_pointer->data_section_object;
		else
			return ptr;
	}
	ref<nt::file_object_t> reference_control_area_file( nt::control_area_t* ctl )
	{
		nt::file_object_t* fo = any_ptr{ ctl->file_pointer.value & ~0xF };
		if ( reference_object_s( fo ) )
			return { fo, true };
		return {};
	}

	// VAD binary search.
	//
	nt::mmvad_t* find_vad_lower_bound( nt::mmvad_t* it, any_ptr va )
	{
		uint64_t vpn = va >> 12;
		nt::mmvad_t* result = nullptr;
		while ( it )
		{
			// VAD is not greater or equal to our target VPN, go higher.
			//
			uint64_t svpn = vad_base_vpn( it );
			if ( svpn < vpn )
			{
				it = ( nt::mmvad_t* ) it->core.vad_node.right;
				continue;
			}

			// Otherwise, try to get as low as possible.
			//
			result = it;
			it = ( nt::mmvad_t* ) it->core.vad_node.left;
		}
		return result;
	}
	nt::mmvad_t* find_vad( nt::mmvad_t* it, any_ptr va )
	{
		uint64_t vpn = va >> 12;
		while ( it )
		{
			// Handle binary search.
			//
			uint64_t evpn = vad_limit_vpn( it );
			if ( vpn > evpn )
			{
				it = ( nt::mmvad_t* ) it->core.vad_node.right;
				continue;
			}
			uint64_t svpn = vad_base_vpn( it );
			if ( vpn < svpn )
			{
				it = ( nt::mmvad_t* ) it->core.vad_node.left;
				continue;
			}

			// Break since we found the entry.
			// -> svpn <= vpn && vpn <= evpn
			//
			break;
		}
		return it;
	}
#endif
};
#endif