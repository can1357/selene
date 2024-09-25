#include <xstd/narrow_cast.hpp>
#include "collection.hpp"
#include "comdat.hpp"
#include <pdblib/dbi.hpp>
#include <nt/directories/dir_exceptions.hpp>
#define IN_GENERATOR 1
#include <sdkgen/support_library.hpp>
#include <xstd/algorithm.hpp>

namespace linker
{
	// Attempts to resolve a symbol.
	//
	uint64_t collection::resolve( const ref::strong_ptr<symbol>& sym ) const
	{
		// If defined, return as is.
		//
		if ( sym->is_defined() )
			return sym->get_virtual_address();

		// If public or weak:
		//
		if ( sym->is_public() || sym->is_weak() )
		{
			// Try public directory:
			//
			if ( auto it = public_symbols.find( sym->name ); it != public_symbols.end() )
				if ( it->second.alive() && it->second->is_defined() )
					if ( auto va = it->second->get_virtual_address() )
						return va;

			// If weak, try alias:
			//
			if ( sym->is_weak() )
				if ( auto va = sym->alias->get_virtual_address() )
					return va;
		}
		return 0;
	}

	// Imports a public symbol by its name.
	//
	ref::strong_ptr<symbol> collection::require( const std::string& name )
	{
		// Skip if there is already an entry.
		//
		if ( auto it = public_symbols.find( name ); it != public_symbols.end() && it->second.alive() )
			return it->second.lock();
		if ( loader_lock ) return nullptr;

		// For each library:
		//
		for ( auto& lib : libraries )
		{
			// If public symbol directory contains the name:
			//
			if ( auto it = lib.public_symbols.find( name ); it != lib.public_symbols.end() )
			{
				// If we found a valid object:
				//
				std::pair<std::string, std::string> imported = {};
				auto oit = std::find_if( it->second.begin(), it->second.end(), [ & ] ( auto& dobj )
				{
					auto&& obj = dobj.get();
					if ( !obj || xstd::contains( working_set, obj ) )
						return false;

					if ( !obj->export_symbol.empty() )
					{
						imported = { obj->export_symbol, obj->export_library };
						return false;
					}

					for ( auto& scn : obj->sections )
						for ( auto& sym : scn->symbols )
							if ( sym->name == name )
								return true;

					return false;
				} );

				// If we found a native object, include it and return.
				//
				if ( oit != it->second.end() )
				{
					include( oit->get() );
					return public_symbols.at( name ).lock(); // Should pass.
				}
				// Otherwise if we've found an import, add it to the list and return nullptr.
				//
				else if( !imported.first.empty() )
				{
					imports.emplace( name, imported );
					imports.emplace( imported.first, imported );
					return nullptr;
				}
			}
		}
		return nullptr;
	}

	// Includes a single object file, skips if already included, if the context
	// has any unresolved public symbols, tries to import them from the library cache.
	//
	void collection::include( const ref::strong_ptr<object>& obj )
	{
		// Skip if already loaded.
		//
		if ( xstd::contains( working_set, obj ) )
			return;
		working_set.emplace_back( obj );

		// If import library, add to import list and skip.
		//
		if ( !obj->export_symbol.empty() )
		{
			imports.emplace( obj->export_symbol, std::pair{ obj->export_symbol, obj->export_library } );
			return;
		}

		// Handle consistent macros.
		//
		if ( enforce_macro_consistency )
		{
			for ( auto& [name, value] : obj->consistent_macros )
			{
				auto [it, inserted] = consistent_macros.emplace( name, std::pair{ value, obj->file_name } );
				if ( !inserted && it->second.first != value )
					xstd::error( "'%s' has mismatching values '%s' vs '%s' (%s, %s).", name.c_str(), it->second.first.c_str(), value.c_str(), it->second.second, obj->file_name.filename() );
			}
		}

		// Handle public symbols:
		//
		std::vector<ref::weak_ptr<symbol>> deferred_resolve;
		std::vector<ref::strong_ptr<section>> deferred_discard;
		for ( auto& section : obj->sections )
		{
			for ( auto& sym_new : section->symbols )
			{
				if ( sym_new->storage_class != coff::storage_class_id::public_symbol )
					continue;

				// If symbol does not exist/is dead, replace with ours.
				//
				auto& sym = public_symbols[ sym_new->name ];
				if ( !sym.alive() )
				{
					sym = sym_new;
					continue;
				}

				// Handle duplicate symbols.
				//  If COMDAT is merged into the new entry, erase the section of the other one,
				//  symbols can be left as is, publics will become undefined, privates will be dangling
				//  and should not be referenced anyway.
				//
				if ( sym_new == pick_comdat( sym.lock(), sym_new ) )
				{
					xstd::assert_that( sym->scn->owner != obj );
					sym->scn->owner->discard_section( sym->scn.lock() );
					sym = sym_new;
				}
				else
				{
					deferred_discard.emplace_back( sym_new->scn.lock() );
				}
			}
		}
		for ( auto& scn : deferred_discard )
			obj->discard_section( scn );
		deferred_discard = {};

		// Handle undefined symbols.
		//
		for ( auto& sym : obj->external_symbols )
		{
			if ( sym->storage_class != coff::storage_class_id::public_symbol )
				continue;
			require( sym->name );
		}
	}

	// Lifts metadata sections into the proper structures.
	//
	void collection::lift_metadata()
	{
		// For each section in the working set:
		//
		for ( auto& object : working_set )
		{
			// Remove the fltused flag.
			//
			std::erase_if( object->external_symbols, [ & ] ( auto& sym )
			{
				if ( sym->name == "_fltused" )
				{
					fassert( sym.ref_count() == 1 );
					object->meta.uses_fp = true;
					return true;
				}
				return false;
			} );

			// Index the CodeView information.
			//
			struct file_checksum_tmp
			{
				uint32_t file_name_offset;
				uint8_t size;
				CV_SourceChksum_t type;
				const uint8_t* raw_data;
			};
			std::vector<dbi::tpi_record*> type_records;
			std::vector<std::pair<dbi::sym_record*, section*>> symbol_records;
			std::unordered_map<size_t, file_checksum_tmp> file_checksums;
			std::unordered_map<uint32_t, CodeViewInfo::InlineeSourceLine> inlinee_lines;
			for ( auto& section : object->sections )
			{
				auto bg = ( const uint8_t* ) section->raw_data.data();
				auto en = bg + section->raw_data.size();
				if ( section->is_cv_sym_stream() )
				{
					// Read the magic.
					//
					if ( *( uint32_t* ) bg != 0x4 )
						continue;

					// Read subsections.
					//
					for ( auto it = bg + 4; it < en; it = bg + ( ( ( it - bg ) + 3 ) & ~3 ) )
					{
						auto* subsection = ( const CV_DebugSSubsectionHeader_t* ) it;
						it = ( const uint8_t* ) ( subsection + 1 );
						auto subsection_end = it + subsection->cbLen;

						if ( subsection->type == DEBUG_S_FILECHKSMS )
						{
							fassert( file_checksums.empty() );

							for ( auto chk = it; chk < subsection_end; chk = bg + ( ( ( chk - bg ) + 3 ) & ~3 ) )
							{
								auto& entry = file_checksums[ chk - it ];

								entry.file_name_offset = *( uint32_t* ) chk; chk += 4;
								entry.size = *chk++;
								entry.type = ( CV_SourceChksum_t ) *chk++;;
								entry.raw_data = chk;
								chk += entry.size;
							}
						}
						else  if ( subsection->type == DEBUG_S_STRINGTABLE )
						{
							fassert( object->meta.str_table.empty() );
							object->meta.str_table = {
								( char* ) it,
								( char* ) subsection_end,
							};
						}
						else  if ( subsection->type == DEBUG_S_INLINEELINES )
						{
							fassert( inlinee_lines.empty() );
							fassert( *( uint32_t* ) it == CV_INLINEE_SOURCE_LINE_SIGNATURE );
							size_t length = subsection->cbLen - 4;
							fassert( ( length % sizeof( CodeViewInfo::InlineeSourceLine ) ) == 0 );
							length /= sizeof( CodeViewInfo::InlineeSourceLine );

							auto arr = ( CodeViewInfo::InlineeSourceLine* ) ( it + 4 );
							for ( size_t n = 0; n != length; n++ )
								inlinee_lines.insert_or_assign( arr[ n ].inlinee, arr[ n ] );
						}
						else if ( subsection->type == DEBUG_S_SYMBOLS )
						{
							for ( auto sym_it = it; sym_it != subsection_end; )
							{
								dbi::sym_record* sym = ( dbi::sym_record* ) sym_it;
								symbol_records.emplace_back( sym, section.get() );
								sym_it = sym->data() + sym->length();
							}
						}
						else if ( subsection->type == DEBUG_S_LINES )
						{
							auto hdr = ( const CV_DebugSLinesHeader_t* ) it;
							auto* reloc = section->find_reloc( &hdr->offCon );
							if ( reloc && reloc->ref_symbol->is_defined() )
							{
								// Create or get the routine entry.
								//
								auto& routine = reloc->ref_symbol->scn->meta.routines[ reloc->ref_symbol->value ];
								routine.code_length_li = hdr->cbCon;

								// Read each block.
								//
								size_t cf_last = 0;
								section_metadata::line_information* li_last = nullptr;
								for ( auto blk_it = ( const uint8_t* ) ( hdr + 1 ); blk_it != subsection_end; )
								{
									auto blk = ( const CV_DebugSLinesFileBlockHeader_t* ) blk_it;
									auto lines = ( const CV_Line_t* ) ( blk + 1 );
									for ( size_t j = 0; j != blk->nLines; j++ )
									{
										size_t cf_new = lines[ j ].offset + hdr->offCon;
										if ( li_last ) li_last->length = cf_new - cf_last;
										auto& li_new = routine.lines[ cf_new ].emplace_back();
										li_new.file_id = blk->offFile;
										li_new.line = lines[ j ].linenumStart;
										cf_last = cf_new;
										li_last = &li_new;
									}
									blk_it = blk_it + blk->cbBlock;
								}
								if ( li_last ) li_last->length = hdr->cbCon - cf_last;
							}
						}
						it = subsection_end;
					}
				}
				else  if ( section->is_cv_type_stream() )
				{
					// Read the magic.
					//
					fassert( *( uint32_t* ) bg == 0x4 );
					for ( auto j = bg + 4; j != en; )
					{
						dbi::tpi_record* data = ( dbi::tpi_record* ) j;
						type_records.emplace_back( data );
						j += data->length();
					}
				}
			}

			// Process the file checksums table.
			//
			if ( !file_checksums.empty() )
			{
				fassert( !object->meta.str_table.empty() );

				auto& map = object->meta.file_map;
				map.reserve( file_checksums.size() );
				for ( auto& [i, chk] : file_checksums )
				{
					auto& entry = map[ i ];
					entry.raw_data = { chk.raw_data, chk.raw_data + chk.size };
					entry.type = chk.type;
					entry.file_name = &object->meta.str_table.at( chk.file_name_offset );
				}
			}

			// Process build information.
			//
			for ( auto& [sym, _] : symbol_records )
			{
				if ( sym->kind == S_COMPILE3 )
				{
					auto v = ( const COMPILESYM3* ) sym->data();
					object->meta.compiler_version = v->verSz;
				}
				else if ( sym->kind == S_COMPILE2 )
				{
					auto v = ( const COMPILESYM* ) sym->data();
					object->meta.compiler_version = ( char* ) v->verSt;
				}
				else if ( sym->kind == S_COMPILE )
				{
					auto v = ( const CFLAGSYM* ) sym->data();
					object->meta.compiler_version = ( char* ) v->ver;
				}
			}

			// Process inlinee information.
			//
			for ( auto it = symbol_records.begin(); it != symbol_records.end(); )
			{
				const auto get_end = [ & ] ()
				{
					int n = 0;
					for( auto r = it; r != symbol_records.end(); ++r )
					{
						switch ( r->first->kind )
						{
							case S_GPROC32:
							case S_LPROC32:
							case S_LPROC32_ID:
							case S_GPROC32_ID:
							case S_BLOCK32:
							case S_SEPCODE:
							case S_THUNK32:
							case S_INLINESITE:
							case S_INLINESITE2:
								n++;
								break;
							case S_END:
							case S_PROC_ID_END:
							case S_INLINESITE_END:
								n--;
								break;
							default:
								break;
						}
						if ( !n ) return ++r;
					}
					xstd::error( "CodeView is unbalanced." );
				};

				// If function type:
				//
				switch ( it->first->kind )
				{
					case S_GPROC32:
					case S_LPROC32:
					case S_LPROC32_ID:
					case S_GPROC32_ID:
					{
						// Find the function.
						//
						auto rec = ( const PROCSYM32* ) it->first->data();
						auto rel = it->second->find_reloc( &rec->off );
						if ( !rel || !rel->ref_symbol->is_defined() ) break;

						// Create or get the routine entry.
						//
						auto& routine = rel->ref_symbol->scn->meta.routines[ rel->ref_symbol->value ];
						fassert( !routine.code_length_sy );
						routine.code_length_sy = rec->len;

						// Iterate the range for inlinee sites.
						//
						auto end= get_end();
						size_t inlinee_depth = 0;
						for ( auto& [sym, dsec] : std::span( it + 1, end + 0 ) )
						{
							if ( sym->kind == S_INLINESITE ||
								 sym->kind == S_INLINESITE2 )
								inlinee_depth++;
							if ( sym->kind == S_INLINESITE_END )
								inlinee_depth--;

							if ( sym->kind == S_INLINESITE )
							{
								INLINESITESYM* is = ( INLINESITESYM* ) sym;

								// Get the name of the inlined function.
								//
								dbi::tpi_record* inlinee_rec = nullptr;
								if ( type_records.size() > ( is->inlinee - CV_FIRST_NONPRIM ) )
									inlinee_rec = type_records[ is->inlinee - CV_FIRST_NONPRIM ];

								std::string inlinee_name = {};
								switch ( inlinee_rec ? inlinee_rec->kind : 0 )
								{
									case LF_FUNC_ID:
										inlinee_name = ( char* ) ( ( lfFuncId* ) inlinee_rec->data() )->name;
										break;
									case LF_MFUNC_ID:
									{
										lfMFuncId* fn = ( ( lfMFuncId* ) inlinee_rec->data() );
										inlinee_name = ( char* ) fn->name;
										if ( fn->parentType > CV_FIRST_NONPRIM )
										{
											lfStructure* cl = ( ( lfStructure* ) type_records[ fn->parentType - CV_FIRST_NONPRIM ]->data() );
											auto* p = ( char* ) cl->data;
											dbi::read_numeric( p );
											inlinee_name = p + std::string{ "::" } + inlinee_name;
										}
										break;
									}
									default:
										xstd::warning( "Unknown function leaf %x in inlinesite symbol.", inlinee_rec ? inlinee_rec->kind : 0 );
										goto __fail;
								}

								// Decompress binary annotations.
								//
								uint8_t* beg = is->binaryAnnotations;
								uint8_t* end = is->binaryAnnotations + sym->length() - offsetof( INLINESITESYM, binaryAnnotations );
								std::vector<uint32_t> annotations;
								for ( auto it = beg; it != end; )
									annotations.emplace_back( CodeViewInfo::CVUncompressData( it ) );

								// Get inlinee information and start iterating the binary annotation.
								//
								auto& ilinfo = inlinee_lines[ is->inlinee ];

								size_t code_offset = 0;
								size_t line_offset = ilinfo.sourceLineNum;
								uint32_t file_id = ilinfo.fileId;
								struct tmp_line
								{
									size_t code_offset;
									size_t code_length;
								};
								std::map<size_t, tmp_line> info;

								auto flush_queue = [ &, first = true ] () mutable
								{
									// Remove the first line entry from the inlinee, its the fake prolougue scope.
									//
									if ( first && !info.empty() )
									{
										info.erase( info.begin() );
										first = false;
									}

									// Append the information to the routine.
									//
									for ( auto& [line, code] : info )
									{
										auto& entry = routine.lines[ code.code_offset ].emplace_back();
										entry.file_id = file_id;
										entry.line = line;
										entry.length = code.code_length;
										entry.depth = inlinee_depth;
										entry.inlinee_name = inlinee_name;
									}
								};

								for ( size_t n = 0; n != annotations.size(); n++ )
								{
									auto op = ( CodeViewInfo::BinaryAnnotationOpcode ) annotations[ n ];
									if ( op == CodeViewInfo::BA_OP_Invalid )
										continue;

									switch ( op )
									{
										case CodeViewInfo::BA_OP_ChangeFile:
										{
											flush_queue();
											file_id = annotations[ n + 1 ];
											break;
										}
										case CodeViewInfo::BA_OP_ChangeCodeLength:
										{
											info[ line_offset ].code_length = annotations[ n + 1 ];
											//xstd::log( "{s} code +0x%x, line +%d | len = 0x%x\n", code_offset, line_offset, annotations[ n + 1 ] );
											break;
										}
										case CodeViewInfo::BA_OP_ChangeCodeOffset:
										{
											code_offset += annotations[ n + 1 ];
											info[ line_offset ].code_offset = code_offset;
											//xstd::log( "{o} code +0x%x, line +%d\n", code_offset, line_offset );
											break;
										}
										case CodeViewInfo::BA_OP_ChangeCodeLengthAndCodeOffset:
										{

											info[ line_offset ].code_length = annotations[ n + 1 ];
											code_offset += annotations[ n + 1 ];
											info[ line_offset ].code_offset = code_offset;
											//xstd::log( "{c} code +0x%x, line +%d\n", code_offset, line_offset );
											break;
										}
										case CodeViewInfo::BA_OP_ChangeCodeOffsetAndLineOffset:
										{
											int32_t line_delta = CodeViewInfo::DecodeSignedInt32( annotations[ n + 1 ] >> 4 );
											uint32_t code_delta = ( uint32_t ) ( annotations[ n + 1 ] & 0xF );

											info[ line_offset ].code_length = code_delta;
											line_offset += line_delta;
											code_offset += code_delta;
											info[ line_offset ].code_offset = code_offset;

											//xstd::log( "{b} code +0x%x, line +%d\n", code_offset, line_offset );
											break;
										}
										case CodeViewInfo::BA_OP_ChangeLineOffset:
										{
											line_offset += CodeViewInfo::DecodeSignedInt32( annotations[ n + 1 ] );
											//xstd::log( "{l} code +0x%x, line +%d\n", code_offset, line_offset );
											break;
										}
										default:
											xstd::warning( "Unknown line info opcode: %d", op );
											flush_queue();
											goto __fail;
									}
									n += CodeViewInfo::BinaryAnnotationInstructionOperandCount( op );
								}

								// Append the information to the routine.
								//
								flush_queue();
							}
						}
						__fail:
						it = end;
						continue;
					}

					case S_BLOCK32: // TODO:
					case S_SEPCODE:
					case S_THUNK32:
					default:
						break;
				}

				it = get_end();
			}

			// Start discarding sections.
			//
			object->discard_section_if( [ & ] ( const ref::strong_ptr<section>& scn )
			{
				// Discard without reading if dummy section.
				//
				if ( scn->is_symbol_table_dummy() ) return true;

				// If symbol table:
				//
				if ( scn->is_symbol_table() )
				{
					// Save the records into section metadata, and then discard it.
					//
					for ( auto it = scn->raw_data.data(); it < ( scn->raw_data.data() + scn->raw_data.size() - sizeof( sdk::symbol_table_header ) ); it++ )
					{
						// If magic is found:
						//
						auto* hdr = ( const sdk::symbol_table_header* ) it;
						if ( hdr->magic == SYM_TBL_MAGIC )
						{
							// Find the relocation, skip if invalid.
							//
							auto reloc = scn->find_reloc( &hdr->address );
							fassert( reloc && reloc->ref_symbol->is_defined() );

							// Create the symbol request.
							//
							section_metadata::symbol_request req = {};
							req.target = reloc->ref_symbol;
							req.offset = xstd::narrow_cast<uint32_t>( ( uint64_t ) ( hdr->address ) );

							std::string_view identifier = hdr->identifier;
							it += sizeof( sdk::symbol_table_header ) + identifier.size(); // +1 will skip the \x0
							if ( identifier[ 0 ] == '$' )
							{
								identifier.remove_prefix( 1 );

								size_t n = identifier.find( '$' );
								std::string_view hint = identifier.substr( n + 1 );
								identifier.remove_suffix( identifier.size() - n );

								req.type = section_metadata::symbol_request::symbol_information;
								req.encryption_key = hdr->encryption_key;
								req.id = { std::string( identifier ), std::string( hint ) };
							}
							else
							{
								size_t n = identifier.find( '.' );
								std::string_view field = identifier.substr( n + 1 );
								identifier.remove_suffix( identifier.size() - n );
								if ( field == "$" )
								{
									req.type = section_metadata::symbol_request::type_information;
									req.id[ 0 ] = std::string{ identifier };
								}
								else
								{
									req.type = section_metadata::symbol_request::field_information;
									req.id = { std::string( identifier ), std::string( field ) };
								}
								req.encryption_key = hdr->encryption_key;
							}

							// Save it in the related section.
							//
							reloc->ref_symbol->scn->meta.symbols.emplace_back( std::move( req ) );
						}
					}
					return true;
				}

				// If section type that is not accepted by this linker:
				//
				if ( scn->is_import_dir() || scn->is_export_dir() || scn->is_resource_dir() )
				{
					xstd::error( "Object has unexpected section: '%s'.", scn->name.c_str() );
					return true;
				}

				// If CRT section:
				//
				if ( scn->is_crt() )
				{
					fassert( scn->raw_data.size() == scn->relocs.size() * 8 );
					fassert( std::find_if( scn->raw_data.begin(), scn->raw_data.end(), [ ] ( uint8_t c ) { return c != 0; } ) == scn->raw_data.end() );

					if ( scn->is_cpp_init() || scn->is_c_init() )
					{
						for ( auto& reloc : scn->relocs )
							scn->owner->meta.initializers.emplace_back( reloc.ref_symbol );
					}
					else if ( scn->is_c_term() )
					{
						for ( auto& reloc : scn->relocs )
							scn->owner->meta.terminators.emplace_back( reloc.ref_symbol );
					}
					else if ( scn->is_c_pre_term() )
					{
						for ( auto& reloc : scn->relocs )
							scn->owner->meta.pre_terminators.emplace_back( reloc.ref_symbol );
					}
					else
					{
						xstd::warning( "Discarding likely critical section: '%s'.", scn->name.c_str() );
					}
					return true;
				}

				// If exception directory:
				//
				if ( scn->is_exception_info() )
				{
					fassert( ( scn->raw_data.size() % sizeof( win::runtime_function_t ) ) == 0 );
					size_t cnt = scn->raw_data.size() / sizeof( win::runtime_function_t );
					auto* entries = ( const win::runtime_function_t* ) scn->raw_data.data();
					for ( size_t n = 0; n != cnt; n++ )
					{
						// Get the function boundaries.
						//
						auto r1 = scn->find_reloc( &entries[ n ].rva_begin );
						fassert( r1 );
						auto r2 = scn->find_reloc( &entries[ n ].rva_end );
						fassert( r2 );
						if ( !r1->ref_symbol.alive() || !r2->ref_symbol.alive() )
							continue;

						// Skip if function sections are not enabled.
						//
						if ( r1->ref_symbol != r2->ref_symbol || entries[ n ].rva_begin )
							continue;

						// Resolve the function.
						//
						auto& routine = r1->ref_symbol->scn->meta.routines[ r1->ref_symbol->value ];
						fassert( !routine.code_length_uw );
						routine.code_length_uw = entries[ n ].rva_end;

						// Get the unwind opcodes.
						//
						auto ru = scn->find_reloc( &entries[ n ].rva_unwind_info );
						fassert( ru && ru->ref_symbol.alive() );
						auto* uw_info = ( const win::unwind_info_t* ) ( ru->ref_symbol->scn->raw_data.data() + ru->ref_symbol->value );

						// Process the unwind information slightly.
						//
						if ( uw_info->chained )
						{
							auto rtn_reloc = ru->ref_symbol->scn->find_reloc( &uw_info->chained_function_entry().rva_begin );
							fassert( rtn_reloc );

							// TODO: Remove me, if this hits after making sure logic is correct.
							xstd::error( "%s is chained to %s\n",
										 r1->ref_symbol->name,
										 rtn_reloc->ref_symbol->scn->relocs.front().ref_symbol->name );
							routine.chained_unwind = rtn_reloc->ref_symbol;
						}

						routine.unwind_codes = { uw_info->unwind_code, uw_info->unwind_code + uw_info->num_uw_codes };
						routine.size_prologue = uw_info->size_prologue;
						routine.frame_offset = uw_info->frame_offset;
						routine.frame_register = uw_info->frame_register;
						// TODO: Ex handler information!
					}
					return true;
				}
				return false;
			} );

			// CodeView information and CXX state tables go right to the garbage bin after this.
			//
			object->discard_section_if( [ & ] ( const ref::strong_ptr<section>& scn )
			{
				return scn->is_exception_data() || scn->is_debug_info();
			} );
		}
	}

	// Attempts to resolve every external symbol, returns a list of undefined names.
	//
	std::unordered_set<std::string> collection::resolve_all()
	{
		// For each relocation:
		//
		std::unordered_set<std::string> list_undef;
		for ( auto& obj : working_set )
		{
			for ( auto& scn : obj->sections )
			{
				for ( auto& reloc : scn->relocs )
				{
					auto& e = reloc.ref_symbol;

					// Skip if not undefined.
					//
					if ( !e->is_undefined() )
						continue;

					// If it is defined externally, swap it.
					//
					if ( auto i = require( e->name ) )
						reloc.ref_symbol = i;
					// Otherwise insert into undefined list.
					//
					else
						list_undef.emplace( e->name );
				}
			}
		}
		return list_undef;
	}
};
