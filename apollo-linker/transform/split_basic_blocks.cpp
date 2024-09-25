#include "split_basic_blocks.hpp"
#include <xedpp.hpp>
#include <xstd/algorithm.hpp>
#include <xstd/bitwise.hpp>

// Determines instruction types.
//
static bool is_terminating( const xed::decoding& ins )
{
	switch ( ins.iclass() )
	{
		case XED_ICLASS_UD2:      /*case XED_ICLASS_INT3:*/
		case XED_ICLASS_IRET:     case XED_ICLASS_IRETD:
		case XED_ICLASS_IRETQ:    case XED_ICLASS_RET_NEAR:
		case XED_ICLASS_RET_FAR:  case XED_ICLASS_JMP:
		case XED_ICLASS_JMP_FAR:
			return true;
		default:
			return false;
	}
}

// Adds relocations for intra-routine references using LEA or branches.
// - coff::reloc_type::rel_amd64_secrel7 is recycled to indicate 8-bit relocation.
//
static bool self_relocate_routine( const ref::strong_ptr<linker::section>& scn )
{
	// Helper to find or create a symbol.
	//
	auto find_or_create_label = [ ] ( const ref::strong_ptr<linker::section>& scn, size_t offset )
	{
		if ( auto it = xstd::find_if( scn->symbols, [ & ] ( auto& sym ) { return sym->value == offset; } ) )
		{
			return *it;
		}
		else
		{
			auto& psym = scn->symbols.emplace_back( ref::allocate<linker::symbol>() );
			psym->scn = scn;
			psym->value = offset;
			return psym;
		}
	};

	// Maps function entry [begin_offset, end_offset).
	//
	std::map<size_t, size_t> routine_entries;
	for ( auto& [off, rtn] : scn->meta.routines )
	{
		auto [it, inserted] = routine_entries.emplace( off, off );
		if ( !inserted )
			return false;

		size_t length = rtn.get_length();
		if ( !length )
			continue;
		it->second += length;
	}
	if ( routine_entries.empty() )
		routine_entries.emplace( 0, scn->raw_data.size() );

	// For each routine:
	//
	for ( auto& [rtn_begin, rtn_end] : routine_entries )
	{
		// Recursively discover entry points, every symbol is considered one.
		//
		auto& entry_points = scn->meta.routines[ rtn_begin ].basic_blocks;
		fassert( entry_points.empty() );
		auto discover = [ &, rtn_end = rtn_end ] ( auto&& self, size_t off )  -> bool
		{
			// Skip if already in the list.
			//
			auto [it, inserted] = entry_points.emplace( off, linker::section_metadata::basic_block_entry{} );
			if ( !inserted ) return true;

			// Diassemble every instruction.
			//
			size_t lim = std::next( it ) == entry_points.end() ? rtn_end : std::next( it )->first;
			if ( off >= lim )
			{
				xstd::warning( "Routine jumping outside of boundaries +0x%x, %s { %s }\n", off, *scn, scn->symbols.front()->to_string() );
				return false;
			}

			while ( off < lim )
			{
				// Decode the instruction.
				//
				auto ins = xed::decode64( scn->raw_data.data() + off, lim - off );
				if ( !ins )
				{
					xstd::warning( "Failed decoding instruction +0x%x from %s { %s }\n", off, *scn, scn->symbols.front()->to_string() );
					return false;
				}
				off += ins->length();

				// Handles displacement.
				//
				auto handle_disp = [ & ] ( int64_t disp, size_t width, size_t rel_off = 0 ) -> std::optional<size_t>
				{
					if ( !width ) return std::nullopt;

					// If it's already relocated just return.
					//
					if ( auto reloc = scn->find_reloc( off - rel_off - width ) )
					{
						if ( !reloc->ref_symbol.alive() || reloc->ref_symbol->scn != scn )
							return std::nullopt;

						switch ( reloc->type )
						{
							case coff::rel_amd64_rel32:
							case coff::rel_amd64_rel32_1:
							case coff::rel_amd64_rel32_2:
							case coff::rel_amd64_rel32_3:
							case coff::rel_amd64_rel32_4:
							case coff::rel_amd64_rel32_5:
							{
								size_t distance = reloc->type - coff::rel_amd64_rel32;
								ptrdiff_t rel = reloc->ref_symbol->value - ( reloc->offset + distance + 4 );
								return { off + disp + rel };
							}
							default:
								return std::nullopt;
						}
					}
					// Otherwise add a relocation entry. 
					//
					else
					{
						ref::strong_ptr<linker::symbol> sym = find_or_create_label( scn, off + disp );

						// Add a relocation.
						//
						auto& r = scn->relocs.emplace_back();
						r.offset = off - rel_off - width;
						r.ref_symbol = sym;
						switch ( width )
						{
							case 1:
							{
								if ( rel_off )
									xstd::error( "8-bit displacement is not the last byte, but %d'th.", rel_off );
								r.type = coff::rel_amd64_secrel7;
								break;
							}
							case 4:
							{
								fassert( rel_off <= 5 );
								r.type = ( coff::reloc_type ) ( coff::rel_amd64_rel32 + rel_off );
								break;
							}
							default: unreachable();
						}
						memset( scn->raw_data.data() + off - rel_off - width, 0, width );
						return { off + disp };
					}
				};

				// If referencing a label:
				//
				if ( ins->iclass() == XED_ICLASS_LEA )
				{
					auto mem = ins->mem( 0 );
					if ( mem.base() == XED_REG_RIP ) {
						// External reference?:
						//
						if ( auto* ext_ref = scn->find_reloc( off - 4 ) ) {
							// Valid RO section:
							//
							if ( auto s = ext_ref->ref_symbol->scn.lock(); s && !s->characteristics.mem_execute && !s->characteristics.mem_write ) {
								// Jump table sized:
								//
								if ( s->raw_data.size() == s->relocs.size() * 8 ) {
									//xstd::inspect( ins, ext_ref->to_string(), s->to_string() );
									//xstd::inspect( s->raw_data.size(), s->relocs.size() );
									for ( auto& reloc : s->relocs ) {
										// Self ref:
										//
										if ( reloc.ref_symbol->scn == scn && !reloc.ref_symbol->value ) {
											uint64_t& offset = *(uint64_t*) &s->raw_data[ reloc.offset ];
											if ( offset ) {
												//xstd::inspect( reloc );
												auto lab = find_or_create_label( scn, offset );
												reloc.ref_symbol = lab;
												offset = 0;
												self( self, offset );
											}
										}
									}
								}
							}
						} else {
							if ( auto d = handle_disp( mem.disp().value(), mem.disp().width() ) )
								self( self, *d );
						}
					}
				}
				// If conditional jump, recurse into both possibilities, break.
				//
				else if ( xed::is_jcc( ins->iclass() ) )
				{
					// Create a symbol for the block taken if CC is not met and recurse.
					//
					auto it = xstd::find_if( scn->symbols, [ & ] ( auto& sym ) { return sym->value == ( off ); } );
					if ( !it )
					{
						auto& psym = scn->symbols.emplace_back( ref::allocate<linker::symbol>() );
						psym->scn = scn;
						psym->value = off;
					}
					if ( auto d = handle_disp( ins->relbr().value(), ins->relbr().width() ) )
						self( self, *d );
					self( self, off );
					break;
				}
				// If absolute jump, recurse into destination, break.
				//
				else if ( ins->iclass() == XED_ICLASS_JMP )
				{
					if ( ins->is_relative() ) {
						if ( auto d = handle_disp( ins->relbr().value(), ins->relbr().width() ) )
							self( self, *d );
					}
					break;
				}
				// If end of control flow, break.
				//
				else if ( is_terminating( *ins ) )
				{
					break;
				}
			}

			// Finalize the block by writing the length.
			//
			it->second.end_off = off;
			return true;
		};
		if ( !discover( discover, rtn_begin ) )
		{
			entry_points.clear();
			return false;
		}
		for ( auto& sym : xstd::make_copy( scn->symbols ) )
		{
			if ( rtn_begin < sym->value && sym->value < rtn_end )
			{
				if ( !discover( discover, sym->value ) )
				{
					entry_points.clear();
					return false;
				}
			}
		}

		// Normalize ranges and determine coverage.
		//
		size_t missing = 0;
		for ( auto it = entry_points.begin(); it != entry_points.end(); ++it )
		{
			size_t vprev = it == entry_points.begin() ? rtn_begin : std::prev( it )->second.end_off;
			size_t vnext = std::next( it ) == entry_points.end() ? rtn_end : std::next( it )->first;

			auto is_pad = [ & ] ( size_t from, size_t to )
			{
				// 0 filled?
				if ( std::count( scn->raw_data.data() + from, scn->raw_data.data() + to, 0 ) == ( to - from ) )
					return true;

				// nop / int3 filled?
				auto vec = xed::decode64_n( scn->raw_data.data() + from, to - from );
				for ( auto& ins : vec )
				{
					from += ins.length();
					if ( ins.is_nop() || ins.iclass() == XED_ICLASS_INT3 )
						continue;
					return false;
				}
				return from == to;
			};

			if ( it == entry_points.begin() )
			{
				if ( it->first > vprev && !is_pad( vprev, it->first ) )
					xstd::warning( "%s:[%x, %x) is missing from previous block.", *scn->symbols.front(), vprev, it->first ), missing += vnext - it->second.end_off;
			}
			else
			{
				if ( it->second.end_off < vnext && !is_pad( it->second.end_off, vnext ) )
					xstd::warning( "%s:[%x, %x) is missing from current block.", *scn->symbols.front(), it->second.end_off, vnext ), missing += vnext - it->second.end_off;
			}
			it->second.end_off = std::min( vnext, it->second.end_off );
		}

		// If any block is missing, skip.
		//
		if ( missing )
		{
			entry_points.clear();
			return false;
		}
	}
	return true;
}

// Splitting basic blocks.
//
static void split_bb( linker::collection& col, const ref::strong_ptr<linker::section>& scn )
{
	for ( auto& [rtn_begin, rtn] : scn->meta.routines )
	{
		// Set the flag.
		//
		rtn.is_split = true;

		// Create a new section for each basic block.
		//
		size_t align = scn->characteristics.get_alignment();
		for ( auto& [bb_begin, bb] : rtn.basic_blocks )
		{
			auto& bbscn = scn->owner->sections.emplace_back( ref::allocate<linker::section>() );
			bb.scn = bbscn;
			bbscn->characteristics.mem_execute = true;
			bbscn->characteristics.cnt_code = true;
			bbscn->owner = scn->owner;
			bbscn->name = ".bb";

			if ( align >= 32 && xstd::is_aligned( bb_begin, 32 ) )
				bbscn->characteristics.set_alignment( 32 );
			else if ( align >= 16 && xstd::is_aligned( bb_begin, 16 ) )
				bbscn->characteristics.set_alignment( 16 );
			else if ( align >= 8 && xstd::is_aligned( bb_begin, 8 ) )
				bbscn->characteristics.set_alignment( 8 );
			else
				bbscn->characteristics.set_alignment( 1 );
		}

		// For each basic block in reverse:
		//
		for ( auto it = rtn.basic_blocks.rbegin(); it != rtn.basic_blocks.rend(); ++it )
		{
			auto& nscn = it->second.scn;

			// Move the data, symbols and relocations.
			//
			nscn->raw_data = {
				scn->raw_data.data() + it->first,
				scn->raw_data.data() + it->second.end_off,
			};
			std::erase_if( scn->symbols, [ & ] ( ref::strong_ptr<linker::symbol>& sym )
			{
				if ( sym->value < it->first )
					return false;
				if ( sym->value >= it->second.end_off )
				{
					sym->value -= ( it->second.end_off - it->first );
					return false;
				}

				auto& nsym = nscn->symbols.emplace_back( std::move( sym ) );
				nsym->value -= it->first;
				nsym->scn = nscn;
				return true;
			} );
			std::erase_if( scn->relocs, [ & ] ( linker::relocation& reloc )
			{
				if ( reloc.offset < it->first )
					return false;
				if ( reloc.offset >= it->second.end_off )
				{
					reloc.offset -= ( it->second.end_off - it->first );
					return false;
				}

				auto& nreloc = nscn->relocs.emplace_back( std::move( reloc ) );
				nreloc.offset -= it->first;
				return true;
			} );
			scn->raw_data.erase(
				scn->raw_data.begin() + it->first,
				scn->raw_data.begin() + it->second.end_off
			);

			// If last relocation is secrel7 indicating EB [jmp] or 7x [jcc], extend the relocation.
			//
			bool terminated = false;
			xstd::sort( nscn->relocs, [ ] ( auto&& r1, auto&& r2 ) { return r1.offset < r2.offset; } );
			if ( !nscn->relocs.empty() && nscn->relocs.back().type == coff::reloc_type::rel_amd64_secrel7 )
			{
				uint8_t opcode = nscn->raw_data[ nscn->raw_data.size() - 2 ];
				int8_t disp = nscn->raw_data[ nscn->raw_data.size() - 1 ];

				if ( opcode == 0xEB )
				{
					nscn->raw_data.resize( nscn->raw_data.size() - ( 1 + 1 ) + ( 1 + 4 ) );
					auto* back = nscn->raw_data.data() + nscn->raw_data.size();

					back[ -5 ] = 0xE9;
					*( int32_t* ) &back[ -4 ] = disp;
					terminated = true;

					nscn->relocs.back().type = coff::reloc_type::rel_amd64_rel32;
				}
				else if ( ( opcode & 0xF0 ) == 0x70 )
				{
					nscn->raw_data.resize( nscn->raw_data.size() - ( 1 + 1 ) + ( 2 + 4 ) );
					auto* back = nscn->raw_data.data() + nscn->raw_data.size();

					back[ -6 ] = 0x0F;
					back[ -5 ] = 0x80 | ( opcode & 0xF );
					*( int32_t* ) &back[ -4 ] = disp;

					nscn->relocs.back().offset++;
					nscn->relocs.back().type = coff::reloc_type::rel_amd64_rel32;
				}
				else
				{
					xstd::error( "unknown 8-bit relocated opcode: %02x\n", opcode );
				}
			}
			else
			{
				auto ins = xed::decode64_n( nscn->raw_data );
				terminated = is_terminating( ins.back() );
			}

			// If block is not terminated, add a jump to the next one.
			//
			if ( !terminated && it != rtn.basic_blocks.rbegin() )
			{
				auto next = xstd::find_if( std::prev( it )->second.scn->symbols, [ ] ( auto& sym ) { return sym->value == 0; } );
				fassert( next );

				nscn->raw_data.resize( nscn->raw_data.size() + 5 );
				auto* back = nscn->raw_data.data() + nscn->raw_data.size();

				back[ -5 ] = 0xE9;
				*( int32_t* ) &back[ -4 ] = 0;

				auto& reloc = nscn->relocs.emplace_back();
				reloc.ref_symbol = *next;
				reloc.offset = nscn->raw_data.size() - 4;
				reloc.type = coff::reloc_type::rel_amd64_rel32;
			}
		}
	}
}

// Splits basic blocks in every section and makes sure all internal relocations are exposed.
//
void linker::transform::split_basic_blocks( collection& col, size_t max_align )
{
	// For each section in the object:
	//
	auto& excluded = col.attributes.find( "no_split" );
	for ( auto& obj : col.working_set )
	{
		// No basic block splitting if builtin provider.
		//
		if ( obj->is_builtin_provider )
			continue;

		for ( auto& scn : xstd::make_copy( obj->sections ) )
		{
			// If no-split is set, skip.
			//
			bool no_split = false;
			for ( auto& sym : scn->symbols )
				no_split |= excluded.contains( sym->name );
			if ( no_split ) continue;

			// If code section:
			//
			if ( scn->characteristics.cnt_code )
			{
				// Collect significant symbols.
				//
				auto significant_symbols = xstd::collect(
					scn->symbols,
					[ ] ( auto& v ) { return v->storage_class == coff::storage_class_id::public_symbol || v->storage_class == coff::storage_class_id::private_symbol; }
				);

				// If there is a single significant symbol or if there is a single function symbol, consider it a function.
				//
				size_t func_cnt = 0;
				for ( auto& sym : significant_symbols )
					func_cnt += sym->derived_type == coff::derived_type_id::function;
				if ( significant_symbols.size() == 1 || func_cnt == 1 )
				{
					// Make sure it is self-relocating:
					//
					if ( !self_relocate_routine( scn ) )
						continue;

					// Adjust the alignment.
					//
					scn->characteristics.set_alignment( std::min( max_align, scn->characteristics.get_alignment() ) );

					// If we're not in debug mode, split basic blocks.
					//
					if ( !col.is_debug() )
						split_bb( col, scn );
				}
			}
		}
	}
}
