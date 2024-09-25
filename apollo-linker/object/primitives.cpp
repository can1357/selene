#include "primitives.hpp"
#include "../utility/argparse.hpp"
#include <coff/import_library.hpp>
#include <xstd/narrow_cast.hpp>

namespace linker
{
	// Parses the linker directives.
	//
	static void parse_directives( object* obj, std::string_view directives )
	{
		auto args = split_arguments( directives );
		for( auto& x : args.free_standing )
			xstd::error( "Unexpected linker directive: '%s'.", x );

		for ( auto& [k, v] : args.flags )
		{
			// Argument specific parsing.
			//
			if ( k == "failifmismatch" )
			{
				size_t n = v.find( '=' );
				if ( n == std::string::npos )
					xstd::error( "Malformed linker directive: '%s' => '%s'.", k, v );

				std::string item = v.substr( 0, n );
				std::string value = v.substr( n + 1 );
				obj->consistent_macros.emplace( std::move( item ), std::move( value ) );
			}
			else if ( k == "include" )
			{
				obj->force_includes.emplace( v );
			}
			else if ( k == "export" )
			{
				obj->dllexported_symbols.emplace( v );
			}
			else if ( k != "defaultlib" )
			{
				xstd::warning( "Skipping unrecognized linker directive: '%s'.", k );
			}
		}
	}


	// Loads an object file.
	//
	bool load_native_object( ref::strong_ptr<object>& obj, const uint8_t* data, size_t size )
	{
		auto hdr = ( const coff::image_t* ) data;

		// Short name helper for errors and warnings.
		//
		auto short_name = [ & ] () -> const wchar_t*
		{
			std::wstring_view view{ obj->file_name.c_str() };
			size_t n = view.find_last_of( L"/\\" );
			if ( n != std::string::npos ) view.remove_prefix( n + 1 );
			return view.data(); // Suffix left as is, will be terminated.
		};

		// If import library, parse as is.
		//
		if ( hdr->file_header.machine == win::machine_id::unknown &&
			 hdr->file_header.num_sections == 0xFFFF )
		{
			auto* imp = ( coff::import_header_t* ) hdr;
			if ( imp->magic != coff::import_lib_magic )
				xstd::error( "[%ls] Invalid import library.", short_name() );
			if ( imp->machine != win::machine_id::amd64 )
				xstd::error( "[%ls] Import header has invalid machine type.", short_name() );
			obj->export_symbol = imp->get_symbol_name();
			obj->export_library = imp->get_library_name();
			return true;

		}

		// Validate machine type.
		//
		if ( hdr->file_header.machine != win::machine_id::amd64 )
			xstd::error( "[%ls] Object file has invalid machine type.", short_name() );
		if ( hdr->file_header.size_optional_header )
			xstd::error( "[%ls] Unexpected optional header in object file.", short_name() );

		// Resolve the descriptors we care about.
		//
		auto scn_table = hdr->get_sections();
		auto str_table = hdr->get_strings();
		auto sym_table = hdr->get_symbols();

		// Map sections.
		//
		std::vector<ref::strong_ptr<section>> sections( hdr->file_header.num_sections );
		for ( size_t n = 0; n != hdr->file_header.num_sections; n++ )
		{
			auto* raw = &scn_table[ n ];
			auto& scn = sections[ n ];
			scn = ref::allocate<section>();
			scn->owner = obj;
			scn->characteristics = raw->characteristics;
			scn->name = raw->name.to_string( str_table );

			if ( raw->ptr_raw_data )
				scn->raw_data = { data + raw->ptr_raw_data, data + raw->ptr_raw_data + raw->size_raw_data };
			else
				scn->raw_data = std::vector<uint8_t>( raw->size_raw_data, 0 );
			xstd::assert_that( !raw->virtual_address && !raw->virtual_size );
		}

		// Map all symbols.
		//
		std::vector<ref::strong_ptr<symbol>> symbols( hdr->file_header.num_symbols );
		std::vector<std::pair<ref::strong_ptr<symbol>, size_t>> weak_exts;
		for ( size_t n = 0; n != hdr->file_header.num_symbols; n++ )
		{
			// Copy basic details.
			//
			auto* raw = &sym_table[ n ];

			auto& sym = symbols[ n ];
			sym = ref::allocate<symbol>();
			sym->base_type = raw->base_type;
			sym->derived_type = raw->derived_type;
			sym->name = raw->name.to_string( str_table );
			sym->value = xstd::narrow_cast<uint64_t>( raw->value );
			sym->storage_class = raw->storage_class;
			switch ( raw->section_index )
			{
				case coff::special_section_id::symbol_debug:     sym->debug = true; break;
				case coff::special_section_id::symbol_absolute:  sym->absolute = true; break;
				case coff::special_section_id::symbol_undefined: break;
				default:                                         sym->scn = sections[ raw->section_index - 1 ]; break;
			}

			// Handle auxiliary information:
			//
			bool no_symbol = false;
			bool auxiliary_handled = false;

			// If section symbol:
			//
			if ( raw->valid_aux<coff::aux_section_t>() &&
				 raw->has_section() &&
				 sections[ raw->section_index - 1 ]->name == sym->name )
			{
				auxiliary_handled = true;
				auto& scn = sections[ raw->section_index - 1 ];

				// If it has auxiliary information (COMDAT):
				//
				if ( raw->num_auxiliary )
				{
					xstd::assert_that( raw->num_auxiliary == 1 );

					// Write the COMDAT information.
					//
					auto aux_scn = ( coff::aux_section_t* ) & sym_table[ n + 1 ];
					scn->comdat_select = aux_scn->comdat_select;
					scn->comdat_checksum = aux_scn->checksum;

					// If associative, link it.
					//
					if ( scn->comdat_select == coff::comdat_select_id::select_associative )
					{
						// Resolve the associated parent.
						//
						xstd::assert_that( aux_scn->associative_section > 0 );
						scn->comdat_associative_root = sections[ aux_scn->associative_section - 1 ];

						// Insert self into the association list of parent.
						//
						auto it = scn->comdat_associative_root;
						it->comdat_associatives.push_back( scn );

						// Until we reach a non-associative entry:
						//
						while ( it->comdat_select == coff::comdat_select_id::select_associative )
						{
							// Move the links over, skip to next entry.
							//
							auto next = it->comdat_associative_root;
							next->comdat_associatives.insert(
								next->comdat_associatives.end(),
								std::make_move_iterator( it->comdat_associatives.begin() ),
								std::make_move_iterator( it->comdat_associatives.end() )
							);
							it->comdat_associatives.clear();
							it = next;
						}
					}
				}

				// Do not create a symbol entry.
				//
				no_symbol = true;
			}
			// If file name symbol:
			//
			else if ( raw->valid_aux<coff::aux_file_name_t>() && raw->num_auxiliary )
			{
				auxiliary_handled = true;

				// Copy the name.
				//
				auto aux_fn = ( coff::aux_file_name_t* ) & sym_table[ n + 1 ];
				if ( obj->file_name.has_filename() ) obj->file_name.remove_filename();
				obj->file_name /= aux_fn->to_string();

				// Do not create a symbol entry.
				//
				no_symbol = true;
			}
			// If weak external:
			//
			else if ( raw->valid_aux<coff::aux_weak_external_t>() && raw->num_auxiliary )
			{
				auxiliary_handled = true;

				// Copy type, schedule the reference.
				//
				auto aux_ext = ( coff::aux_weak_external_t* ) & sym_table[ n + 1 ];
				weak_exts.emplace_back( sym, aux_ext->sym_alias_idx );

				// Warn if unhandled type.
				//
				if ( aux_ext->type == coff::weak_external_type::alias )
					xstd::warning( "[%ls] Weak external alias '%s' is not supported.", short_name(), sym->name.c_str() );
			}

			// Warn if auxiliary information is not handled.
			//
			if ( raw->num_auxiliary && !auxiliary_handled )
				xstd::warning( "[%ls] Unhandled auxiliary for '%s'.", short_name(), sym->name.c_str() );
			n += raw->num_auxiliary;

			// Insert the symbol into its appropriate list.
			//
			if ( !no_symbol )
			{
				// Handle non-COMDAT BSS:
				//
				if ( sym->value > 0 && sym->scn == nullptr && sym->is_public() &&
					 !sym->absolute && !sym->debug && !sym->alias )
				{
					auto& scn = sections.emplace_back( ref::allocate<section>() );
					scn->owner = obj;
					scn->name = ".bss";
					scn->raw_data = std::vector<uint8_t>( sym->value, 0 );
					scn->characteristics.flags = 0;
					scn->characteristics.cnt_uninit_data = true;
					scn->characteristics.mem_read = true;
					scn->characteristics.mem_write = true;
					sym->scn = scn;
					sym->value = 0;
				}

				if ( sym->scn == nullptr )
					obj->external_symbols.emplace_back( sym );
				else
					sym->scn->symbols.emplace_back( sym );
			}

			// Warn if unrecognized storage class.
			//
			switch ( raw->storage_class )
			{
				case coff::storage_class_id::label:
				case coff::storage_class_id::file_name:
				case coff::storage_class_id::weak_external:
				case coff::storage_class_id::public_symbol:
				case coff::storage_class_id::private_symbol: break;
				default:xstd::warning( "[%ls] Unexpected symbol storage class for '%s', %d.", short_name(), sym->name.c_str(), raw->storage_class );
			}
		}

		// Map weak externals.
		//
		for ( auto& [sym, idx] : weak_exts )
		{
			auto& ref = symbols[ idx ];
			xstd::assert_that( ref.alive(), "Weak external references invalid symbol." );
			sym->alias = ref;
		}

		// Map all relocations.
		//
		for ( size_t n = 0; n != hdr->file_header.num_sections; n++ )
		{
			auto* raw = &scn_table[ n ];
			if ( raw->num_relocs )
			{
				auto& scn = sections[ n ];
				auto relocs = ( coff::reloc_t* )( ( char* ) hdr + raw->ptr_relocs );

				for ( size_t j = 0; j != raw->num_relocs; j++ )
				{
					auto& sym = symbols[ relocs[ j ].symbol_index ];

					// Throw an error if this is a linker-exclusive section.
					//
					if ( sym->scn.alive() && ( sym->scn->characteristics.lnk_remove || sym->scn->characteristics.lnk_info ) )
						xstd::error( "Relocation references linker symbol %s.", *sym );

					// Silently fix the error if it was a valid but skipped-by-default symbol.
					//
					if ( sym->scn.alive() && sym.ref_count() == 1 )
						sym->scn->symbols.emplace_back( sym );

					// Validate the relocatio nand push it back to the list.
					//
					xstd::assert_that( sym.ref_count() > 1, "Relocation references invalid symbol %s.", *sym );
					scn->relocs.push_back( { relocs[ j ].virtual_address, sym, relocs[ j ].type } );
				}
			}
		}

		// Insert sections into the object after processing custom attributes.
		//
		for ( auto& scn : sections )
		{
			// Do not insert meta sections, parse immediately instead.
			//
			if ( scn->characteristics.lnk_remove || scn->characteristics.lnk_info )
			{
				// If section contains linker directives:
				//
				if ( scn->name == ".drectve" )
				{
					parse_directives( obj.get(), { ( const char* ) scn->raw_data.data(), scn->raw_data.size() } );
				}
				// If section contains address signifiance table:
				//
				else if ( scn->name == ".llvm_addrsig" )
				{
					std::vector<uint64_t> adr_sig_sym = coff::decode_uleb128s( scn->raw_data.begin(), scn->raw_data.end() );
					if ( adr_sig_sym.empty() && !scn->raw_data.empty() )
						xstd::error( "[%ls] Malformed address signifiance table.", short_name() );

					// Flip the default significance value to false and set the significant entries.
					//
					for ( auto& sym : symbols )
						if ( sym ) sym->address_significant = false;
					for ( auto& index : adr_sig_sym )
					{
						if ( symbols.size() <= index || !symbols[ index ] )
							xstd::error( "[%ls] Malformed address signifiance table.", short_name() );
						symbols[ index ]->address_significant = true;
					}
				}
				// Skip MSVC specific sections.
				//
				else if ( scn->name == ".chks64" )
				{

				}
				// Otherwise, emit warning and discard.
				//
				else
				{
					xstd::warning( "[%ls] Discarding unknown linker information section '%s'.", short_name(), scn->name.c_str() );
				}
				continue;
			}

			// Insert into sections list.
			//
			obj->sections.emplace_back( std::move( scn ) );
		}
		return true;
	}

	bool load_lto_object( ref::strong_ptr<object>& obj, const uint8_t* data, size_t size )
	{
		// Load the LTO object.
		//
		obj->lto = { data, size, obj->file_name };
		if ( !obj->lto ) return false;

		// Parse the directives.
		//
		parse_directives( obj.get(), obj->lto.get_directives() );

		// Create fake sections and symbols.
		//
		auto lto_scn = ref::allocate<section>();
		lto_scn->owner = obj;
		lto_scn->name = ".lto";
		obj->sections.emplace_back( lto_scn );
		for ( auto&& [name, attrb] : obj->lto.symbols() )
		{
			// If undefined, add to externals.
			//
			if ( ( attrb & LTO_SYMBOL_DEFINITION_MASK ) == LTO_SYMBOL_DEFINITION_UNDEFINED )
			{
				auto& sym = obj->external_symbols.emplace_back( ref::allocate<symbol>() );
				sym->storage_class = coff::storage_class_id::public_symbol;
				sym->name = name;
				continue;
			}

			// If public:
			//
			if ( ( attrb & LTO_SYMBOL_SCOPE_MASK ) == LTO_SYMBOL_SCOPE_DEFAULT ||
				 ( attrb & LTO_SYMBOL_SCOPE_MASK ) == LTO_SYMBOL_SCOPE_DEFAULT_CAN_BE_HIDDEN )
			{
				// Allocate the symbol.
				//
				auto sym = ref::allocate<symbol>();
				sym->storage_class = coff::storage_class_id::public_symbol;
				sym->name = name;

				// If COMDAT or weak create a new section.
				//
				auto scn = lto_scn;
				if ( ( attrb & LTO_SYMBOL_COMDAT ) || ( ( attrb & LTO_SYMBOL_DEFINITION_MASK ) == LTO_SYMBOL_DEFINITION_WEAK ) )
				{
					auto& comdat_scn = obj->sections.emplace_back( ref::allocate<section>() );
					comdat_scn->owner = obj;
					comdat_scn->name = ".comdat_lto";
					comdat_scn->comdat_select = coff::comdat_select_id::select_any;
					scn = comdat_scn;
				}

				// Append the symbol.
				//
				sym->scn = scn;
				scn->symbols.emplace_back( std::move( sym ) );
			}
		}
		return true;
	}

	ref::strong_ptr<object> load_object( const uint8_t* data, size_t size, std::filesystem::path file_name )
	{
		auto obj = ref::allocate<object>();
		obj->file_name = std::move( file_name );
		if ( lto::object::is( data, size ) )
		{
			if ( load_lto_object( obj, data, size ) )
				return obj;
		}
		else
		{
			if ( load_native_object( obj, data, size ) )
				return obj;
		}
		return nullptr;
	}

	// Loads a satella import library.
	//
	ref::strong_ptr<object> load_slib( const uint8_t* data, size_t size, std::filesystem::path file_name )
	{
		// Allocate the object.
		//
		auto obj = ref::allocate<object>();
		obj->file_name = std::move( file_name );
		obj->is_builtin_provider = true;

		// Create fake sections and symbols.
		//
		for ( auto& name : satella::deserialize_import_library( { data, data + size } ).symbols )
		{
			auto& dyn_scn = obj->sections.emplace_back( ref::allocate<section>() );
			dyn_scn->owner = obj;
			dyn_scn->name = ".dyn";
			
			auto sym = ref::allocate<symbol>();
			sym->storage_class = coff::storage_class_id::public_symbol;
			sym->name = name;
			sym->scn = dyn_scn;
			sym->dyn_import = true;
			dyn_scn->symbols.emplace_back( sym );

			auto& idata_scn = obj->sections.emplace_back( ref::allocate<section>() );
			idata_scn->owner = obj;
			idata_scn->name = ".sidata";
			idata_scn->comdat_select = coff::comdat_select_id::select_any;

			auto isym = ref::allocate<symbol>();
			isym->storage_class = coff::storage_class_id::public_symbol;
			isym->name = "__imp_" + name;
			isym->scn = idata_scn;

			idata_scn->raw_data.resize( 8 );
			idata_scn->relocs.push_back( { 0, sym, coff::rel_amd64_addr64 } );
			idata_scn->symbols.emplace_back( std::move( isym ) );
		}
		return obj;
	}

	// Loads a library file.
	//
	library load_library( xstd::file::view<> mapping )
	{
		library lib = { std::move( mapping ) };
		ar::view<> view = { lib.backing_file.data(), lib.backing_file.size() };

		// Map the objects.
		//
		std::unordered_map<uintptr_t, size_t> index;
		for ( auto&& [name, file] : view )
		{
			auto new_path = lib.backing_file.path();
			new_path.remove_filename();
			new_path /= std::filesystem::path{ name }.filename();

			index[ ( uintptr_t ) file.data() ] = lib.objects.size();
			lib.objects.emplace_back( std::async( std::launch::deferred, [ d = file.data(), s = file.length, p = new_path ]()
			{
				return load_object( d, s, p );
			} ) );
		}

		// Create the public symbol table.
		//
		auto sym_list = view.read_symbols();
		for ( auto&& [symbol, file] : sym_list )
		{
			auto& obj = lib.objects[ index.at( (uintptr_t) file->data() ) ];
			lib.public_symbols[ std::string{ symbol } ].emplace_back( obj );
		}
		return lib;
	}
};