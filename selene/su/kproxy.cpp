#include "proxy.hpp"
#include "mirror.hpp"
#include <ntpp.hpp>
#include <sdk/mi/api.hpp>
#include <sdk/mm/api.hpp>
#include <nt/image.hpp>
#include <xstd/text.hpp>
#include <xstd/hashable.hpp>
#include <xstd/zstd.hpp>
#include <xstd/timer.hpp>
#include <xstd/shared_mutex.hpp>
#include <xstd/formatting.hpp>
#include <xt/event.hpp>
#include <xt/event_graph.hpp>
#include <trace/client.hpp>
#include <trace/image_info.hpp>
#include "vm.hpp"
#include "su0.hpp"
#include "trapframe.hpp"
#include "../misc/crashdump.hpp"
#include "../utility/memory.hpp"
#include "../hooks/patch_manager.hpp"
#include "../hooks/inline_hooks.hpp"
#include "../sched/irq.hpp"
#include "../utility/thread.hpp"

namespace su
{
	// Converts from an ldr entry to trace::image_info.
	//
	static trace::image_info fetch_image_info( ldr::km::data_table_entry_t* img, trace::image_class icl = trace::image_class::none )
	{
		trace::image_info info = {};
		info.path = img->full_dll_name;
		info.base_address = ( uint64_t ) img->dll_base;
		info.in_memory_size = img->size_of_image;
		info.in_memory_checksum = img->check_sum;
		info.load_count = img->load_count;
		info.signature_level = img->signature_level;
		info.signature_type = img->signature_type;
		info.flags = img->flags;
		info.path = img->full_dll_name;
		info.file_name = img->base_dll_name.to_string();

		info.load_order = 0xFFFF;
		auto* head = ( nt::list_entry_t* ) &ps::loaded_module_list;
		auto it = img->in_load_order_links.blink;
		if ( it && it != &img->in_load_order_links ) {
			info.load_order = 0;
			while ( it != head )
				it = it->blink, info.load_order++;
		}

		trace::fetch_image_info( &info, false, icl );
		return info;
	}

	// Server image policies.
	//
	enum class image_policy : uint8_t
	{
		// Loader policies.
		//
		ldr_allow = 0,
		ldr_neutralize = 1,
		ldr_force_unload = 2,
		ldr_dbg_sandbox = 3,
		ldr_unknown = ldr_allow,

		// Runtime policies.
		//
		rt_allow = 0,
		rt_block = 1,
		rt_sandbox = 2,
		rt_unknown = rt_block,
	};

	// Returns the default policy for a given image entry.
	//
	static image_policy get_default_policy( const trace::image_info& info, bool ldr )
	{
		// Treat as trusted if signature level is unchecked due to being so early in the boot order.
		//
		if ( ldr && info.signature_level == LDRP_SIGNING_LEVEL_UNCHECKED && !( info.flags & LDRP_MM_LOADED ) )
			return image_policy::ldr_allow;

		// Lulz.
		//
		if ( !ldr && info.file_name.ends_with( "WdNisDrv.sys" ) ) {
			return image_policy::rt_block;
		}

		// If trust verification was previously deferred, we really need to read it now.
		//
		ntpp::trust::state tmp;
		const ntpp::trust::state* trust = nullptr;
		if ( !info.trust )
		{
			auto res = ntpp::read_file( info.path );
			if ( res && id_hash( *res ) == info.hash )
			{
				tmp = ntpp::trust::verify( *res );
				trust = &tmp;
			}
		}
		else
		{
			trust = &info.trust.value();
		}

		// If signed:
		//
		if ( trust && !trust->cert_list.empty() )
		{
			// If corrupt signature, reject.
			//
			if ( !trust->signature_match )
				return ldr ? image_policy::ldr_force_unload : image_policy::rt_block;

			for ( auto& cert : trust->cert_list )
			{
				// Skip if not chained.
				//
				if ( !cert.chain )
					continue;

				// Allow if Microsoft binary:
				//
				bool is_microsoft = std::find( cert.ekus.begin(), cert.ekus.end(), "1.3.6.1.4.1.311.10.3.6"_oid ) != cert.ekus.end() ||
					std::find( cert.ekus.begin(), cert.ekus.end(), "1.3.6.1.4.1.311.61.5.1"_oid ) != cert.ekus.end();
				if ( is_microsoft )
					return ldr ? image_policy::ldr_allow : image_policy::rt_allow;

				// Skip if not a valid code signing certificate.
				//
				if ( std::find( cert.ekus.begin(), cert.ekus.end(), "1.3.6.1.5.5.7.3.3"_oid ) == cert.ekus.end() )
					continue;

				// If extended WHQL signed, allow loading blindly.
				//
				if ( std::find( cert.ekus.begin(), cert.ekus.end(), "1.3.6.1.4.1.311.10.3.39"_oid ) != cert.ekus.end() )
					return ldr ? image_policy::ldr_allow : image_policy::rt_allow;

				// If WHQL signed, return defaults.
				//
				if ( std::find( cert.ekus.begin(), cert.ekus.end(), "1.3.6.1.4.1.311.10.3.5"_oid ) != cert.ekus.end() )
					return ldr ? image_policy::ldr_unknown : image_policy::rt_unknown;
			}

			// Refuse to load.
			//
			return ldr ? ( is_debug_build() ? image_policy::ldr_allow : image_policy::ldr_neutralize ) : image_policy::rt_block;
		}
		else
		{
			return ldr ? ( is_debug_build() ? image_policy::ldr_allow : image_policy::ldr_force_unload ) : image_policy::rt_block;
		}
	}

	// Resolves and returns the server runtime policy for a single image entry.
	//
	struct cached_policy {
		image_policy    pol;
		xstd::timestamp ttl;
	};
	static xstd::shared_mutex rt_policy_cache_lock = {};
	static std::unordered_map<xstd::sha1_t, cached_policy, xstd::hasher<>> rt_policy_cache;
	static image_policy resolve_rt_policy( const image_info& info )
	{
		CHECK_IRQL( == PASSIVE_LEVEL );
		auto time = xstd::time::now();

		// Find the cached entry and return if it exists.
		//
		if ( info.hash != xstd::sha1_t{} )
		{
			ntpp::critical_region _c{};
			std::shared_lock _g{ rt_policy_cache_lock };
			if ( auto it = rt_policy_cache.find( info.hash ); it != rt_policy_cache.end() && it->second.ttl > time )
				return it->second.pol;
		}

		// If catalog signed, client is not connected and default policy is allow, allow.
		//
		if ( info.trust && info.trust->cat_signed && get_default_policy( info, false ) == image_policy::rt_allow )
			return image_policy::rt_allow;

		// Query the server about the treatment and return the result.
		//
		auto response = request<"imageLoadNotify">( sjson::instance{ info }, 30s ).wait();
		if ( !response || !response->is_integer() )
		{
			xstd::log( "Failed querying the server about image notification (%s), resulting to defaults... %s\n"_es, info.file_name, response );

			// Try reading cached policy ignoring TTL, otherwise use the default logic.
			//
			{
				ntpp::critical_region _c{};
				std::unique_lock _g{ rt_policy_cache_lock };
				if ( auto it = rt_policy_cache.find( info.hash ); it != rt_policy_cache.end() )
					return it->second.pol;
			}
			return get_default_policy( info, false );
		}

		// Cache the policy.
		//
		auto policy = ( image_policy ) response->integer();
		ntpp::critical_region _c{};
		std::unique_lock _g{ rt_policy_cache_lock };
		switch ( policy ) {
			case su::image_policy::rt_allow:    rt_policy_cache[ info.hash ] = { policy, time + 5min }; break;
			case su::image_policy::rt_block:    rt_policy_cache[ info.hash ] = { policy, time + 5min }; break;
			case su::image_policy::rt_sandbox:  rt_policy_cache[ info.hash ] = { policy, time + 1min }; break;
			default: break;
		}
		return policy;
	}

	// List of active drivers.
	//
	struct driver_map_segment {
		uint64_t min_va;
		uint64_t max_va;
		std::shared_ptr<driver_entry> entry;
	};
	static xstd::shared_xspinlock<HIGH_LEVEL> g_driver_map_lock = {};
	static std::vector<driver_map_segment> g_driver_map = {};
	static std::shared_ptr<driver_entry> dmap_find_ip( uint64_t va ) {
		auto it = std::upper_bound( g_driver_map.begin(), g_driver_map.end(), va, []( auto& a, auto& b ) FORCE_INLINE{ return a < b.max_va; } );
		if ( it != g_driver_map.end() && it->min_va <= va ) {
			return it->entry;
		}
		return nullptr;
	}
	static auto dmap_emplace( uint64_t base, bool emplace = false ) {
		auto it = std::lower_bound( g_driver_map.begin(), g_driver_map.end(), base, []( auto& a, auto& b ) FORCE_INLINE{ return a.min_va < b; } );
		bool inserted = it == g_driver_map.end() || it->min_va != base;
		if ( emplace && inserted ) {
			it = g_driver_map.insert( it, driver_map_segment{} );
		}
		return std::pair{it, inserted};
	}

	// Fetches or creates a driver entry given an ldr entry.
	//
	static std::shared_ptr<driver_entry> reference_driver_entry( ldr::km::data_table_entry_t* img, image_class icl = image_class::none )
	{
		// Skip if invalid.
		//
		if ( !is_kernel_va( img->dll_base, true ) )
			return nullptr;
		uint64_t min_va = ( uint64_t ) img->dll_base;
		uint64_t max_va = min_va + img->size_of_image;

		// Take the quick return if entry already exists.
		//
		{
			std::shared_lock slock{ g_driver_map_lock };
			auto [it, inserted] = dmap_emplace( min_va );
			if ( !inserted && it->entry->ldr == img ) {
				return it->entry;
			}
		}

		// Fill initial data, lock if non-session image.
		//
		auto init = std::make_shared<driver_entry>();
		init->ldr =     img;
		init->info =    fetch_image_info( img, icl );
		init->session = !mem::is_driver_address( img->dll_base );
		if ( !init->session ) {
			mem::lock_image( img );
		}

		// Acquire the lock, get or create the map entry and unlock.
		//
		std::shared_ptr<driver_entry> result = {};
		{
			std::unique_lock ulock{ g_driver_map_lock };
			auto [it, inserted] = dmap_emplace( min_va, true );
			it->min_va = min_va;
			it->max_va = max_va;
			if ( inserted || it->entry->ldr != img ) {
				it->entry =  init;
				result =     std::move( init );
			} else {
				result =     it->entry;
			}
		}
		return result;
	}

	// Finds a driver entry given an instruction pointer residing within.
	//
	static std::shared_ptr<driver_entry> find_driver_at_high_level( uint64_t ip ) {
		std::shared_lock _g{ g_driver_map_lock.unwrap() };
		return dmap_find_ip( ip );
	}
	std::shared_ptr<driver_entry> find_driver( uint64_t ip ) {
		std::shared_lock _g{ g_driver_map_lock };
		return dmap_find_ip( ip );
	}
	template<typename F>
	static bool for_each_driver( F&& cb ) {
		std::shared_lock _g{ g_driver_map_lock };
		for ( auto& [mi, ma, e] : g_driver_map ) {
			if ( cb( mi, e ) )
				return true;
		}
		return false;
	}
	std::vector<std::shared_ptr<driver_entry>> dump_driver_list() {
		std::shared_lock _g{ g_driver_map_lock };
		std::vector<std::shared_ptr<driver_entry>> result( g_driver_map.size(), nullptr );
		size_t it = 0;
		for ( auto& [mi, ma, e] : g_driver_map ) {
			result[ it++ ] = e;
		}
		return result;
	}

	// Flushes the XT data in the driver list.
	//
	static void flush_xt_dry() {
		// Get a list of all XT states.
		//
		std::vector<std::shared_ptr<xt::control_block>> trace_states = {};
		for_each_driver( [ & ] ( auto, auto& e ) {
			if ( e->xt )
				trace_states.emplace_back( e->xt );
			return false;
		} );

		// Flush em all!
		//
		ia32::scope_irql<APC_LEVEL> _i{};
		for ( auto& state : trace_states ) {
			std::unique_lock lock{ state->worker_mutex };
			state->flush_locked();
		}
	}
	static void flush_xt() {
		// Get a list of all trace states.
		//
		struct trace_state
		{
			sjson::instance data = {};
			std::shared_ptr<xt::control_block> xt = {};
		};
		xt::graph_metadata meta = {};
		std::vector<trace_state> trace_states;
		trace_states.reserve( 2 );
		for_each_driver( [ & ] ( auto, std::shared_ptr<driver_entry>& entry ) {
			if ( entry->xt ) {
				auto& state = trace_states.emplace_back( trace_state{ .xt = entry->xt } );
				state.data[ "name"_ss ] = entry->info.file_name;
				state.data[ "hash"_ss ] = xstd::fmt::as_hex_string( entry->info.hash );
				state.data[ "tid"_ss ] = entry->trace_id;
			}
			return false;
		} );
		if ( trace_states.empty() ) return;

		// Fill the metadata list.
		//
		for_each_driver( [ & ] ( uint64_t base, std::shared_ptr<driver_entry>& entry ) {
			meta.image_list.emplace( base, xt::graph_metadata::image{
				entry->info.in_memory_size,
				entry->info.file_name,
				entry->info.pdb_path,
				entry->info.pdb_identifier
			} );
			return false;
		} );

		// For each trace state:
		//
		for ( auto& state : trace_states )
		{
			xt::event_graph graph = {};
			{
				// Acquire the worker lock.
				//
				ia32::scope_irql<APC_LEVEL> _i{};
				std::unique_lock lock{ state.xt->worker_mutex };

				// Flush all data and copy the graph.
				//
				state.xt->flush_locked();
				graph = *state.xt->radio.graph;
			}

			// Fill the graph's metadata and serialize it.
			//
			if ( &trace_states.back() == &state )
				graph.meta = std::move( meta );
			else
				graph.meta = meta;
			auto raw_graph = xstd::serialize( graph );

			// Serialize and submit the graph to the server.
			//
			state.data[ "data"_ss ] = std::move( raw_graph );

			constexpr auto worker = [ ] ( sjson::instance data ) -> xstd::async_task
			{
				auto tid = data[ "tid"_ss ].string();
				auto result = co_await request<"submitTrace">( data );
				xstd::log( " # Trace %s => %s\n", tid, result.success() ? "OK"s : result.message() );
			};
			worker( std::move( state.data ) );
			state.xt.reset();
		}
	}

	// Removes a driver given an ldr entry.
	//
	static void erase_driver_entry( uint64_t base_address, size_t length )
	{
		// Update the image mappings.
		//
		if ( !kernel_mirror.unmap( base_address, length ) )
			xstd::warning( "Unmapping failed?!"_es );

		// Flush XT data.
		//
		flush_xt();

		// Erase the entry.
		//
		std::unique_lock _g{ g_driver_map_lock };
		auto [it, inserted] = dmap_emplace( base_address, false );
		fassert( !inserted );
		g_driver_map.erase( it );
	}

	// Handles the driver entry given the policy.
	//
	static void treat_driver( const std::shared_ptr<driver_entry>& img, image_policy policy, bool ldr )
	{
		// Update whitelist cache.
		//
		if ( policy == ( ldr ? image_policy::ldr_allow : image_policy::rt_allow ) )
		{
			ntpp::critical_region _c{};
			std::unique_lock _g{ rt_policy_cache_lock };
			rt_policy_cache[ img->info.hash ] = { image_policy::rt_allow, xstd::time::now() + 24h };
		}

		// Log.
		//
		if ( ldr )
		{
			switch ( policy )
			{
				case su::image_policy::ldr_neutralize:
					xstd::log( " -> Neutralizing LDR image %s\n", img->info.file_name.c_str() );
					break;
				case su::image_policy::ldr_force_unload:
					xstd::log( " -> Force unloading LDR image %s\n", img->info.file_name.c_str() );
					break;
				case su::image_policy::ldr_dbg_sandbox:
					xstd::log( " -> Sandboxing LDR image %s\n", img->info.file_name.c_str() );
					break;
				default: break;
			}
		}
		else
		{
			switch ( policy )
			{
				case su::image_policy::rt_block:
					xstd::log( "-> Blocking RT image %s\n", img->info.file_name.c_str() );
					break;
				case su::image_policy::rt_sandbox:
					xstd::log( " -> Sandboxing RT image %s\n", img->info.file_name.c_str() );
					break;
				default: break;
			}
		}

		// If sandboxing:
		//
		if ( policy == ( ldr ? image_policy::ldr_dbg_sandbox : image_policy::rt_sandbox ) )
		{
			any_ptr img_beg = img->ldr->dll_base;
			any_ptr img_end = xstd::align_up( xstd::ptr_at( img_beg, img->ldr->size_of_image ), 0x1000 );

			// Map the image.
			//
			img->trapped = true;
			if ( !kernel_mirror.is_shadowed( img_beg ) || !kernel_mirror.map( img_beg, img_end - img_beg, true ) )
				xstd::error( "=> Mapping failed for image: %s."_es, img->info.file_name );

			// Create the event tracer.
			//
			img->xt = std::make_shared<xt::control_block>();
			img->trace_id = xstd::fmt::as_hex_string( std::array{
				bswap( ia32::read_tsc() ^ xstd::ref_at<uint64_t>( &ke::get_user_shared_data()->system_time, 3 ) ), // timestamp
				xstd::make_srandom<uint64_t>(),
			} );

			// Setup mitigation information.
			//
			img->mgx.base_address = img->info.base_address;
			img->mgx.hash =         img->info.hash;

			// Make sure the image is not executable.
			//
			for ( auto it = img_beg; it < img_end; ) {
				auto [pte, depth] = mem::lookup_pte( it );
				if ( pte->present ) {
					xstd::atomic_bit_set( pte->flags, PT_ENTRY_64_EXECUTE_DISABLE_BIT );
				}
				it += mem::page_size( depth );
			}
			mem::ipi_flush_tlb();

			// Already mapped so skip mapping.
			//
			xstd::log( "=> [%p - %p] Added trapped image %s.\n"_es, img_beg, img_end, img->info.file_name );
			return;
		}
		// If neutralizing / unloading:
		//
		else if ( ldr && ( policy == image_policy::ldr_neutralize || policy == image_policy::ldr_force_unload ) )
		{
			// Find the driver object.
			//
			ntpp::ref<nt::driver_object_t> driver_object = {};
			ntpp::query_object_directory( L"\\Driver", [ & ] ( win::object_directory_information_t* info )
			{
				if ( driver_object ) return;
				std::wstring driver_name = L"\\Driver\\"s += info->name.get();
				if ( auto drv_object = ntpp::reference_object_by_name<nt::driver_object_t>( driver_name ) ) {
					if ( drv_object->driver_start == img->ldr->dll_base || drv_object->driver_section == img->ldr )
						driver_object = std::move( drv_object );
				}
			} );

			// If none found, fuck it.
			//
			if ( !driver_object ) {
				return;
			}

			// Close all handles associated with the driver.
			//
			ntpp::close_handle_if( [ & ] ( nt::handle_table_entry_t* entry ) {
				if ( auto* fo = ntpp::dyn_cast< nt::file_object_t >( ntpp::resolve_handle_table_entry<ntpp::table_type::handle_table>( entry ) ) ) {
					nt::device_object_t* dev = ntpp::get_related_device_object( fo );
					return dev && dev->driver_object == driver_object.get();
				}
				return false;
			} );

			// Try unloading.
			//
			if ( policy == image_policy::ldr_force_unload ) {
				ntpp::unload_driver( driver_object, false );
			}

			// Kill the device control functions.
			//
			for ( auto& fn : driver_object->major_function )
				if ( &fn != &driver_object->major_function[ IRP_MJ_CLOSE ] &&
					  &fn != &driver_object->major_function[ IRP_MJ_SHUTDOWN ] &&
					  &fn != &driver_object->major_function[ IRP_MJ_CLEANUP ] &&
					  &fn != &driver_object->major_function[ IRP_MJ_PNP ] &&
					  &fn != &driver_object->major_function[ IRP_MJ_POWER ] )
					fn = ( any_ptr ) ( void* ) &iop::invalid_device_request;
		}
		// If blocking:
		//
		else if ( !ldr && policy == image_policy::rt_block )
		{
			auto wimg = ( win::image_x64_t* ) img->ldr->dll_base;
			uint32_t ep = wimg->get_nt_headers()->optional_header.entry_point;
			auto ptr = wimg->raw_to_ptr( ep );

			// Clone the page via copy-on-write.
			//
			ia32::touch( ptr );
			mi::copy_on_write( ptr, mem::get_pte( ptr ), -1ll, nullptr );

			/* Patch the entry point with:
				mov eax, 0xC0000428
				ret
			*/
			static constexpr uint8_t patch[] = { 0xB8, 0x28, 0x04, 0x00, 0xC0, 0xC3 };
			mem::copy_nwp( ptr, patch, sizeof( patch ) );
		}

		// If image is shadow mapped to the mirrored address space:
		//
		if ( kernel_mirror.is_shadowed( img->ldr->dll_base ) && !su::trap_image_read )
		{
			// Map the image.
			//
			if ( !kernel_mirror.map( img->ldr->dll_base, xstd::align_up( img->ldr->size_of_image, 0x1000 ), false ) )
				xstd::error( "Mapping failed for image: %s"_es, img->info.file_name );
		}
	}

	// Initializes the driver list.
	//
	static void init_driver_list()
	{
		// Make a list of images to query the server about.
		//
		std::vector<std::shared_ptr<driver_entry>> image_list;
		for ( auto&& img : ntpp::module_list{} ) {
			if ( auto driver = reference_driver_entry( img ); !driver->session )
				image_list.emplace_back( std::move( driver ) );
		}
		su::driver_list_init = true;

		// Create the query for the rest of the drivers.
		//
		sjson::array_t query = {};
		query.reserve( image_list.size() );
		for ( auto& img : image_list )
			query.emplace_back( img->info );

		// Wait for the response.
		//
		std::vector<image_policy> policy_list = {};
		auto response = request<"imageLoadStartup">( sjson::instance{ std::move( query ) }, 60s ).wait();
		if ( response && response->is_array() && response->array().size() == image_list.size() ) {
			for ( auto& entry : response->array() )
				policy_list.emplace_back( ( image_policy ) entry.integer() );
		}

		// If invalid response, write the defaults.
		//
		if ( policy_list.size() != image_list.size() ) {
			xstd::log( "Failed querying the server about image notification, resulting to defaults...\n"_es );

			// Skip Microsoft images.
			//
			std::erase_if( image_list, [ ] ( auto& img )
			{
				if ( img->info.signature_level >= LDRP_SIGNING_LEVEL_WINDOWS ||
					  ( img->info.signature_level == LDRP_SIGNING_LEVEL_UNCHECKED && !( img->info.flags & LDRP_MM_LOADED ) ) )
				{
					// Treat as trusted and erase.
					//
					treat_driver( img, image_policy::ldr_allow, true );
					return true;
				}
				return false;
			} );

			// Determine the default image policies.
			//
			policy_list.resize( image_list.size() );
			for ( size_t n = 0; n != image_list.size(); n++ )
				policy_list[ n ] = get_default_policy( image_list[ n ]->info, true );
		}

		// Treat each driver accordingly.
		//
		for ( size_t n = 0; n != image_list.size(); n++ )
			treat_driver( image_list[ n ], policy_list[ n ], true );
	}

	// Hooks tracking the changes to the real page table:
	//
	alignas( 64 ) static hook::record mi_driver_load_succeeded_hook = {};
	alignas( 64 ) static hook::record mi_set_system_code_protection_hook = {};
	alignas( 64 ) static hook::record mi_unload_system_image_hook = {};
	[[no_instrument]] MS_SSE2AVX static uint64_t hk_mi_driver_load_succeeded( ldr::km::data_table_entry_t* img, uint64_t u1, uint64_t u2, uint64_t u3, uint64_t u4, uint8_t flag )
	{
		if ( is_kernel_va( img->dll_base ) ) {
			thread::shadow_guard _g{};
			auto entry = reference_driver_entry( img, image_class::driver );
			if ( !entry->session )
				treat_driver( entry, resolve_rt_policy( entry->info ), false );
		}
		[[clang::musttail]] return mi_driver_load_succeeded_hook.next<decltype(&hk_mi_driver_load_succeeded)>()( img, u1, u2, u3, u4, flag );
	}
	[[no_instrument]] MS_SSE2AVX static uint64_t hk_mi_set_system_code_protection( ldr::km::data_table_entry_t* img, ia32::pt_entry_64* pte_first, ia32::pt_entry_64* pte_last, uint32_t flags )
	{
		thread::shadow_guard guard{};
		ntpp::critical_region cs{};
		uint64_t res = ( uint64_t ) mi_set_system_code_protection_hook( img, pte_first, pte_last, flags );

		// If image is shadowed mapped to the mirrored address space:
		//
		auto first = mem::pte_to_va( pte_first );
		auto last = mem::pte_to_va( pte_last ) + 0x1000;
		if ( kernel_mirror.is_shadowed( img->dll_base ) )
		{
			// Skip if stupid Warbird images.
			//
			auto hash = xstd::make_ihash( img->base_dll_name.get() );
			if ( hash == "clipsp.sys"_ihash || hash == "peauth.sys"_ihash )
				return res;

			// Update the image mappings.
			//
			if ( kernel_mirror.update( first, last - first ) )
			{
				// If trapped image, make sure it is not executable in host memory.
				//
				if ( kernel_mirror.is_trapped_fast( first ) )
				{
					bool flush = false;
					for ( auto it = first; it < last; )
					{
						auto [pte, depth] = mem::lookup_pte( it );
						if ( pte->present )
							flush |= !xstd::atomic_bit_set( pte->flags, PT_ENTRY_64_EXECUTE_DISABLE_BIT );
						it += mem::page_size( depth );
					}
					if ( flush ) mem::ipi_flush_tlb();
				}
			}
		}
		return res;
	}
	MS_SSE2AVX static uint64_t hk_mi_unload_system_image( ldr::km::data_table_entry_t* img, uint64_t code )
	{
		if ( img->load_count > 1 )
			return mi_unload_system_image_hook( img, code );

		thread::shadow_guard guard{};
		ntpp::critical_region cs{};

		// Unlock the image.
		//
		bool unlocked = mem::unlock_image( img );

		// If it doesn't actually unload, skip.
		//
		any_ptr base = img->dll_base;
		size_t length = img->size_of_image;
		uint64_t pa = mem::get_physical_address( base );
		uint64_t res = mi_unload_system_image_hook( img, code );
		uint64_t npa = mem::get_physical_address( base );
		if ( pa == npa && pa != 0 ) {
			if ( unlocked && mem::lock_image( img ) ) {
				if ( kernel_mirror.is_shadowed( img->dll_base ) )
					kernel_mirror.update( img->dll_base, xstd::align_up( length, 0x1000 ) );
			}
			return res;
		}

		// If image is shadowed mapped to the mirrored address space:
		//
		if ( kernel_mirror.is_shadowed( base ) )
			erase_driver_entry( base, length );
		return res;
	}

#if DYNAMIC_UPDATE
	// Page remap worker.
	//
	static std::atomic<bool> g_remap_worker_queued = false;
	static xstd::spinlock g_remap_worker_lock = {};
	static void page_remap_worker() {
		// L + Ratio.
		//
		if ( !g_remap_worker_queued.exchange( false ) ) {
			return;
		}

		// Under lock:
		//
		std::lock_guard _g{ g_remap_worker_lock };
		while ( true )
		{
			// Until we're out of dirty drivers:
			//
			std::shared_ptr<driver_entry> dirty_driver = nullptr;
			{
				std::shared_lock _g{ driver_list_lock };
				for ( auto& [va, drv] : driver_list ) {
					if ( drv && drv->dirty.load( std::memory_order::relaxed ) ) {
						if ( drv->dirty.exchange( 0, std::memory_order::acquire ) ) {
							dirty_driver = drv;
							break;
						}
					}
				}
			}
			if ( !dirty_driver ) break;
			//xstd::log( "page_remap_worker: %p | %s\n", dirty_driver->ldr->dll_base, dirty_driver->info.file_name );

			any_ptr first = dirty_driver->ldr->dll_base;
			any_ptr last =  xstd::align_up( first + dirty_driver->ldr->size_of_image, 0x1000 );

			// If trapped:
			//
			if ( dirty_driver->trapped ) {
				// Make sure MM did not make it suddenly executable.
				//
				for ( auto it = first; it < last; )
				{
					auto [pte, depth] = mem::lookup_pte( it );
					if ( pte->present ) {
						xstd::atomic_bit_set( pte->flags, PT_ENTRY_64_EXECUTE_DISABLE_BIT );
					}
					it += mem::page_size( depth );
				}

				// Update the range.
				//
				kernel_mirror.update( first, last - first );
			}
			// Otherwise if system image:
			//
			else {
				// Make sure hooks are still there.
				//
				for ( any_ptr p = first; p < last; p += 0x1000 ) {
					if ( auto it = hook::g_hooked_vpn_db.find( p >> 12 ); it != hook::g_hooked_vpn_db.end() ) {
						fassert( it->second == mem::get_pfn( p ) );
					}
				}

				// Update the range.
				//
				kernel_mirror.update( first, last - first );
			}

			// Trash all TLB state.
			//
			for ( size_t i = 0; i != apic::number_of_processors(); i++ ) {
				auto vm = vmcs_table[ i ];
				vm->queue_tlb_flush();
			}
			mem::ipi_flush_tlb();
		}
	}

	// Handler for driver page being invalidated.
	//
	NO_INLINE COLD MS_SSE2AVX static void handle_driver_page_invalidate( any_ptr va ) {
		// Find the driver entry, skip if not relevant.
		//
		auto driver = find_driver_entry( va );
		if ( !driver ) return;

		if ( !driver->ldr->base_dll_name.get().contains( L"clipsp" ) &&
			  !driver->ldr->base_dll_name.get().contains( L"peauth" ) )
		{
			xstd::log( "Active driver address is being invalidated: %p (PFN:%llx)\n", va, mem::get_pfn(va) );

			static std::atomic<int> x = 0;
			if ( ++x < 100 ) {
				auto trace = crashdump::trace_stack();
				trace->exception_message = "Lol testing";
				scheduler::queue_async(
					[ trace = std::move( trace ) ] { submit_crashdump_aux( xstd::serialize( *trace ) ); },
					scheduler::priority::dpc, scheduler::shorthand::all, 0, true
				);
			}
		}

		// Increment dirty count, queue worker if not done yet.
		//
		if ( !driver->dirty++ ) {
			if ( !g_remap_worker_queued.exchange( true ) ) {
				// NOTE: This is a horrible race condition, any other VM currently running can read from stale entries.
				// However there's not a lot we can do since page allocation requires DISPATCH_LEVEL and we can't guarantee
				// we can update all the entries with 0 allocations...
				//
				scheduler::queue_async( &page_remap_worker, scheduler::priority::dpc, scheduler::shorthand::all, 0, true );
			}
		}
	}
#endif

	// Hooks tracking TLB flushes.
	//
	union ktb_flush_va
	{
		struct
		{
			uint64_t number_of_entries : 10;
			uint64_t page_size : 2;
			uint64_t vpn : 52;
		};
		any_ptr address;
	};
	struct kflush_list
	{
		ktb_flush_va*   entries;
		uint32_t        number_of_entries;
		uint32_t        u0;
	};
	struct kflush_single
	{
		ktb_flush_va    entry;
		uint32_t        u0;
	};
	alignas( 64 ) static hook::record ki_flush_range_worker_hook = {};
	alignas( 64 ) static hook::record ke_flush_single_tb_hook = {};
	alignas( 64 ) static hook::record ki_flush_range_tb_hook = {};

	static void trash_mirror_tlbs(any_ptr va)
	{
		if ( is_kernel_va( va ) ) [[likely]] {
			//if ( mem::is_driver_address( va ) ) {
			//	handle_driver_page_invalidate( va );
			//}
			for ( size_t i = 0; i != apic::number_of_processors(); i++ ) {
				auto vm = vmcs_table[ i ];

				if ( mem::is_session_address( va ) ) vm->mm.signal_flush_transient();
				else                                 vm->mm.signal_flush_tlb();
			}
		} else {
			uint64_t pml4t = ia32::read_cr3().address_of_page_directory;
			for ( size_t i = 0; i != apic::number_of_processors(); i++ ) {
				auto vm = vmcs_table[ i ];
				if ( vm->mm.origin_pfn == pml4t && vm->mm.transient_pxes[ mem::px_index( va ) ] )
					vm->mm.signal_flush_transient();
			}
		}
	}
	[[no_instrument]] FLATTEN NO_AVX static uint64_t hk_ki_flush_range_worker( kflush_list* ctx )
	{
		for ( size_t i = 0; i != ctx->number_of_entries; i++ )
			trash_mirror_tlbs( ctx->entries[ i ].address );
		return ki_flush_range_worker_hook( ctx );
	}
	[[no_instrument]] FLATTEN NO_AVX static uint64_t hk_ke_flush_single_tb( ktb_flush_va va, uint64_t u0, uint64_t u1 )
	{
		trash_mirror_tlbs( va.address );
		return ke_flush_single_tb_hook( va, u0, u1 );
	}
	[[no_instrument]] FLATTEN NO_AVX static uint64_t hk_ki_flush_range_tb( void* va, uint64_t u0 )
	{
		trash_mirror_tlbs( va );
		return ki_flush_range_tb_hook( va, u0 );
	}

	alignas( 64 ) static hook::record mi_can_page_move_hook = {};
	[[no_instrument]] FLATTEN NO_AVX static uint64_t hk_mi_can_page_move( nt::mmpfn_t* mpfn )
	{
		if ( mpfn->reference_count >= 12 )
			return 0;
		[[clang::musttail]] return mi_can_page_move_hook.next<decltype(&hk_mi_can_page_move)>()( mpfn );
	}

	namespace r0
	{
		// Hook used to redirect VMENTERs.
		//
		NO_INLINE bool on_knx_fault( void* virtual_address, nt::trapframe* tf )
		{
			// Skip if it is not coming from a trapped image.
			//
			if ( !kernel_mirror.is_trapped_fast( virtual_address ) ) {
				return false;
			}
			auto entry = find_driver_at_high_level( ( uint64_t ) virtual_address );
			if ( !entry ) return false;

			// Get current IRQL and processor ID.
			//
			irql_t prev_irql = ia32::get_irql();
			uint32_t pcid =    ia32::read_pcid();

			// If there is an event tracing context:
			//
			std::shared_ptr<xt::local_buffer> buf = {};
			if ( const auto& xcb = entry->xt ) [[likely]] {
				// Fetch the buffer.
				//
				buf = xcb->buffers[ pcid ];

				// If we were originally at or below APC_LEVEL:
				//
				if ( prev_irql <= APC_LEVEL && tf->rflags.interrupt_enable_flag ) {
					// Lower the IRQL without enabling interrupts.
					//
					ia32::set_irql( APC_LEVEL );

					// While the buffer is at critical capacity:
					//
					if ( buf->raw_buffer.current_capacity() < xt::critical_threshold ) [[unlikely]] {
						while( true ) {
							// Enable interrupts to acquire the mutex and try flushing.
							//
							ia32::enable();
							{
								std::unique_lock lock{ xcb->worker_mutex };

								// If buffer is still below critical capacity, flush the buffer:
								//
								if ( buf->raw_buffer.current_capacity() < xt::critical_threshold )
									xcb->flush_locked();
							}
							ia32::disable();

							// If we land on the same processor break out.
							//
							auto new_pcid = ia32::read_pcid();
							if ( new_pcid == pcid )
								break;

							// Update PCID and the buffer pointer.
							//
							pcid = new_pcid;
							buf =  xcb->buffers[ pcid ];
						}
					}

					// Revert the IRQL.
					//
					ia32::set_irql( prev_irql );
				}

				// If the buffer is filled above the flushing threshold, queue flush work.
				//
				size_t cap = buf->raw_buffer.current_capacity();
				if ( cap < xt::flushing_threshold && !xcb->pending_flush.exchange( true ) ) {
					xstd::chore( [ xcb = std::shared_ptr( xcb ) ] {
						ia32::scope_irql<APC_LEVEL> _i{};
						std::unique_lock lock{ xcb->worker_mutex };
						xcb->flush_locked();
					} );
				}
			}

			// Enter the VM.
			//
			r0::vmenter( tf, std::move( buf ), &entry->mgx );
			return true;
		}

		// Trace worker.
		//
		static xstd::async_task trace_worker() {
			while ( true ) {
#if !DEBUG_BUILD
				for ( size_t i = 0; i != 20; i++ ) {
					co_await xstd::yield_for{ 25s };
					flush_xt_dry();
				}
#endif
				co_await xstd::yield_for{ 25s };
				flush_xt();
			}
		}

		// Initializes the proxy responsible for redirection of control flow.
		//
		NO_INLINE void init()
		{
			// Disable memory scrubbing.
			//
			hook::patch( &mm::scrub_memory, { 0xC3 } );
			hook::add( &mi_can_page_move_hook, &mi::can_page_move, &hk_mi_can_page_move );

			// Acquire the loader lock to prevent any images from being loaded / unloaded.
			//
			auto lock_hnd = mm::acquire_load_lock();

			// Track system image address space changes.
			//
			hook::add( &mi_driver_load_succeeded_hook, &mi::driver_load_succeeded, &hk_mi_driver_load_succeeded );
			hook::add( &mi_unload_system_image_hook, &mi::unload_system_image, &hk_mi_unload_system_image );
			hook::add( &mi_set_system_code_protection_hook, &mi::set_system_code_protection, &hk_mi_set_system_code_protection );
			hook::patch( &mi::lock_pagable_image_section, { 0xC3 } );

			// Trash VM PCIDs on relevant TB flushes.
			//
			hook::add( &ki_flush_range_worker_hook, &ki::flush_range_worker, &hk_ki_flush_range_worker, hook::config{ .pos_type = hook::config::exact } );
			hook::add( &ke_flush_single_tb_hook, &ke::flush_single_tb, &hk_ke_flush_single_tb );
			hook::add( &ki_flush_range_tb_hook, &ki::flush_range_tb, &hk_ki_flush_range_tb );

			// Initialize the driver list.
			//
			init_driver_list();

			// Release the lock handle.
			//
			mm::release_load_lock( lock_hnd );

			// Start the trace worker.
			//
			trace_worker();
#if PFN_STEAL_TEST
			// Test code for forcing a bunch of drivers to trade PFNs.
			//
			{
				ke::get_ethread()->hard_fault_behavior = 1;
				for ( auto&& img : ntpp::module_list{} ) {
					if ( mem::is_driver_address( img->dll_base ) ) {
						auto lock_range = [ & ] ( any_ptr adr, size_t n ) {
							auto get_vm_pa = [ ] ( any_ptr adr ) {
								auto [pte,depth] = kernel_mirror.pxe->lookup( adr );
								if ( !pte->present ) return 0ull;
								return ( pte->page_frame_number << 12 ) | ( adr & ( mem::page_size( depth ) - 1 ) );
							};

							{
								size_t page_count = ( n + 0xFFF ) >> 12;
								std::vector<uint64_t> pfns( page_count );
								for ( size_t i = 0; i != page_count; i++ ) {
									pfns[ i ] = mem::get_physical_address( adr + ( i << 12 ) );
								}

								auto mdl = io::allocate_mdl( adr, n, false, false, nullptr );
								mm::probe_and_lock_pages( mdl, 0, nt::lock_operation_t::read_access );
								//xstd::log( "- %p (%llx|%llx)\n", adr, mem::get_physical_address( adr ), get_vm_pa( adr ) );
								void* map = mm::map_locked_pages( mdl, 0 );
								if ( map ) ia32::wtouch( map );


								for ( size_t i = 0; i != page_count; i++ ) {
									auto ladr = adr + ( i << 12 );
									auto pa0 = pfns[ i ];
									auto pa1 = mem::get_physical_address( ladr );
									if ( pa0 != pa1 ) {
										xstd::log( "- %s:%p traded PFNs (NT:%llx->%llx | VM: %llx)\n",
													  img->base_dll_name, ladr, pa0, pa1, get_vm_pa( ladr ) );
									}
								}
							}
						};

						// Lock the headers.
						//
						lock_range( img->dll_base, 0x1000 );

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
								xstd::log( "-> %s\n", scn->name.to_string() );
								lock_range( begin, scn->virtual_size );
							}
						}
					}
				}
			}
#endif
		}
	};
};
