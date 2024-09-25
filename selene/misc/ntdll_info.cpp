#include "ntdll_info.hpp"
#include <ntpp.hpp>
#include <sdk/psp/api.hpp>
#include <nt/image.hpp>
#include <ntpp/import.hpp>
#include <xstd/random.hpp>
#include "../utility/memory.hpp"

namespace ntdll_info
{
	struct system_dll_info
	{
		// [ ... Variant data ...]
		nt::unicode_view system_path;
		any_ptr          base_address;
	};

	// Initializes global NTDLL information.
	//
	NO_INLINE void init()
	{
		// Search for the string.
		//
		any_ptr ntdll_info = ( void* ) &psp::native_system_dll_data;
		for ( size_t it = 0x10; it < 0x100; it += 8 )
		{
			if ( !memcmp( ntdll_info + it, "\x3C\x00\x3E\x00", 4 ) )
			{
				// Save the base address.
				//
				const system_dll_info* info = ntdll_info + it;
				base_address = info->base_address;

				// Resolve all required imports (we're already in a process so can just yolo read).
				//
				win::image_x64_t* mapping = ( win::image_x64_t* ) base_address;
				constexpr std::pair<uint32_t, any_ptr*> imports_to_resolve[] = {
					{ 
						xstd::const_tag<uint32_t( xstd::make_xhash<xstd::xcrc>( "ExpInterlockedPopEntrySListFault" ) )>::value, 
						&ntdll_info::interlocked_slist_pop_fault_address 
					}
				};
				for ( auto [hash, out] : imports_to_resolve ) {
					auto res = ntpp::import::query_by_name<true>( mapping, hash );
					if ( res.index() == 0 )
						xstd::error( "Failed to find ntdll export."_es );
					else if ( res.index() == 2 )
						xstd::error( "Ntdll export is forwarded?"_es );
					*out = info->base_address + std::get<1>( res ).rva;
				}
				mem::set_immune_pointer( ntdll_info::interlocked_slist_pop_fault_address );

				// Declare random code search helper for resolving default stubs.
				//
				win::section_header_t* text_scn = nullptr;
				for ( auto& scn : mapping->get_nt_headers()->sections() )
				{
					if ( scn.name.equals( ".text" ) )
					{
						text_scn = &scn;
						break;
					}
				}
				fassert( text_scn );
				const uint8_t* text_scn_begin = xstd::ptr_at( mapping, text_scn->virtual_address );
				const uint8_t* text_scn_end = text_scn_begin + std::min( text_scn->size_raw_data, text_scn->virtual_size );
				auto find_random_code = [ & ] <size_t N> ( const uint8_t( &pattern )[ N ] )
				{
					auto end = text_scn_end - N;
					for ( size_t n = 0; n != 32; n++ )
					{
						auto it = text_scn_begin + xstd::make_random<size_t>( 0, end - text_scn_begin );
						if ( n == 31 ) it = text_scn_begin;

						for ( ; it != end; it++ )
							if ( !memcmp( it, &pattern[ 0 ], N ) )
								return base_address + text_scn->virtual_address + ( it - text_scn_begin );
					}
					xstd::error( "Failed finding pattern!"_es );
				};

				// Resolve all default stubs.
				//
				def_syscall_stub = find_random_code( { 0x0F, 0x05 } );
				def_load_rcx_stub = find_random_code( { 0x59, 0xC3 } );
				return;
			}
		}
		xstd::error( "Failed to find ntdll base address."_es );
	}
};