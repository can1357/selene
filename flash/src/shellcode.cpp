#include <flash/shellcode.hpp>
#include <flash/image.hpp>
#include <xstd/robin_hood.hpp>

namespace flash
{
	// Returns true if the instruction is a recognized arithmetic/bitwise/memory instruction.
	//
	static constexpr bool is_iclass_recognized( xed::iclass_t icl )
	{
		switch ( icl )
		{
			// NOPs.
			//
			case XED_ICLASS_NOP ... XED_ICLASS_NOP9:

			// Data transfer.
			//
			case XED_ICLASS_MOV:
			case XED_ICLASS_MOVBE:
			case XED_ICLASS_MOVZX:
			case XED_ICLASS_MOVSX:
			case XED_ICLASS_MOVSXD:
			case XED_ICLASS_MOVSW:
			case XED_ICLASS_MOVSD:
			case XED_ICLASS_MOVSQ:
			case XED_ICLASS_XCHG:
			case XED_ICLASS_CMPXCHG:
			case XED_ICLASS_SETZ:
			case XED_ICLASS_SETB ... XED_ICLASS_SETS:
			case XED_ICLASS_CMOVB ... XED_ICLASS_CMOVZ:

			// Bitwise.
			//
			case XED_ICLASS_NOT:
			case XED_ICLASS_AND:
			case XED_ICLASS_TEST:
			case XED_ICLASS_ANDN:
			case XED_ICLASS_OR:
			case XED_ICLASS_XOR:
			case XED_ICLASS_SHL:
			case XED_ICLASS_SHR:
			case XED_ICLASS_SAR:
			case XED_ICLASS_ROL:
			case XED_ICLASS_ROR:
			case XED_ICLASS_RCL:
			case XED_ICLASS_RCR:
			case XED_ICLASS_SHLD:
			case XED_ICLASS_SHRD:
			case XED_ICLASS_SHLX:
			case XED_ICLASS_SHRX:
			case XED_ICLASS_BSF:
			case XED_ICLASS_BSR:
			case XED_ICLASS_TZCNT:
			case XED_ICLASS_LZCNT:
			case XED_ICLASS_BSWAP:
			case XED_ICLASS_BT:
			case XED_ICLASS_BTC:
			case XED_ICLASS_BTR:
			case XED_ICLASS_BTS:
			case XED_ICLASS_POPCNT:
			case XED_ICLASS_BZHI:
			case XED_ICLASS_PEXT:
			case XED_ICLASS_PDEP:

			// Arithmetic.
			//
			case XED_ICLASS_XADD:
			case XED_ICLASS_ADC:
			case XED_ICLASS_ADCX:
			case XED_ICLASS_ADOX:
			case XED_ICLASS_SBB:
			case XED_ICLASS_INC:
			case XED_ICLASS_DEC:
			case XED_ICLASS_NEG:
			case XED_ICLASS_SUB:
			case XED_ICLASS_ADD:
			case XED_ICLASS_IMUL:
			case XED_ICLASS_MUL:
			case XED_ICLASS_IDIV:
			case XED_ICLASS_MULX:
			case XED_ICLASS_DIV:
			case XED_ICLASS_CMP:
			case XED_ICLASS_CBW:
			case XED_ICLASS_CWDE:
			case XED_ICLASS_CDQE:
			case XED_ICLASS_CWD:
			case XED_ICLASS_CDQ:
			case XED_ICLASS_CQO:

			// Misc.
			//
			case XED_ICLASS_XLAT:
			case XED_ICLASS_LEA:
			case XED_ICLASS_CLC:
			case XED_ICLASS_CLD:
			case XED_ICLASS_CMC:
			case XED_ICLASS_STC:
			case XED_ICLASS_STD:
			case XED_ICLASS_CRC32:
			case XED_ICLASS_LAHF:
			case XED_ICLASS_SAHF:

			// Special.
			//
			case XED_ICLASS_KMOVB:
			case XED_ICLASS_KMOVW:
			case XED_ICLASS_KMOVD:
			case XED_ICLASS_KMOVQ:

			// Atomic.
			//
			case XED_ICLASS_CMPXCHG_LOCK:
			case XED_ICLASS_XADD_LOCK:
			case XED_ICLASS_XOR_LOCK:
			case XED_ICLASS_OR_LOCK:
			case XED_ICLASS_AND_LOCK:
			case XED_ICLASS_SUB_LOCK:
			case XED_ICLASS_ADD_LOCK:
			case XED_ICLASS_DEC_LOCK:
			case XED_ICLASS_INC_LOCK:
			case XED_ICLASS_NEG_LOCK:
			case XED_ICLASS_NOT_LOCK:
			case XED_ICLASS_SBB_LOCK:
			case XED_ICLASS_ADC_LOCK:
			case XED_ICLASS_BTC_LOCK:
			case XED_ICLASS_BTR_LOCK:
			case XED_ICLASS_BTS_LOCK:
				return true;

			default:
				return false;
		}
	}

	// Returns a simple pair <read, written> given an operand action.
	//
	static constexpr std::pair<bool, bool> action_to_rw( xed::op_action_t action )
	{
		switch ( action )
		{
			case XED_OPERAND_ACTION_RCW:
			case XED_OPERAND_ACTION_CRW:
			case XED_OPERAND_ACTION_CW:
			case XED_OPERAND_ACTION_RW:  return { true, true };
			case XED_OPERAND_ACTION_CR:
			case XED_OPERAND_ACTION_R:   return { true, false };
			case XED_OPERAND_ACTION_W:   return { false, true };
			default:                     return { false, false };
		}
	}

	// Construction with analysis.
	//
	shellcode::instruction::instruction( uint32_t rva, const xed::decoding& dec ) : rva( rva ), dec( dec )
	{
		// Make sure the instruction is valid.
		//
		if ( !dec.inst() )
		{
			error = xstd::fmt::str( "Failed to decode instruction at %08x.", rva );
			return;
		}

		// Skip no-op.
		//
		if ( dec.is_nop() )
			return;
		if ( dec.iform() == XED_IFORM_MFENCE || 
			  dec.iform() == XED_IFORM_LFENCE ||
			  dec.iform() == XED_IFORM_SFENCE ||
			  dec.iform() == XED_IFORM_PAUSE ||
			  dec.iform() == XED_IFORM_SERIALIZE )
			return;

		// Assume conditional branches are not taken.
		//
		if ( xed::is_jcc( dec.iclass() ) )
			return;

		// Make sure the class is recognized.
		//
		if ( !is_iclass_recognized( dec.iclass() ) ) {
			error = xstd::fmt::str( "Appending unrecognized instruction at %08x: %s.", rva, dec );
		}

		// Fill the mask.
		//
		auto on_reg_action = [ & ] ( xed::reg_t reg, xed::op_action_t action )
		{
			if ( reg == XED_REG_INVALID ) return;
			if ( reg == XED_REG_RSP ) return;
			if ( reg == XED_REG_RIP ) return;
			if ( reg == XED_REG_RFLAGS ) return;

			auto [read, write] = action_to_rw( action );
			auto mask = make_reg_mask( reg );
			reg_read_mask |=  read ? mask : 0;
			reg_write_mask |= write ? mask : 0;
		};
		for ( const xed::operand* op : dec.operands() )
		{
			auto operand_name = op->name();
			switch ( operand_name )
			{
				case XED_OPERAND_REG0 ... XED_OPERAND_REG8:
				{
					// Accessing RSP directly is not allowed.
					//
					xed::reg_t reg = dec.reg( operand_name );
					if ( xed::is_sp( reg ) )
						error += xstd::fmt::str( "Instruction uses RSP as GPR at %08x: %s.", rva, dec );

					on_reg_action( reg, op->action() );
					break;
				}
				case XED_OPERAND_AGEN:
				case XED_OPERAND_MEM0 ... XED_OPERAND_MEM1:
				{
					auto [read, write] = action_to_rw( op->action() );
					mem_read  |= read;
					mem_write |= write;

					size_t memop_idx = operand_name == XED_OPERAND_MEM1 ? 1 : 0;
					xed::reg_t base_reg =  dec.mem_base( memop_idx );
					xed::reg_t index_reg = dec.mem_index( memop_idx );

					on_reg_action( base_reg,  XED_OPERAND_ACTION_R );
					on_reg_action( index_reg, XED_OPERAND_ACTION_R );

					// If base register is RSP:
					//
					if ( base_reg == XED_REG_RSP )
					{
						// AGEN using RSP is not allowed.
						//
						if ( dec.iclass() == XED_ICLASS_LEA )
							error += xstd::fmt::str( "Instruction uses RSP as GPR at %08x: %s.", rva, dec );

						// Accessing RSP at a dynamic offset is not allowed.
						//
						if ( index_reg != XED_REG_INVALID )
							error += xstd::fmt::str( "Instruction uses dynamic offset to RSP at %08x: %s.", rva, dec );

						// Update SP min-max.
						//
						stack_min = dec.mem_disp( memop_idx ).value();
						stack_max = stack_min + dec.mem_width( memop_idx );
					}
					break;
				}
				default:
					break;
			}
		}

		// Special handling.
		//
		if ( dec.iclass() == XED_ICLASS_XOR && dec.reg( 0 ) == dec.reg( 1 ) ) {
			reg_read_mask = 0;
		}
	}

	// Pushes the given range of instructions.
	//
	void shellcode::push_at( image* img, size_t idx, uint32_t rva_0, uint32_t rva_1 )
	{
		idx = std::min( idx, instructions.size() );
		rva_1 = std::min( (uint32_t) img->data.size(), rva_1 );
		while ( rva_0 < rva_1 ) {
			auto ins = xed::decode64( img->data.data() + rva_0, rva_1 - rva_0 );
			if ( !ins ) {
				ins.emplace();
			}
			instructions.emplace( instructions.begin() + idx++, rva_0, *ins );
			rva_0 += ins->length();
		}
	}
	void shellcode::push_back( image* img, uint32_t rva_0, uint32_t rva_1 )
	{
		return push_at( img, std::string::npos, rva_0, rva_1 );
	}
	void shellcode::push_front( image* img, uint32_t rva_0, uint32_t rva_1 )
	{
		return push_at( img, 0, rva_0, rva_1 );
	}
	int64_t shellcode::repair_pushes() {
		int64_t sp_delta = 0;

		auto nop = xed::decode64( { 0x90 } ).value_or( {} );
		for ( auto& ins : std::views::reverse( instructions ) ) {
			if ( ins.dec.iclass() == XED_ICLASS_PUSH || ins.dec.iclass() == XED_ICLASS_POP ) {
				int real_size;
				xed::encoder_operand_t op;
				if ( ins.dec.operand( 0 )->name() == XED_OPERAND_REG0 ) {
					auto reg = ins.dec.reg( 0 );
					if ( reg == XED_REG_RSP ) {
						continue; // No fix.
					}
					op = xed::reg( reg );
					real_size = xed::register_width( reg );
				} else if ( ins.dec.operand( 0 )->name() == XED_OPERAND_IMM0 ) {
					op = ins.dec.imm0();
					real_size = op.width_bits() / 8;
				} else {
					op = ins.dec.mem( 0 );
					real_size = op.width_bits() / 8;
				}

				int size = 8;
				xed::iclass_t icl = XED_ICLASS_MOV;
				if ( ins.dec.eff_op_width_bits() == 16 ) size = 2;
				if ( size > real_size ) icl = XED_ICLASS_MOVZX;

				xed::encoding enc;
				int64_t local_delta;
				if ( ins.dec.iclass() == XED_ICLASS_PUSH ) {
					enc = xed::encode64( icl, xed::mem( size * 8, XED_REG_RSP, sp_delta ), op );
					local_delta = size;
				} else {
					enc = xed::encode64( icl,  op, xed::mem( size * 8, XED_REG_RSP, sp_delta - size ) );
					local_delta = -size;
				}
				if ( auto res = enc.encode(); res ) {
					if ( auto dec = xed::decode64( res->data(), res->size() ); dec ) {
						ins = instruction{ ins.rva, *dec };
						sp_delta += local_delta;
					}
				}
			} else if ( ins.dec.iclass() == XED_ICLASS_ADD && ins.dec.reg( 0 ) == XED_REG_RSP && ins.dec.operand( 1 )->name() == XED_OPERAND_IMM0 ) {
				sp_delta -= ins.dec.imm0().value();
				ins = instruction{ ins.rva, nop };
			} else if ( ins.dec.iclass() == XED_ICLASS_SUB && ins.dec.reg( 0 ) == XED_REG_RSP && ins.dec.operand( 1 )->name() == XED_OPERAND_IMM0 ) {
				sp_delta += ins.dec.imm0().value();
				ins = instruction{ ins.rva, nop };
			} else if ( ins.stack_max != ins.stack_min ) {
				ins.stack_max += sp_delta;
				ins.stack_min += sp_delta;
				if ( ins.dec.mem_base( 0 ) == XED_REG_RSP ) {
					auto enc = xed::encoding{ ins.dec };
					enc.set_mem_disp( 0, enc.mem_disp( 0 ).value() + sp_delta );
					if ( auto res = enc.encode(); res ) {
						if ( auto dec = xed::decode64( res->data(), res->size() ); dec ) {
							ins = instruction{ ins.rva, *dec };
						}
					}
				}
			}
		}
		return sp_delta;
	}
	
	// Sets up the frame register as an alias to stack pointer.
	//
	void shellcode::setup_frame( xed::reg_t frame_reg, int32_t frame_offset ) {
		for ( auto& ins : instructions ) {
			if ( ins.mem_read || ins.mem_write ) {
				if ( ins.dec.mem_base( 0 ) == frame_reg ) {
					xed::encoding enc{ ins.dec };
					enc.set_mem_base( 0, XED_REG_RSP );
					enc.set_mem_disp( 0, enc.mem_disp( 0 ).value() + frame_offset );
					if ( auto res = enc.encode(); res ) {
						if ( auto dec = xed::decode64( res->data(), res->size() ); dec ) {
							ins = instruction{ ins.rva, *dec };
						}
					}
				}
			}
		}
	}

	// Returns a register mask for all used registers.
	//
	uint64_t shellcode::used_registers() const
	{
		uint64_t mask = 0;
		for ( auto& ins : instructions )
			mask |= ( ins.reg_read_mask | ins.reg_write_mask );
		return mask;
	}

	// Calculates stack slots used [min_offset, max_offset].
	//
	void shellcode::calc_stack_slots( std::vector<std::pair<int32_t, int32_t>>& list ) const
	{
		for ( auto& ins : instructions )
		{
			// Skip if instruction does not use the stack.
			//
			if ( ins.stack_min == ins.stack_max )
				continue;
			
			// Consume any overlapping entries.
			//
			int32_t amin = ins.stack_min;
			int32_t amax = ins.stack_max;
			std::erase_if( list, [ & ]( const std::pair<int32_t, int32_t>& slot )
			{
				auto& [bmin, bmax] = slot;

				// Skip if disjoint.
				//
				if ( amax <= bmin || amin >= bmax )
					return false;
				
				// Merge if not so.
				//
				amin = std::min( amin, bmin );
				amax = std::max( amax, bmax );
				return true;
			} );

			// Finally insert the entry.
			//
			list.emplace_back( amin, amax );
		}
	}

	// Performs register and stack analysis.
	//
	stack_analysis shellcode::analyze_stack() const {
		stack_analysis sa = {};
		for ( auto& arg : arguments ) {
			if ( !arg.stack_length )
				continue;
			for ( int32_t it = arg.stack_offset; it != ( arg.stack_offset + arg.stack_length ); it++ )
				sa.written.insert( it );
		}

		for ( auto& ins : instructions ) {
			if ( ins.stack_min == ins.stack_max )
				continue;
			for ( int32_t it = ins.stack_min; it != ins.stack_max; it++ ) {
				if ( ins.mem_read )
					sa.required.insert( it );
				if ( ins.mem_write )
					sa.written.insert( it );
			}
		}

		return sa;
	}
	register_analysis shellcode::analyze_registers() const {
		register_analysis ra = {};

		for ( auto& arg : arguments ) {
			if ( arg.stack_length )
				continue;
			ra.written |= ( 0b1111ull << ( arg.assigned_gpr * 4 ) );
		}

		for ( auto& ins : instructions ) {
			ra.required |= ins.reg_read_mask & ~ra.written;
			ra.written |= ins.reg_write_mask;
		}
		return ra;
	}

	// Runs basic dead code elimination given an optional result register and handling mode for side effects.
	//
	void shellcode::set_output( xed::reg_t reg, bool ignore_side_effects )
	{
		if ( output_reg ) return;
		output_reg.emplace( reg );
		uint64_t need_mask = make_reg_mask( reg );
		uint32_t needf_mask = 0;
		for ( auto& ins : std::views::reverse( instructions ) )
		{
			if ( !ins.dec.inst() )
				continue;

			uint32_t flagw = 0, flagr = 0;
			if ( auto* fi = ins.dec.flag_info() ) {
				flagw = fi->written.flat;
				flagr = fi->read.flat;
			}
			
			if ( !( need_mask & ins.reg_write_mask ) && ( ignore_side_effects || ins.is_pure() ) ) {
				if ( !( needf_mask & flagw ) ) {
					ins.rva = UINT32_MAX;
					continue;
				}
			}
		
			needf_mask &= ~flagw;
			needf_mask |= flagr;
			need_mask &= ~ins.reg_write_mask;
			need_mask |=  ins.reg_read_mask;
		}
		std::erase_if( instructions, [ ] ( auto& ins ) { return ins.rva == UINT32_MAX; } );
	}
	
	// Validates the state for codegen.
	//
	xstd::result<> shellcode::validate_for_codegen() const
	{
		// Validate the instruction stream.
		//
		for ( auto& ins : instructions )
			if ( !ins.error.empty() )
				return xstd::exception( ins.error.c_str() );

		// Validate the user promises.
		//
		for ( auto& pr : arguments )
		{
			if ( pr.stack_length )
			{
				if ( pr.stack_length != 1 &&
					  pr.stack_length != 2 &&
					  pr.stack_length != 4 &&
					  pr.stack_length != 8 )
				{
					return xstd::exception( "Invalid stack variable length %u.", ( uint32_t ) pr.stack_length );
				}
			}
			else if ( pr.assigned_gpr >= 16 )
			{
				return xstd::exception( "Invalid GPR %u.", ( uint32_t ) pr.assigned_gpr );
			}
		}

		// Make sure the output is set.
		//
		if ( !output_reg )
			return std::monostate{};

		// Make sure no undefined inputs are left.
		//
		auto regs = analyze_registers();
		if ( output_reg ) {
			auto mask = make_reg_mask( *output_reg );
			regs.required |= mask & ~regs.written;
		}
		for ( size_t i = 0; i != 16; i++ )
			if ( uint64_t use = ( ( regs.required >> ( i * 4 ) ) & 0b1111 ) )
				return xstd::exception( "Undefined required register %s(%llu).", xstd::name_enum( xed::reg_t( XED_REG_GPR64_FIRST + i ) ).c_str(), use );

		auto stack = analyze_stack();
		for ( int32_t off : stack.required ) {
			return xstd::exception( "Undefined required stack position: [rsp%s].", xstd::fmt::offset( off ).c_str() );
		}
		return std::monostate{};
	}

	// Gets the index of a specified RVA.
	//
	std::optional<size_t> shellcode::index_of( uint32_t rva ) const {
		for ( size_t i = 0; i != instructions.size(); i++ ) {
			if ( instructions[ i ].rva == rva ) return i;
		}
		return std::nullopt;
	}

	// Compares against another shellcode for equivalence.
	//
	bool shellcode::equivalent( const shellcode& other ) const {
		if ( instructions.size() != other.instructions.size() ) return false;
		for ( size_t i = 0; i != instructions.size(); i++ ) {
			if ( instructions[ i ] != other.instructions[ i ] ) return false;
		}
		return true;
	}

	// Optimizes for the result.
	//
	bool shellcode::optimize_for( uint64_t& required_registers, robin_hood::unordered_flat_set<int32_t>& required_stack_slots, uint32_t& required_flags, bool dry ) {
		constexpr uint32_t flags_mask = 0x8C5; // OF, SF, ZF, PF, CF.

		bool useful = false;
		for ( auto it = instructions.rbegin(); it != instructions.rend(); ) {
			auto& ins = *it;
			auto* fi = xed_decoded_inst_inst( &ins.dec ) ? ins.dec.flag_info() : nullptr;
			required_flags &= flags_mask;

			// Determine if we need this.
			//
			bool used = ( ins.reg_write_mask & required_registers ) != 0;
			if ( !used && ins.mem_write ) {
				for ( int32_t at = ins.stack_min; at < ins.stack_max; at++ ) {
					if ( required_stack_slots.contains( at ) ) {
						used = true;
						break;
					}
				}
			}

			// Maybe we need flags?:
			//
			if ( fi ) {
				if ( required_flags & fi->written.flat ) {
					used = true;
				}
			}

			// If unused, discard.
			//
			if ( !used ) {
				if ( !dry ) {
					it = decltype( it )( instructions.erase( std::next( it ).base() ) );
					continue;
				}
			} else {
				useful = true;
				// Consider the effects.
				//
				if ( ins.mem_write ) {
					for ( int32_t at = ins.stack_min; at < ins.stack_max; at++ ) {
						required_stack_slots.erase( at );
					}
				}
				required_registers &= ~ins.reg_write_mask;
				if ( fi ) required_flags &= ~fi->written.flat;

				if ( ins.mem_read ) {
					for ( int32_t at = ins.stack_min; at < ins.stack_max; at++ ) {
						required_stack_slots.emplace( at );
					}
				}
				required_registers |= ins.reg_read_mask;
				if ( fi ) required_flags |= fi->read.flat;
				required_flags &= flags_mask;
			}
			++it;
		}
		return useful;
	}
	void shellcode::optimize() {
		if ( !output_reg )
			return;
		uint64_t required_registers = make_reg_mask( *output_reg );
		uint32_t required_flags = 0;
		robin_hood::unordered_flat_set<int32_t> required_stack_slots = {};
		optimize_for( required_registers, required_stack_slots, required_flags, false );
	}

	// Generates the final code.
	//
	xstd::result<std::vector<uint8_t>> shellcode::generate() const
	{
		// Raise any deferred errors.
		//
		if ( auto res = validate_for_codegen(); !res )
			return { std::move( res.status ) };

		// Clear the output.
		//
		xstd::result<std::vector<uint8_t>> result;
		auto& output = result.emplace();

		// Get the used registers and allocate two GPR for later use.
		//
		uint64_t used_reg_mask = used_registers();
		xstd::small_vector<xed::reg_t, 2> temporal_regs_unalloc = {};
		for ( size_t n = 0; n != 2; n++ ) {
			xed::reg_t reg = alloc_reg_with_used_mask( used_reg_mask );
			if ( !reg ) break;
			used_reg_mask |= make_reg_mask( reg );
			temporal_regs_unalloc.push_back( reg );
		}
		used_reg_mask &= ~( 0b1111ull << ( ( XED_REG_RSP - XED_REG_GPR64_FIRST ) * 4 ) ); // Never push RSP.

		// Start the stack frame by pushing non-volatiles clobbered by this routine.
		//
		std::vector<uint8_t> preserved_gprs;
		for ( uint8_t i = 0; i != 16; i++ )
			if ( msabi_is_nonvolatile( i ) )
				if ( ( used_reg_mask >> ( i * 4 ) ) & 0b1111 )
					preserved_gprs.emplace_back( i );

		// Afterwards allocate space for the stack used by the code itself.
		// [stack_min, stack_max, new_sp].
		//
		int32_t sp_iterator = 0;
		std::vector<std::tuple<int32_t, int32_t, int32_t>> stack_slots;
		std::vector<std::pair<int32_t, int32_t>> used_slots = {};
		this->calc_stack_slots( used_slots );
		for ( auto [stack_min, stack_max] : used_slots )
		{
			stack_slots.emplace_back( stack_min, stack_max, sp_iterator );
			sp_iterator += ( stack_max - stack_min );
		}
		sp_iterator = xstd::align_up( sp_iterator, 0x10 ) + 8;
		auto convert_slot = [ & ] ( int32_t a, uint8_t width ) -> int32_t
		{
			for ( auto& [bmin, bmax, bcvt] : stack_slots )
				if ( bmin <= a && ( a + width ) <= bmax )
					return a - bmin + bcvt;
			unreachable();
		};

		// TODO: Align stack?

		// Define helper for assembling.
		//
		auto assemble = [ & ] <typename... Tx> ( xed::iclass_t icl, Tx&&... args )
		{
			if ( auto res = xed::encode64( icl, std::forward<Tx>( args )... ).encode() )
			{
				output.insert( output.end(), res->begin(), res->end() );
				return;
			}
			else if ( !result.status.has_value() )
			{
				result.status = xstd::exception( "Failed assembling %d: %s", icl, res.status.to_string().c_str() );
			}
		};

		// Emit the prologue.
		//
		for ( auto reg : preserved_gprs )
			assemble( XED_ICLASS_PUSH, xed::reg( xed::reg_t( reg + XED_REG_GPR64_FIRST ) ) );
		if ( sp_iterator )
			assemble( XED_ICLASS_SUB,  xed::reg( XED_REG_RSP ), xed::imm0( sp_iterator ) );

		// Argument load helper.
		//
		auto load_arg = [ & ] ( size_t arg_i, auto&& dst )
		{
			auto arg_reg = arg_i / 2;
			auto arg_pos = arg_i % 2;

			xed::reg src( xed::reg_t( XED_REG_XMM0 + arg_reg ) );
			switch ( dst.width() )
			{
				case 1:
					assemble( XED_ICLASS_VPEXTRB, dst, src, xed::imm0( arg_pos ? 8 : 0, 8 ) );
					break;
				case 2:
					assemble( XED_ICLASS_VPEXTRW, dst, src, xed::imm0( arg_pos ? 4 : 0, 8 ) );
					break;
				case 4:
					if ( arg_pos )
						assemble( XED_ICLASS_VPEXTRD, dst, src, xed::imm0( 2, 8 ) );
					else
						assemble( XED_ICLASS_VMOVD, dst, src );
					break;
				default:
					if ( arg_pos )
						assemble( XED_ICLASS_VPEXTRQ, dst, src, xed::imm0( 1, 8 ) );
					else
						assemble( XED_ICLASS_VMOVQ, dst, src );
					break;
			}
		};

		// Realize user promises.
		//
		for ( size_t arg_i = 0; arg_i != arguments.size(); arg_i++ )
		{
			auto& arg = arguments[ arg_i ];
			if ( arg.stack_length )
				load_arg( arg_i + 2, xed::mem( arg.stack_length * 8, XED_REG_RSP, convert_slot( arg.stack_offset, arg.stack_length ) ) );
			else
				load_arg( arg_i + 2, xed::reg( xed::reg_t( arg.assigned_gpr + XED_REG_GPR64_FIRST ) ) );
		}

		// Register allocations.
		//
		enum special_arg {
			special_arg_rip = 0,
			special_arg_gsbase = 1,
			special_arg_count = 2,
		};
		xed::reg_t global_specials[ special_arg_count ] = { XED_REG_INVALID, XED_REG_INVALID };

		// For each instruction:
		//
		for ( auto& ins : instructions )
		{
			// Declare scope-local allocator.
			//
			xstd::small_vector<xed::reg_t, 4> filthy_regs;
			uint64_t local_alloc_mask = 0;
			xed::reg_t local_specials[ special_arg_count ] = { XED_REG_INVALID, XED_REG_INVALID };
			auto allocate_register = [ & ] ( std::optional<special_arg> special ) -> xed::reg_t
			{
				if ( special ) {
					if ( global_specials[ *special ] ) return global_specials[ *special ];
					if ( local_specials[ *special ] ) return local_specials[ *special ];
				}

				// Try allocating a permanent register.
				//
				if ( temporal_regs_unalloc.size() ) {
					xed::reg_t reg = temporal_regs_unalloc.back();
					if ( special ) {
						load_arg( *special, xed::reg{ reg } );
						global_specials[ *special ] = reg;
						local_specials[ *special ] = reg;
					}
					temporal_regs_unalloc.pop_back();
					return reg;
				}
				
				// Try allocating from a write reg.
				//
				xed::reg_t reg = alloc_reg_with_mask( ins.reg_write_mask & ~( ins.reg_read_mask | local_alloc_mask ) );
				if ( reg ) {
					local_alloc_mask |= make_reg_mask( reg );
					
					if ( special ) {
						load_arg( *special, xed::reg{ reg } );
						local_specials[ *special ] = reg;
					}
					return reg;
				}

				// Try allocating from literally anything else.
				//
				reg = alloc_reg_with_mask( ~( ins.reg_read_mask | ins.reg_write_mask | local_alloc_mask ) );
				if ( reg ) {
					local_alloc_mask |= make_reg_mask( reg );

					auto res = xed::encode64( XED_ICLASS_PUSH, xed::reg{ reg } ).encode();
					output.insert( output.end(), res->begin(), res->end() );

					if ( special ) {
						load_arg( *special, xed::reg{ reg } );
						local_specials[ *special ] = reg;
					}
					filthy_regs.push_back( reg );
					return reg;
				}
				return XED_REG_INVALID;
			};
			
			// Convert into encoder request.
			//
			xed::encoding enc{ ins.dec };

			// For each non-suppressed operand:
			//
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
					load_arg( arg_id, dst );

					// If RIP and RVA is specified, we have to adjust the result.
					if ( arg_id == 0 && ins.rva && ins.rva != UINT32_MAX ) {
						assemble( XED_ICLASS_ADD, dst, xed::imm0( ins.rva & 0x7fff'ffff ) );
					}
				} else {
					auto dst = xed::reg( enc.reg( 0 ) );
					load_arg( arg_id, dst );

					// If RIP and RVA is specified, we have to adjust the result.
					if ( arg_id == 0 && ins.rva && ins.rva != UINT32_MAX ) {
						assemble( XED_ICLASS_ADD, dst, xed::imm0( ins.rva & 0x7fff'ffff ) );
					}
				}
			} else {
				// Encode again.
				//
				auto res = enc.encode();
				if ( !res )
					return xstd::exception( "Failed re-encoding instruction [%s]: %s", ins.dec.to_string().c_str(), res.status.to_string().c_str() );
				output.insert( output.end(), res->begin(), res->end() );
			}

			for ( auto reg : std::views::reverse( filthy_regs ) ) {
				auto res = xed::encode64( XED_ICLASS_POP, xed::reg{ reg } ).encode();
				output.insert( output.end(), res->begin(), res->end() );
			}
		}

		// Emit the epilogue.
		//
		if ( *output_reg != XED_REG_INVALID )
			assemble( XED_ICLASS_MOV, xed::reg( XED_REG_RAX ), xed::reg( *output_reg ) );
		if ( sp_iterator )
			assemble( XED_ICLASS_ADD, xed::reg( XED_REG_RSP ), xed::imm0( sp_iterator ) );
		for ( auto reg : std::views::reverse( preserved_gprs ) )
			assemble( XED_ICLASS_POP, xed::reg( xed::reg_t( reg + XED_REG_GPR64_FIRST ) ) );
		output.emplace_back( 0xC3 );
		return result;
	}
};