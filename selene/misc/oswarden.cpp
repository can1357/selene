#include "oswarden.hpp"
#include <sdk/os/api.hpp>
#include <sdk/nt/section_t.hpp>
#include <sdk/mi/api.hpp>
#include <sdk/pop/api.hpp>
#include <sdk/win/file_disposition_information_t.hpp>
#include <sdk/pi/api.hpp>
#include <sdk/rtl/avl_table_t.hpp>
#include <sdk/rtl/api.hpp>
#include <sdk/ci/api.hpp>
#include <sdk/nt/api.hpp>
#include <sdk/dbgk/api.hpp>
#include <ntpp.hpp>
#include <trace/client.hpp>
#include "../utility/thread.hpp"
#include "../utility/memory.hpp"
#include "../hooks/patch_manager.hpp"
#include "../misc/crashdump.hpp"
#include "../hooks/inline_hooks.hpp"

// Validates a PFN for view creation.
//
FORCE_INLINE static bool is_legal_pfn( uint64_t pfn, bool for_km )
{
	// Declare illegal if our pages.
	//
	auto desc = mem::iso::try_resolve( pfn );
	if ( desc && mem::iso::is_private( desc->type ) ) {
		return false;
	}

	// Declare illegal if within PTE space or if a driver address, and caller is in user-mode.
	//
	if ( !for_km ) {
		auto va = mem::get_virtual_address( pfn << 12 );
		return ( mem::lookup_va_flags( va ) & ( mem::va_self_ref | mem::va_driver ) ) == 0;
	}
	return true;
}

// Validates physical address ranges for view creation.
//
FORCE_INLINE static bool is_legal_pa_range( uint64_t pa, uint64_t length, bool for_km )
{
	uint64_t min_pfn = pa >> 12;
	uint64_t max_pfn = ( pa + length + 0xFFF ) >> 12;

	for ( auto it = min_pfn; it < max_pfn; it++ )
		if ( !is_legal_pfn( it, for_km ) )
			return false;
	return true;
}

// NtMapViewOfSection(Ex) hook.
//
alignas( 64 ) static hook::record mi_map_view_of_physical_section_hook;
[[no_instrument]] MS_SSE2AVX static int32_t hk_mi_map_view_of_physical_section(
	void* a1,
	void* a2,
	uint64_t* view_offset,
	uint64_t protection,
	uint64_t a5 )
{
	/*
a1
	dq 0
	dq offset unk_7FFFFFFEFFFF
	dq offset unk_10000
	dq 20000h           <- size
	*/
	uint64_t view_length = xstd::ref_at<uint64_t>( a1, 0x18 );
	if ( !is_legal_pa_range( *view_offset, view_length, false ) ) {
		xstd::warning( "Blocking NtMapViewOfSection(%p, 0x%llx)."_es, *view_offset, view_length );
		return STATUS_CONFLICTING_ADDRESSES;
	}
	[[clang::musttail]] return mi_map_view_of_physical_section_hook.next<decltype( &hk_mi_map_view_of_physical_section )>()( a1, a2, view_offset, protection, a5 );
}

// MmMapIoSpace(Ex) hook.
//
alignas( 64 ) static hook::record mi_map_contiguous_memory_hook;
[[no_instrument]] MS_SSE2AVX static void* hk_mi_map_contiguous_memory(
	uint64_t physical_address,
	size_t number_of_bytes,
	uint64_t protection,
	uint64_t a4 )
{
	if ( a4 == 0 && !is_legal_pa_range( physical_address, number_of_bytes, true ) ) {
		xstd::warning( "Blocking MmMapIoSpace(%p, 0x%llx)."_es, physical_address, number_of_bytes );
		return nullptr;
	}
	[[clang::musttail]] return mi_map_contiguous_memory_hook.next<decltype( &hk_mi_map_contiguous_memory )>()( physical_address, number_of_bytes, protection, a4 );
}

// Live debug hooks.
//
static hook::record dbgk_capture_live_kernel_dump_hook;
static hook::record dbgk_wer_capture_live_kernel_dump_hook;
[[no_instrument]] static uint64_t hk_dbgk_capture_live_kernel_dump()
{
	{
		thread::shadow_guard guard{};
		auto* proc = ke::get_eprocess();
		auto end = std::find( proc->image_file_name.data(), proc->image_file_name.data() + proc->image_file_name.size(), 0 );
		std::string img_name( ( const char* ) proc->image_file_name.data(), ( const char* ) end );
		if ( img_name != "csrss.exe" && img_name != "System" )
			request<"setFlags">( std::array{ "dbg.liveKmDump."_ss + img_name } ).release();
	}
	return STATUS_CONTENT_BLOCKED;
}

// Initializes the OS hardenings.
//
void oswarden::init()
{
	// Disable debug-printing.
	//
	if constexpr ( !is_debug_build() )
		hook::patch( &os::query_debug_filter_state, { 0x31, 0xC0, 0xC3 } );

	// Hook the functions.
	//
	hook::add( &mi_map_view_of_physical_section_hook, &mi::map_view_of_physical_section, &hk_mi_map_view_of_physical_section );
	hook::add( &mi_map_contiguous_memory_hook, &mi::map_contiguous_memory, &hk_mi_map_contiguous_memory );
	hook::add( &dbgk_capture_live_kernel_dump_hook, &dbgk::capture_live_kernel_dump, &hk_dbgk_capture_live_kernel_dump );
	hook::add( &dbgk_wer_capture_live_kernel_dump_hook, &dbgk::wer_capture_live_kernel_dump, &hk_dbgk_capture_live_kernel_dump );

	// Disable force dump.
	//
	*( char* ) &nt::force_dump_disabled = true;

	// Disable hibernation.
	//
	if ( *( const bool* ) &pop::hiber_enabled )
		pop::enable_hiber_file( false, false );
}

struct mm_unloaded_driver
{
	nt::unicode_view name;
	any_ptr          module_start;
	any_ptr          module_end;
	uint64_t         timestamp;
};
using mm_unloaded_driver_list = std::array<mm_unloaded_driver, 50>;
static_assert( sizeof( mm_unloaded_driver ) == 0x28, "Invalid size." );

struct pi_ddb_cache_entry
{
	nt::list_entry_t list_entry;
	nt::unicode_view name;
	uint64_t         timestamp;
	nt::status       status;
	uint64_t         _pad;
};
static_assert( sizeof( pi_ddb_cache_entry ) == 0x38, "Invalid size." );

struct ci_khash_list_entry
{
	ci_khash_list_entry* next;
	nt::unicode_view     name;
	// ...
};

// Cleans up the process traces.
//
void oswarden::clean_process_traces( std::wstring_view exec_path )
{
	if ( auto handle = ntpp::create_file( { .path = exec_path, .access = SYNCHRONIZE, .ignore_share = true } ) ) {
		if ( auto fo = ntpp::resolve_handle<nt::file_object_t>( handle->get() ) ) {
			fo->section_object_pointer->image_section_object = nullptr;
			mm::flush_image_section( fo->section_object_pointer, nt::mmflush_type_t::_delete );
			fo->delete_access = true;
		}
		ntpp::delete_file( handle->get() );
	}
	ntpp::delete_file( exec_path );
}

// Cleans up the driver traces.
//
void oswarden::clean_driver_traces()
{
	// Declare the generic predicate to determine if a driver is related to crescent, eg: 'crescent.exe:a27ef8f1-7a2f-2005-f0c1-e35357ce3ffe.sys'.
	//
	static constexpr auto is_our_driver = [ ] ( std::wstring_view path )
	{
		if ( xstd::ifind( path, ".exe" ) == std::string::npos )
			return false;
		memset( ( void* ) path.data(), 0, path.size() * sizeof( wchar_t ) );
		return true;
	};

	// If there is an unloaded drivers list:
	//
	{
		ntpp::unique_lock<nt::eresource_t> ldr_lock{ &ps::loaded_module_resource };
		if ( auto& unloaded_drivers_ptr = *( mm_unloaded_driver_list** ) &mm::unloaded_drivers )
		{
			// Read the whole list:
			//
			auto unloaded_drivers = *unloaded_drivers_ptr;

			// Delete any entry related to us.
			//
			for ( auto& entry : unloaded_drivers )
			{
				if ( is_our_driver( entry.name ) )
				{
					ex::free_pool( entry.name.buffer );
					memset( &entry, 0, sizeof( mm_unloaded_driver ) );
				}
			}

			// Sort the list in ascending time.
			//
			std::sort( unloaded_drivers.begin(), unloaded_drivers.end(), [ ] ( auto& a, auto& b )
			{
				auto t0 = a.timestamp ? a.timestamp : ~0ull;
				auto t1 = b.timestamp ? b.timestamp : ~0ull;
				return t0 < t1;
			} );

			// Write the list back and update last unloaded driver index.
			//
			auto first_empty_slot = std::find_if( unloaded_drivers.begin(), unloaded_drivers.end(), [ ] ( auto& e ) { return e.timestamp == 0; } );
			*unloaded_drivers_ptr = unloaded_drivers;
			*( uint32_t* ) &mm::last_unloaded_driver = first_empty_slot - unloaded_drivers.begin();
		}
	}

	// If there is a non-empty DDB cache table:
	//
	{
		ntpp::unique_lock<nt::eresource_t> ddb_lock{ &pi::ddb_lock };
		if ( auto* ddb_table = ( rtl::avl_table_t* ) &pi::ddb_cache_table; ddb_table->number_generic_table_elements != 0 )
		{
			// Declare recursive searcher.
			//
			auto find_entry = [ ] ( auto&& self, rtl::balanced_links_t* links ) -> pi_ddb_cache_entry*
			{
				for ( auto* child : { links->left_child, links->right_child } )
				{
					if ( !child )
						continue;

					auto* entry = ( pi_ddb_cache_entry* ) ( child + 1 );
					if ( is_our_driver( entry->name ) )
						return entry;
					if ( auto* sr = self( self, child ) )
						return sr;
				}

				return nullptr;
			};

			// Until we exhaust the list, delete our entries.
			//
			while ( auto* entry = find_entry( find_entry, &ddb_table->balanced_root ) )
			{
				entry->list_entry.unlink();
				rtl::delete_element_generic_table_avl( ddb_table, entry );
			}
		}
	}

	// If there is a g_KernelHashBucketList entry:
	//
	if ( sdk::exists( ci::g_hash_cache_lock ) && sdk::exists( ci::g_kernel_hash_bucket_list ) )
	{
		ntpp::unique_lock<nt::eresource_t> hash_cache_lock{ &ci::g_hash_cache_lock };

		auto* head = ( ci_khash_list_entry* ) &ci::g_kernel_hash_bucket_list;
		for ( auto prev = head; prev->next; prev = prev->next )
		{
			auto* it = prev->next;
			if ( is_our_driver( it->name ) )
			{
				prev->next = it->next;
				ex::free_pool_with_tag( it, 'UAEP' );
			}
		}
	}

	// Flush EaCache.
	//
	if ( sdk::exists( ci::g_ci_ea_cache_lookaside_list ) )
			ex::flush_lookaside_list_ex( ( nt::lookaside_list_ex_t* ) &ci::g_ci_ea_cache_lookaside_list );
}
