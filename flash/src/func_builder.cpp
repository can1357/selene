#include <flash/func_builder.hpp>

namespace flash {
	xstd::result<std::vector<uint8_t>> func_builder::build( uint32_t entry ) {
		// Raise any deferred errors.
		//
		for ( auto& bb : basic_blocks ) {
			if ( auto res = bb->validate_for_codegen(); !res )
				return { std::move( res.status ) };
		}
		auto entry_block = find_block( entry );
		if ( !entry_block ) return xstd::exception( "No entry block specified." );

		// Sort the basic blocks topologically.
		//
		{
			for ( auto& bb : basic_blocks ) {
				if ( bb->successors.empty() ) {
					bb->temporary = basic_blocks.size() + 0x1000000 + bb->predecessors.size();
				} else {
					bb->temporary = basic_blocks.size();
				}
			}
			uintptr_t order = 0;
			entry_block->bfs( [&]( basic_block* bb ) {
				if ( !bb->successors.empty() )
					bb->temporary = ++order;
			} );
			entry_block->temporary = 0;
			std::sort( basic_blocks.begin(), basic_blocks.end(), []( auto& a, auto& b ) {
				return a->temporary < b->temporary;
			} );
		}

		// Prepare the result vector.
		//
		xstd::result<std::vector<uint8_t>> result;
		std::vector<uint8_t>& output = result.emplace();
		auto assemble_at = [ & ] <typename... Tx> ( size_t pos, xed::iclass_t icl, Tx&&... args ) {
			if ( auto res = xed::encode64( icl, std::forward<Tx>( args )... ).encode() ) {
				pos = std::min( pos, output.size() );
				output.insert_range( output.begin() + pos, *res );
			} else if ( !result.status.has_value() ) {
				result.status = xstd::exception( "Failed assembling %d: %s", icl, res.status.to_string().c_str() );
			}
		};
		auto assemble = [ & ] <typename... Tx> ( xed::iclass_t icl, Tx&&... args ) {
			if ( auto res = xed::encode64( icl, std::forward<Tx>( args )... ).encode() ) {
				output.append_range( *res );
			} else if ( !result.status.has_value() ) {
				result.status = xstd::exception( "Failed assembling %d: %s", icl, res.status.to_string().c_str() );
			}
		};
		auto load_argument = [&]( size_t i, auto&& dst, auto&& assembler ) {
			xed::reg src( xed::reg_t( XED_REG_XMM0 + ( i / 2 ) ) );
			switch ( dst.width() ) {
				case 1:
					return assembler( XED_ICLASS_VPEXTRB, dst, src, xed::imm0( ( i & 1 ) ? 8 : 0, 8 ) );
				case 2:
					return assembler( XED_ICLASS_VPEXTRW, dst, src, xed::imm0( ( i & 1 ) ? 4 : 0, 8 ) );
				case 4:
					if ( i & 1 )
						return assembler( XED_ICLASS_VPEXTRD, dst, src, xed::imm0( 2, 8 ) );
					else
						return assembler( XED_ICLASS_VMOVD, dst, src );
				default:
					if ( i & 1 )
						return assembler( XED_ICLASS_VPEXTRQ, dst, src, xed::imm0( 1, 8 ) );
					else
						return assembler( XED_ICLASS_VMOVQ, dst, src );
			}
		};

		// Allocate space for the stack used by the code itself.
		//
		int32_t sp_iterator = 0x20; // reserved space
		std::vector<std::tuple<int32_t, int32_t, int32_t>> stack_slots;
		std::vector<std::pair<int32_t, int32_t>> used_slots = {};
		for ( auto& bb : basic_blocks ) {
			bb->calc_stack_slots( used_slots );
		}
		for ( auto& [offset, size] : used_slots ) {
			stack_slots.emplace_back( offset, size, sp_iterator );
			sp_iterator += size;
		}
		sp_iterator = xstd::align_up( sp_iterator, 0x10 ) + 0x8;
		auto convert_slot = [&]( int32_t a, uint8_t width ) -> int32_t {
			for ( auto& [bmin, bmax, bcvt] : stack_slots )
				if ( bmin <= a && ( a + width ) <= bmax )
					return a - bmin + bcvt;
			unreachable();
		};

		// First pass: generate per-block code.
		// 
		xstd::small_vector<xed::reg_t, 3> temporal_regs_unalloc = {};
		xed::reg_t global_specials[ special_arg_count ] = { XED_REG_INVALID, XED_REG_INVALID };
		for ( auto& bb : basic_blocks ) {
			for ( auto& ins : bb->instructions ) {
				// Declare scope-local allocator.
				//
				xstd::small_vector<xed::reg_t, 4> filthy_regs; // sp+0,+8,+10,+18
				uint64_t local_alloc_mask = 0;
				xed::reg_t local_specials[ special_arg_count ] = { XED_REG_INVALID, XED_REG_INVALID };
				auto allocate_register = [&]( std::optional<special_arg> special ) -> xed::reg_t {
					if ( special ) {
						if ( global_specials[ *special ] ) return global_specials[ *special ];
						if ( local_specials[ *special ] ) return local_specials[ *special ];
					}

					// Try allocating a permanent register for specials.
					if ( special ) {
						auto reg = allocate_global_gpr();
						if ( reg == XED_REG_INVALID ) {
							if ( !temporal_regs_unalloc.empty() ) {
								reg = temporal_regs_unalloc.back();
								temporal_regs_unalloc.pop_back();
							}
						}
						if ( reg != XED_REG_INVALID ) {
							global_specials[ *special ] = reg;
							local_specials[ *special ] = reg;
							load_argument( *special, xed::reg{ reg }, assemble );
							return reg;
						}
					}

					// Try allocating from a write reg.
					//
					xed::reg_t reg = alloc_reg_with_mask( ins.reg_write_mask & ~( ins.reg_read_mask | local_alloc_mask ) );
					if ( reg != XED_REG_INVALID ) {
						local_alloc_mask |= make_reg_mask( reg );
						if ( special ) {
							load_argument( *special, xed::reg{ reg }, [&]( auto&&... args ) {
								bb->assemble( std::forward<decltype( args )>( args )... );
							} );
							local_specials[ *special ] = reg;
						}
						return reg;
					}

					// Finally, try allocating a temporal register for non-specials.
					if ( !special ) {
						for ( auto& tmp : temporal_regs_unalloc ) {
							if ( !( local_alloc_mask & make_reg_mask( tmp ) ) ) {
								local_alloc_mask |= make_reg_mask( tmp );
								return tmp;
							}
						}
						auto reg = allocate_global_gpr();
						if ( reg != XED_REG_INVALID ) {
							local_alloc_mask |= make_reg_mask( reg );
							temporal_regs_unalloc.push_back( reg );
							return reg;
						}
					}

					// Try allocating from literally anything else.
					//
					reg = alloc_reg_with_mask( ~( ins.reg_read_mask | ins.reg_write_mask | local_alloc_mask ) );
					if ( reg ) {
						local_alloc_mask |= make_reg_mask( reg );
						bb->assemble( XED_ICLASS_MOV, xed::mem( 64, XED_REG_RSP, xed::disp( filthy_regs.size() * 8 ) ), xed::reg{ reg } );
						filthy_regs.push_back( reg );
						if ( special ) {
							load_argument( *special, xed::reg{ reg }, [&]( auto&&... args ) {
								bb->assemble( std::forward<decltype( args )>( args )... );
							} );
							local_specials[ *special ] = reg;
						}
						return reg;
					}
					return XED_REG_INVALID;
				};

				// For each non-suppressed operand:
				//
				xed::encoding enc{ ins.dec };
				for ( const xed::operand* operand : enc.operands() )
				{
					if ( operand->is_suppressed() ) continue;

					auto operand_name = operand->name();
					switch ( operand_name )
					{
						case XED_OPERAND_REG0 ... XED_OPERAND_REG8:
							break;
						case XED_OPERAND_AGEN:
						case XED_OPERAND_MEM0 ... XED_OPERAND_MEM1:
						{
							size_t memop_idx = operand_name == XED_OPERAND_MEM1 ? 1 : 0;
							auto mem = enc.mem( memop_idx );

							// If stack offset:
							//
							if ( mem.base() == XED_REG_RSP )
							{
								// Convert the delta.
								//
								mem.set_disp( convert_slot( mem.disp().value(), mem.width() ) );
								enc.set_mem( memop_idx, mem );
							}
							// If image offset:
							//
							else if ( mem.base() == XED_REG_RIP )
							{
								// Adjust the operand.
								//
								xed::reg_t tmp_reg = allocate_register( special_arg_rip );
								if ( tmp_reg == XED_REG_INVALID )
									return xstd::exception( "Failed allocating register." );
								mem.set_base( tmp_reg );
								mem.set_disp( mem.disp().value() + ins.rva + ins.dec.length() );
								enc.set_mem( memop_idx, mem );
							}

							// If GS based:
							//
							if ( mem.seg() == XED_REG_GS )
							{
								xed::reg_t tmp_reg = allocate_register( special_arg_gsbase );
								if ( tmp_reg == XED_REG_INVALID )
									return xstd::exception( "Failed allocating register." );

								// opcode reg, gs:[...]
								// ->
								// opcode reg, [tmp2+...]
								if ( mem.index() == XED_REG_INVALID )
								{
									mem.set_seg( XED_REG_INVALID );
									mem.set_index( tmp_reg );
									mem.set_scale( 1 );
								}
								else if ( mem.base() == XED_REG_INVALID )
								{
									mem.set_seg( XED_REG_INVALID );
									mem.set_base( tmp_reg );
								}
								else
								{
									return xstd::exception( "Cannot translate gs offset." );
								}
								enc.set_mem( memop_idx, mem );
							}
							break;
						}
						default:
							break;
					}
				}

				// If this is a special move instruction:
				//
				if ( auto icl = enc.iclass(); icl == XED_ICLASS_KMOVB || icl == XED_ICLASS_KMOVW || icl == XED_ICLASS_KMOVD || icl == XED_ICLASS_KMOVQ ) {
					// Expecting:
					// kmovq rax,     k0
					// kmovd [rsp+0], k0
					auto src_op = enc.operand( 1 );
					auto src_reg = enc.reg( src_op->name() );
					if ( !( XED_REG_K0 <= src_reg && src_reg <= XED_REG_K7 ) ) {
						return xstd::exception( "Invalid k register." );
					}
					auto arg_id = size_t( src_reg - XED_REG_K0 );

					auto dst_op = enc.operand( 0 );
					if ( dst_op->name() == XED_OPERAND_MEM0 ) {
						auto dst = enc.mem( 0 );
						load_argument( arg_id, dst, [&]( auto&&... args ) {
							bb->assemble( std::forward<decltype( args )>( args )... );
						} );

						// If RIP and RVA is specified, we have to adjust the result.
						if ( arg_id == 0 && ins.rva && ins.rva != UINT32_MAX ) {
							bb->assemble( XED_ICLASS_ADD, dst, xed::imm0( ins.rva & 0x7fff'ffff ) );
						}
					} else {
						auto dst = xed::reg( enc.reg( 0 ) );
						load_argument( arg_id, dst, [&]( auto&&... args ) {
							bb->assemble( std::forward<decltype( args )>( args )... );
						} );

						// If RIP and RVA is specified, we have to adjust the result.
						if ( arg_id == 0 && ins.rva && ins.rva != UINT32_MAX ) {
							bb->assemble( XED_ICLASS_ADD, dst, xed::imm0( ins.rva & 0x7fff'ffff ) );
						}
					}
				} else {
					// Encode again.
					//
					auto res = enc.encode();
					if ( !res )
						return xstd::exception( "Failed re-encoding instruction [%s]: %s", ins.dec.to_string().c_str(), res.status.to_string().c_str() );
					bb->codegen.append_range( *res );
				}

				// Free the filthy regs.
				//
				for ( size_t i = 0; i != filthy_regs.size(); i++ ) {
					bb->assemble( XED_ICLASS_MOV, xed::reg{ filthy_regs[i] }, xed::mem( 64, XED_REG_RSP, xed::disp( i * 8 ) ) );
				}
			}
		}
		
		// Second pass: generate the control flow instructions.
		//
		for ( size_t i = 0; i != basic_blocks.size(); i++ ) {
			auto bb = basic_blocks[ i ].get();
			auto make_jmp = [&]( basic_block* target ) {
				auto next_bb = i == basic_blocks.size() - 1 ? nullptr : basic_blocks[ i + 1 ].get();
				if ( target == next_bb ) return; // Skip fallthroughs.
				bb->assemble( XED_ICLASS_JMP, xed::relbr( 0, 32 ) );
				bb->relocs.emplace_back( bb->codegen.size() - 4, target );
			};

			// Handle terminators.
			if ( bb->successors.size() == 0 ) {
				if ( bb->switch_reg != XED_REG_INVALID || bb->branch_type != XED_ICLASS_INVALID ) {
					bb->assemble( XED_ICLASS_XOR, xed::reg{ XED_REG_RAX }, xed::reg{ XED_REG_RAX } );
				}
				make_jmp( nullptr );
				continue;
			}

			// Handle regular branches.
			if ( bb->successors.size() == 1 ) {
				make_jmp( bb->successors[ 0 ] );
				continue;
			}

			// Handle switch statements.
			if ( bb->switch_reg != XED_REG_INVALID ) {
				for ( size_t i = 0; i != bb->successors.size(); i++ ) {
					if ( i == bb->successors.size() - 1 ) {
						make_jmp( bb->successors[ i ] );
					} else {
						bb->assemble( XED_ICLASS_CMP, xed::reg{ bb->switch_reg }, xed::imm0( i ) );
						bb->assemble( XED_ICLASS_JZ, xed::relbr( 0, 32 ) );
						bb->relocs.emplace_back( bb->codegen.size() - 4, bb->successors[ i ] );
					}
				}
				continue;
			}

			// Handle conditional branches.
			if ( bb->successors.size() != 2 ) {
				return xstd::exception( "Invalid number of successors, expected 2 for conditional branch." );
			} else if ( bb->branch_type == XED_ICLASS_INVALID ) {
				return xstd::exception( "Invalid branch type, expected JCC" );
			}

			bb->assemble( bb->branch_type, xed::relbr( 0, 32 ) );
			bb->relocs.emplace_back( bb->codegen.size() - 4, bb->successors[ 1 ] );
			make_jmp( bb->successors[ 0 ] );
		}
		
		// Third pass: generate prologue, copy each code, generate epilogue.
		//
		this->for_each_preserved( [&]( xed::reg reg ) {
			assemble_at( 0, XED_ICLASS_PUSH, reg );
		} );
		assemble_at( std::string::npos, XED_ICLASS_SUB, xed::reg( XED_REG_RSP ), xed::imm0( sp_iterator, 32 ) );
		for ( auto& bb : basic_blocks ) {
			if ( bb->codegen_error ) {
				return xstd::exception( std::move( bb->codegen_error ) );
			}
			bb->codegen_offset = output.size();
			output.append_range( bb->codegen );
		}
		size_t epilogue_offset = output.size();
		assemble_at( std::string::npos, XED_ICLASS_ADD, xed::reg( XED_REG_RSP ), xed::imm0( sp_iterator, 32 ) );
		this->for_each_preserved( [&]( xed::reg reg ) {
			assemble_at( std::string::npos, XED_ICLASS_POP, reg );
		} );
		output.push_back( 0xC3 ); // retn

		// Final pass: do relocations.
		//
		for ( auto& bb : basic_blocks ) {
			for ( auto& [offset, target] : bb->relocs ) {
				size_t real_offset = bb->codegen_offset + offset;
				size_t target_offset = target ? target->codegen_offset : epilogue_offset;
				int32_t delta = target_offset - real_offset - 4;
				*reinterpret_cast<int32_t*>( output.data() + real_offset ) = delta;
			}
		}

		// Handle deferred codegen errors.
		return result;
	}
}