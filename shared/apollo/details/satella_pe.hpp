#pragma once
#include <memory>
#include <vector>
#include <map>
#include <filesystem>
#include <xstd/bitwise.hpp>
#include <xstd/text.hpp>
#include <xstd/algorithm.hpp>
#include <xstd/random.hpp>
#include <xstd/assert.hpp>
#include <xstd/bmp.hpp>
#include <nt/image.hpp>
#include "satella_linear.hpp"
#include "icon_writer.hpp"
#include "../satella.hpp"

namespace satella::pe
{
	// PE configuration.
	//
	static constexpr size_t minimum_section_count = 4;
	static constexpr size_t maximum_section_count = 64;
	static constexpr size_t file_alignment = 0x400;
	static constexpr size_t section_alignment = 0x1000;
	static constexpr size_t header_size = 0x1000;
	static constexpr uint16_t fake_language_code = 1038;

	// Sampled Dos Stub + Rich header.
	//
	static constexpr uint8_t dos_sample[] =
	{
		 0x0E, 0x1F, 0xBA, 0x0E, 0x00, 0xB4, 0x09, 0xCD, 0x21, 0xB8, 0x01, 0x4C, 0xCD, 0x21, 0x54, 0x68,
		 0x69, 0x73, 0x20, 0x70, 0x72, 0x6F, 0x67, 0x72, 0x61, 0x6D, 0x20, 0x63, 0x61, 0x6E, 0x6E, 0x6F,
		 0x74, 0x20, 0x62, 0x65, 0x20, 0x72, 0x75, 0x6E, 0x20, 0x69, 0x6E, 0x20, 0x44, 0x4F, 0x53, 0x20,
		 0x6D, 0x6F, 0x64, 0x65, 0x2E, 0x24, 0x00, 0x00
	};
	static constexpr uint8_t rich_sample[] =
	{
		 0x0E, 0x1F, 0xBA, 0x0E, 0x00, 0xB4, 0x09, 0xCD, 0x21, 0xB8, 0x01, 0x4C, 0xCD, 0x21, 0x54, 0x68,
		 0x69, 0x73, 0x20, 0x70, 0x72, 0x6F, 0x67, 0x72, 0x61, 0x6D, 0x20, 0x63, 0x61, 0x6E, 0x6E, 0x6F,
		 0x74, 0x20, 0x62, 0x65, 0x20, 0x72, 0x75, 0x6E, 0x20, 0x69, 0x6E, 0x20, 0x44, 0x4F, 0x53, 0x20,
		 0x6D, 0x6F, 0x64, 0x65, 0x2E, 0x0D, 0x0D, 0x0A, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x89, 0x04, 0x98, 0x55, 0xCD, 0x65, 0xF6, 0x06, 0xCD, 0x65, 0xF6, 0x06, 0xCD, 0x65, 0xF6, 0x06,
		 0xC4, 0x1D, 0x65, 0x06, 0x37, 0x65, 0xF6, 0x06, 0xD9, 0x0E, 0xF2, 0x07, 0xD2, 0x65, 0xF6, 0x06,
		 0xD9, 0x0E, 0xF5, 0x07, 0xCE, 0x65, 0xF6, 0x06, 0xCD, 0x65, 0xF7, 0x06, 0x6C, 0x6C, 0xF6, 0x06,
		 0xD9, 0x0E, 0xF7, 0x07, 0xD2, 0x65, 0xF6, 0x06, 0xD9, 0x0E, 0xFB, 0x07, 0xAB, 0x64, 0xF6, 0x06,
		 0xD9, 0x0E, 0xF3, 0x07, 0xEE, 0x65, 0xF6, 0x06, 0xD9, 0x0E, 0x0B, 0x06, 0xCC, 0x65, 0xF6, 0x06,
		 0xD9, 0x0E, 0x09, 0x06, 0xCC, 0x65, 0xF6, 0x06, 0xD9, 0x0E, 0xF4, 0x07, 0xCC, 0x65, 0xF6, 0x06,
		 0x52, 0x69, 0x63, 0x68, 0xCD, 0x65, 0xF6, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	};

	// Resource details.
	//
	static constexpr char manifest_sample[] = R"(<?xml version='1.0' encoding='UTF-8' standalone='yes'?>
<assembly xmlns='urn:schemas-microsoft-com:asm.v1' manifestVersion='1.0'>
  <trustInfo xmlns="urn:schemas-microsoft-com:asm.v3">
    <security>
      <requestedPrivileges>
        <requestedExecutionLevel level='requireAdministrator' uiAccess='false' />
      </requestedPrivileges>
    </security>
  </trustInfo>
</assembly>
)";

	// Samples of section names.
	//
	static constexpr std::string_view section_names[] = {
		"",        "BSS",       "CODE",    "DATA",
		"PAGE",    "INIT",      ".00cfg",  ".bss",
		".text",   ".crt",      ".data",   ".rdata",
		".idata",  ".xdata",    ".pdata",  ".reloc",
		".rodata", ".text0",    ".tls",    ".edata",
		".sdata",  ".rsrc",     ".debug",  ".vmp0",
		".vmp1",   ".upx0",     ".upx1",
	};

	// Picks a base address for a PE image.
	//
	inline uint64_t pick_image_base( bool is_debug = false, bool kernel = false )
	{
		if ( is_debug )
		{
			return 0x1000'0000;
		}
		else
		{
			constexpr uint64_t granularity = 64_kb /*M$ says so.*/;
			uint64_t ptr = xstd::make_random<uint64_t>( 1, ( 0x7FFFFFFFEFFF - 128_mb ) / granularity ) * granularity;
			if ( kernel )
				ptr = SIZE_MAX - ptr + 1;
			return ptr;
		}
	}

	// Relocates the PE header.
	//
	inline void relocate_header( std::vector<uint8_t>& img, uint64_t new_base_address )
	{
		( ( win::image_x64_t* ) img.data() )->get_nt_headers()->optional_header.image_base = new_base_address;
	}

	// Writes a PE image from the given satella image.
	//
	inline xstd::result<std::pair<std::vector<uint8_t>, section_map_t>> write_image( const image* img, uint64_t base_address, bool is_debug = false, bool export_table = false, uint64_t uid = 0 )
	{
		auto rand_obf = [ is_debug ] ( float chance )
		{
			if ( is_debug ) return false;
			return xstd::make_random( 0.0f, 1.0f ) <= chance;
		};

		// Linearly map the module reserving the area for the PE header.
		//
		auto mapping = linear_map( img, base_address, header_size, is_debug ? satella::section_placement::grouped_by_type : satella::section_placement::random );
		if ( !mapping ) return mapping;

		auto& [raw_data, scn_map] = *mapping;
		auto get_sym_va = [ & ] ( auto sym ) -> uint64_t
		{
			if ( !sym || !sym->section ) return 0;
			return mapping->second.at( sym->section ) + sym->section_offset;
		};
		auto get_sym_rva = [ & ] ( auto sym ) -> uint32_t
		{
			size_t p = get_sym_va( sym );
			return p ? p - base_address : 0;
		};

		// If requested, add an export table without changing the image organization.
		//
		uint32_t export_table_rva = 0;
		uint32_t export_table_len = 0;
		if ( export_table )
		{
			// Align the file.
			//
			raw_data.resize( xstd::align_up( raw_data.size(), 0x10 ) );

			// Map each unique string to a singular symbol.
			//
			std::unordered_map<std::string, symbol*> symbols;
			for ( auto& scn : img->sections )
			{
				for ( auto& [off, sym] : scn->symbols )
				{
					// Skip certain names.
					//
					if ( sym->name.starts_with( "??_C@_" ) )
						continue;
					if ( sym->name.starts_with( "__unnamed" ) )
						continue;
					if ( sym->name.starts_with( "_profiler_tag" ) )
						continue;
					if ( sym->name.starts_with( "xed3_" ) )
						continue;
					if ( sym->name.starts_with( "xed_encode_group" ) )
						continue;
					std::string name = sym->name;
					if ( size_t n = name.find( "@ifn@" ); n != std::string::npos )
						name.resize( n );
					if ( !name.empty() && name[ 0 ] != '.' )
					{
						if ( name.starts_with( "?value@?$symbol_table_entry" ) )
						{
							for ( auto& isym : img->imported_symbols )
							{
								if ( isym.target == sym.get() && !isym.offset )
								{
									std::string suffix = "";
									std::string prefix = "";
									if ( isym.type == imported_symbol_type::global )
									{
										prefix = isym.id[ 0 ];
										suffix = isym.id[ 1 ];
										if ( size_t n = suffix.find( '.' ); n != std::string::npos )
											suffix.resize( n );
									}
									else if ( isym.type == imported_symbol_type::field )
									{
										prefix = isym.id[ 1 ];
										suffix = isym.id[ 0 ];
									}
									else if ( isym.type == imported_symbol_type::type )
									{
										prefix = isym.id[ 0 ];
										suffix = "type_details";
									}
									name = "?" + prefix + "@" + suffix + "@@3_KB";
								}
							}
						}
						if ( symbols.contains( name ) )
						{
							std::string old_name = name;
							for ( size_t i = 1; symbols.contains( name ); i++ )
								name = old_name + "_" + std::to_string( i );
						}
						symbols.emplace( name, sym.get() );
					}
				}
			}

			// Allocate the export directory.
			//
			export_table_len = sizeof( win::export_directory_t );
			for ( auto& [name, _] : symbols )
			{
				export_table_len += sizeof( uint16_t ); // entry @ ordinal tbl
				export_table_len += sizeof( uint32_t ); // entry @ function tbl
				export_table_len += sizeof( uint32_t ); // entry @ name tbl
				export_table_len += name.size() + 1 + 4;
			};

			// Calculate the RVAs.
			//
			uint32_t function_table_rva = raw_data.size() + sizeof( win::export_directory_t );
			uint32_t ordinal_table_rva = function_table_rva + sizeof( uint32_t ) * symbols.size();
			uint32_t name_table_rva = ordinal_table_rva + sizeof( uint16_t ) * symbols.size();
			uint32_t string_pool_rva = name_table_rva + sizeof( uint32_t ) * symbols.size();
			export_table_rva = raw_data.size();
			raw_data.resize( export_table_rva + export_table_len );

			// Write the header.
			//
			win::export_directory_t* dir = ( any_ptr ) raw_data.data() + export_table_rva;
			memset( dir, 0, sizeof( win::export_directory_t ) );
			dir->num_names = xstd::narrow_cast< uint32_t >( symbols.size() );
			dir->num_functions = xstd::narrow_cast< uint32_t >( symbols.size() );
			dir->rva_functions = xstd::narrow_cast< uint32_t >( function_table_rva );
			dir->rva_name_ordinals = xstd::narrow_cast< uint32_t >( ordinal_table_rva );
			dir->rva_names = xstd::narrow_cast< uint32_t >( name_table_rva );

			// Write the tables.
			//
			uint32_t* function_it = ( any_ptr ) raw_data.data() + function_table_rva;
			uint16_t* ordinal_it = ( any_ptr ) raw_data.data() + ordinal_table_rva;
			uint32_t* name_it = ( any_ptr ) raw_data.data() + name_table_rva;
			uint8_t* pool_it = ( any_ptr ) raw_data.data() + string_pool_rva;
			uint16_t last_ordinal = 0;
			for ( auto& [name, sym] : symbols )
			{
				*function_it++ = get_sym_rva( sym );
				*ordinal_it++ = last_ordinal++;
				*name_it++ = pool_it - raw_data.data();
				memcpy( pool_it, name.data(), name.length() + 1 );
				pool_it = xstd::align_up( pool_it + name.length() + 1, 4 );
			}
		}

		// If loader, add resource section.
		//
		uint32_t rsrc_table_rva = 0;
		uint32_t rsrc_table_len = 0;
		if ( img->type_module == satella::module_type::loader )
		{
			// Align the file.
			//
			raw_data.resize( xstd::align_up( raw_data.size(), 0x10 ) );

			// Create the icon data.
			//
			auto icon_data = icon_writer::create_random( uid );
			auto icon_group = icon_writer::create_group( 1, icon_data );

			// 1x dir + 3x [entry + dir + entry + dir + entry + dataentry]
			// icon -> 1 -> fake_language_code
			// group_icon -> 101 -> fake_language_code
			// manifest -> 1 -> fake_language_code
			//
			size_t directory_length =
				sizeof( win::rsrc_directory_t ) +
				3 * ( 2 * sizeof( win::rsrc_directory_t ) + 3 * sizeof( win::rsrc_generic_t ) + sizeof( win::rsrc_data_t ) );

			// Calculate the RVAs.
			//
			rsrc_table_rva = raw_data.size();
			uint32_t icon_data_rva = xstd::align_up( rsrc_table_rva + directory_length, 8 );
			uint32_t gr_icon_data_rva = xstd::align_up( icon_data_rva + icon_data.size(), 8 );
			uint32_t manifest_data_rva = xstd::align_up( gr_icon_data_rva + icon_group.size(), 8 );
			rsrc_table_len = xstd::align_up( manifest_data_rva + sizeof( manifest_sample ) - 1, 8 ) - rsrc_table_rva;
			raw_data.resize( rsrc_table_rva + rsrc_table_len );

			// Write the actual data.
			//
			memcpy( raw_data.data() + icon_data_rva, icon_data.data(), icon_data.size() );
			memcpy( raw_data.data() + gr_icon_data_rva, icon_group.data(), icon_group.size() );
			memcpy( raw_data.data() + manifest_data_rva, manifest_sample, sizeof( manifest_sample ) - 1 );

			// Create the allocators.
			//
			uint8_t* rsrc_dir_it = raw_data.data() + rsrc_table_rva;
			auto alloc_dir = [ & ] ( size_t num_entries ) -> win::rsrc_directory_t*
			{
				size_t size_in_bytes = sizeof( win::rsrc_directory_t ) + sizeof( win::rsrc_generic_t ) * num_entries;
				auto at = rsrc_dir_it;
				rsrc_dir_it += size_in_bytes;
				memset( at, 0, size_in_bytes );
				return new ( at ) win::rsrc_directory_t;
			};
			auto alloc_data = [ & ] () -> win::rsrc_data_t*
			{
				size_t size_in_bytes = sizeof( win::rsrc_data_t );
				auto at = rsrc_dir_it;
				rsrc_dir_it += size_in_bytes;
				memset( at, 0, size_in_bytes );
				return new ( at ) win::rsrc_data_t{};
			};

			// Allocate the root of the tree.
			//
			auto* root = alloc_dir( 3 );
			root->num_id_entries = 3;
			root->entries[ 0 ].identifier = ( uint16_t ) win::resource_id::icon;
			root->entries[ 1 ].identifier = ( uint16_t ) win::resource_id::group_icon;
			root->entries[ 2 ].identifier = ( uint16_t ) win::resource_id::manifest;

			// Write all entries.
			//
			auto write_tree = [ & ] ( size_t root_idx, uint16_t id, uint16_t lang, uint32_t rva, uint32_t size )
			{
				auto* l0 = alloc_dir( 1 );
				l0->num_id_entries = 1;
				l0->entries[ 0 ].identifier = id;
				root->entries[ root_idx ].is_directory = true;
				root->entries[ root_idx ].offset = xstd::distance( root, l0 );

				auto* l1 = alloc_dir( 1 );
				l1->num_id_entries = 1;
				l1->entries[ 0 ].identifier = lang;
				l0->entries[ 0 ].is_directory = true;
				l0->entries[ 0 ].offset = xstd::distance( root, l1 );

				auto* l2 = alloc_data();
				l2->rva_data = rva;
				l2->size_data = size;
				l1->entries[ 0 ].is_directory = false;
				l1->entries[ 0 ].offset = xstd::distance( root, l2 );
			};
			write_tree( 0, 1, fake_language_code, icon_data_rva, icon_data.size() );
			write_tree( 1, 101, fake_language_code, gr_icon_data_rva, icon_group.size() );
			write_tree( 2, 1, 1033, manifest_data_rva, sizeof( manifest_sample ) - 1 );
		}

		// Align the file.
		//
		raw_data.resize( xstd::align_up( raw_data.size(), section_alignment ) );

		// Create the header helpers.
		//
		auto header_iter = raw_data.begin();
		auto header_limit = raw_data.begin() + header_size;
		auto alloc = [ & ] ( size_t cnt ) -> any_ptr
		{
			auto curr = header_iter;
			header_iter += cnt;
			if ( header_iter > header_limit )
				xstd::throw_fmt( "Header is overflowing into the image." );
			return std::to_address( curr );
		};

		// Write the DOS header.
		//
		win::dos_header_t* dos_hdr = alloc( sizeof( win::dos_header_t ) );
		if ( rand_obf( 0.7f ) )
		{
			xstd::fill_random( std::span{ ( uint8_t* ) dos_hdr, sizeof( win::dos_header_t ) } );
		}
		else
		{
			memset( dos_hdr, 0, sizeof( win::dos_header_t ) );
			dos_hdr->e_cblp = 0x90;
			dos_hdr->e_cp = 3;
			dos_hdr->e_cparhdr = 4;
			dos_hdr->e_maxalloc = 0xFFFF;
			dos_hdr->e_sp = 0xB8;
			dos_hdr->e_lfarlc = 0x40;
		}
		dos_hdr->e_magic = win::DOS_HDR_MAGIC;

		if ( rand_obf( 0.3f ) )
		{
			memcpy( alloc( std::size( rich_sample ) ), rich_sample, std::size( rich_sample ) );
		}
		else if ( rand_obf( 0.4f ) )
		{
			memcpy( alloc( std::size( dos_sample ) ), dos_sample, std::size( dos_sample ) );
		}
		else if ( rand_obf( 0.5f ) )
		{
			auto rnd_dst = xstd::make_random( 1u, 5u ) * 8;
			uint8_t* p = alloc( rnd_dst );
			xstd::fill_random( std::span{ p, rnd_dst } );
		}
		dos_hdr->e_lfanew = xstd::narrow_cast< uint32_t >( std::to_address( header_iter ) - ( uint8_t* ) dos_hdr );

		// Start the NT headers by writing the file header.
		//
		win::nt_headers_x64_t* nt_hdrs = alloc( sizeof( win::nt_headers_x64_t ) );
		memset( nt_hdrs, 0, sizeof( win::nt_headers_x64_t ) );
		nt_hdrs->signature = win::NT_HDR_MAGIC;
		nt_hdrs->file_header.machine = win::machine_id::amd64;
		nt_hdrs->file_header.size_optional_header = sizeof( win::optional_header_x64_t );
		nt_hdrs->file_header.characteristics.executable = true;
		nt_hdrs->file_header.characteristics.large_address_aware = true;
		nt_hdrs->file_header.characteristics.relocs_stripped = true;
		if ( rand_obf( 0.8f ) )
		{
			nt_hdrs->file_header.ptr_symbols = xstd::make_random<uint32_t>();
			nt_hdrs->file_header.num_symbols = xstd::make_random<uint32_t>();
			nt_hdrs->file_header.characteristics.debug_stripped = xstd::make_random<bool>();
			nt_hdrs->file_header.characteristics.lines_stripped = xstd::make_random<bool>();
			nt_hdrs->file_header.characteristics.local_symbols_stripped = xstd::make_random<bool>();
		}

		// Write the optional headers.
		//
		if ( rand_obf( 0.8f ) )
		{
			xstd::fill_random( std::span{ ( uint8_t* ) &nt_hdrs->optional_header, sizeof( win::optional_header_x64_t ) } );
			nt_hdrs->optional_header.subsystem_version.major = xstd::make_random<uint8_t>( 4, 6 );
		}
		else
		{
			memset( &nt_hdrs->optional_header, 0, sizeof( win::optional_header_x64_t ) );
			nt_hdrs->optional_header.linker_version = { 0x000E };
			nt_hdrs->optional_header.size_code = 0;
			nt_hdrs->optional_header.size_init_data = 0;
			nt_hdrs->optional_header.size_uninit_data = 0;
			nt_hdrs->optional_header.base_of_code = header_size;
			nt_hdrs->optional_header.os_version.major = 5;
			nt_hdrs->optional_header.os_version.minor = 0;
			nt_hdrs->optional_header.subsystem_version.major = 5;
		}
		nt_hdrs->optional_header.size_image = raw_data.size();
		nt_hdrs->optional_header.num_data_directories = 16;
		nt_hdrs->optional_header.image_base = base_address;
		nt_hdrs->optional_header.magic = win::OPT_HDR64_MAGIC;
		nt_hdrs->optional_header.file_alignment = file_alignment;
		nt_hdrs->optional_header.section_alignment = section_alignment;
		nt_hdrs->optional_header.win32_version_value = 0;
		nt_hdrs->optional_header.subsystem_version.minor = 0;
		nt_hdrs->optional_header.size_headers = header_size;
		nt_hdrs->optional_header.subsystem = win::subsystem_id::windows_gui;
		nt_hdrs->optional_header.characteristics.flags = 0;
		nt_hdrs->optional_header.characteristics.nx_compat = true;
		nt_hdrs->optional_header.size_stack_commit = 0;
		nt_hdrs->optional_header.size_stack_reserve = 0;
		nt_hdrs->optional_header.size_heap_commit = 0;
		nt_hdrs->optional_header.size_heap_reserve = 0;
		nt_hdrs->optional_header.entry_point = get_sym_rva( img->entry_point );
		for ( auto& dir : nt_hdrs->optional_header.data_directories.entries )
			dir = { 0, 0 };

		// Add data directories.
		//
		if ( export_table_rva )
			nt_hdrs->optional_header.data_directories.export_directory = { export_table_rva, export_table_len };
		if ( rsrc_table_rva )
			nt_hdrs->optional_header.data_directories.resource_directory = { rsrc_table_rva, rsrc_table_len };

		// Decide the section sizes.
		//
		uint64_t min_sec_size = ( raw_data.size() - header_size ) / maximum_section_count;
		uint64_t max_sec_size = ( raw_data.size() - header_size ) / minimum_section_count;
		if ( min_sec_size < section_alignment )
			min_sec_size = section_alignment;

		std::vector<size_t> section_sizes;
		if ( is_debug )
		{
			section_sizes = { raw_data.size() - header_size };
		}
		else
		{
			uint64_t sa_va_end = base_address + raw_data.size();
			for ( auto it = base_address + header_size; it != sa_va_end; )
			{
				size_t size = xstd::make_random<size_t>( min_sec_size / section_alignment, max_sec_size / section_alignment ) * section_alignment;
				if ( it + size > sa_va_end )
					size = sa_va_end - it;

				if ( size < section_alignment )
					section_sizes.back() += size;
				else
					section_sizes.emplace_back( size );
				it += size;
			}
		}
		nt_hdrs->file_header.num_sections = section_sizes.size();

		// Write the section headers.
		//
		win::section_header_t* scns = alloc( sizeof( win::section_header_t ) * section_sizes.size() );
		size_t scn_rva_iterator = header_size;
		for ( size_t n = 0; n != nt_hdrs->file_header.num_sections; n++ )
		{
			// Write the limits.
			//
			size_t size = section_sizes[ n ];
			scns[ n ].virtual_size = size;
			scns[ n ].size_raw_data = size;
			scns[ n ].virtual_address = scn_rva_iterator;
			scns[ n ].ptr_raw_data = scn_rva_iterator;
			scn_rva_iterator += size;

			// Write a random name.
			//
			auto name = xstd::pick_randomi( section_names );
			memset( &scns[ n ].name, 0, sizeof( coff::scn_string_t ) );
			memcpy( &scns[ n ].name, name.data(), std::max<size_t>( name.length() + 1, LEN_SHORT_STR ) );

			// Mark RWX, set mapping.
			//
			scns[ n ].characteristics.flags = 0;
			scns[ n ].characteristics.alignment = win::reflect_alignment( section_alignment );
			scns[ n ].characteristics.mem_read = true;
			scns[ n ].characteristics.mem_write = true;
			scns[ n ].characteristics.mem_execute = true;

			// Randomize or null rest.
			//
			if ( rand_obf( 0.8f ) )
			{
				scns[ n ].num_line_numbers = xstd::make_random<uint32_t>();
				scns[ n ].num_relocs = xstd::make_random<uint32_t>();
				scns[ n ].ptr_line_numbers = xstd::make_random<uint32_t>();
				scns[ n ].ptr_relocs = xstd::make_random<uint32_t>();
			}
			else
			{
				scns[ n ].num_line_numbers = 0;
				scns[ n ].num_relocs = 0;
				scns[ n ].ptr_line_numbers = 0;
				scns[ n ].ptr_relocs = 0;
			}
		}

		// Update checksum.
		//
		( ( win::image_x64_t* ) raw_data.data() )->update_checksum( raw_data.size() );
		return mapping;
	}
};