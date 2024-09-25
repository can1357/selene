#include <flash/vcpu.hpp>
#include <xstd/narrow_cast.hpp>

namespace flash::vm {
	// Semantic dispatch table.
	//
	using  fn_sema = void( * )( vcpu* cpu, const xed::decoding& dec );
	static fn_sema known_semantics[ XED_ICLASS_LAST ] = { nullptr };
	#define DECL_EMU(INS) static const fn_sema xstrcat(sema_, INS) = known_semantics[ xstrcat(XED_ICLASS_, INS) ] = []( [[maybe_unused]] vcpu* cpu, [[maybe_unused]] const xed::decoding& dec ) -> void


	// Flag utilities.
	//
	template<typename T, typename... Tx>
	static std::optional<bool> cf_add( std::optional<T> lhs, std::optional<T> rhs, std::optional<Tx>... rest ) {
		if ( lhs && rhs ) {
			auto [res, bad] = add_checked( xstd::as_unsigned( (T) *lhs ), xstd::as_unsigned( (T) *rhs ) );
			if constexpr ( sizeof...( Tx ) == 0 ) {
				return std::optional{ bad };
			} else {
				if ( bad ) return bad;
				*lhs = res;
				return cf_add( lhs, rest... );
			}
		} else {
			return std::nullopt;
		}
	}
	template<typename T, typename... Tx>
	static std::optional<bool> of_add( std::optional<T> lhs, std::optional<T> rhs, std::optional<Tx>... rest ) {
		if ( lhs && rhs ) {
			auto [res, bad] = add_checked( xstd::as_signed( (T) *lhs ), xstd::as_signed( (T) *rhs ) );
			if constexpr ( sizeof...( Tx ) == 0 ) {
				return std::optional{ bad };
			} else {
				if ( bad ) return bad;
				*lhs = res;
				return of_add( lhs, rest... );
			}
		} else {
			return std::nullopt;
		}
	}
	template<typename T, typename... Tx>
	static std::optional<bool> cf_sub( std::optional<T> lhs, std::optional<T> rhs, std::optional<Tx>... rest ) {
		if ( lhs && rhs ) {
			auto [res, bad] = sub_checked( xstd::as_unsigned( (T) *lhs ), xstd::as_unsigned( (T) *rhs ) );
			if constexpr ( sizeof...( Tx ) == 0 ) {
				return std::optional{ bad };
			} else {
				if ( bad ) return bad;
				*lhs = res;
				return cf_sub( lhs, rest... );
			}
		} else {
			return std::nullopt;
		}
	}
	template<typename T, typename... Tx>
	static std::optional<bool> of_sub( std::optional<T> lhs, std::optional<T> rhs, std::optional<Tx>... rest ) {
		if ( lhs && rhs ) {
			auto [res, bad] = sub_checked( xstd::as_signed( (T) *lhs ), xstd::as_signed( (T) *rhs ) );
			if constexpr ( sizeof...( Tx ) == 0 ) {
				return std::optional{ bad };
			} else {
				if ( bad ) return bad;
				*lhs = res;
				return of_sub( lhs, rest... );
			}
		} else {
			return std::nullopt;
		}
	}
	template<typename T> static std::optional<bool> pf_any( std::optional<T> res ) { return res.transform( []( auto v ) { return !xstd::bit_parity( uint8_t( v & 0xFF ) ); } ); }
	template<typename T> static std::optional<bool> sf_any( std::optional<T> res ) { return res.transform( []( auto v ) { return xstd::as_signed( v ) < 0; } ); }
	template<typename T> static std::optional<bool> zf_any( std::optional<T> res ) { return res.transform( []( auto v ) { return v == 0; } ); }
	template<typename... Tx> static std::optional<bool> af_any( std::optional<Tx>... vx ) { return ( ( vx.has_value() && ... ) ) ? std::optional{ bool( ( *vx ^ ... ) & 0x10 ) } : std::nullopt; }
	template<typename T> static void set_pf(vcpu* cpu, std::optional<T> result) { cpu->write_flag( PF, pf_any( result ) ); }
	template<typename T> static void set_sf(vcpu* cpu, std::optional<T> result) { cpu->write_flag( SF, sf_any( result ) ); }
	template<typename T> static void set_zf(vcpu* cpu, std::optional<T> result) { cpu->write_flag( ZF, zf_any( result ) ); }
	template<typename T, typename... Tx> static void set_cf_add(vcpu* cpu, std::optional<T> lhs, std::optional<T> rhs, std::optional<Tx>... rest) { cpu->write_flag( CF, cf_add( lhs, rhs, rest... ) ); }
	template<typename T, typename... Tx> static void set_cf_sub(vcpu* cpu, std::optional<T> lhs, std::optional<T> rhs, std::optional<Tx>... rest) { cpu->write_flag( CF, cf_sub( lhs, rhs, rest... ) ); }
	template<typename T, typename... Tx> static void set_of_add(vcpu* cpu, std::optional<T> lhs, std::optional<T> rhs, std::optional<Tx>... rest) { cpu->write_flag( OF, of_sub( lhs, rhs, rest... ) ); }
	template<typename T, typename... Tx> static void set_of_sub(vcpu* cpu, std::optional<T> lhs, std::optional<T> rhs, std::optional<Tx>... rest) { cpu->write_flag( OF, of_sub( lhs, rhs, rest... ) ); }
	template<typename T> static void set_af( vcpu* cpu, std::optional<T> rhs, std::optional<T> result ) { cpu->write_flag( AF, af_any( rhs, result ) ); }
	template<typename T> static void set_af( vcpu* cpu, std::optional<T> lhs, std::optional<T> rhs, std::optional<T> result ) { cpu->write_flag( AF, af_any( lhs, rhs, result ) ); }
	template<typename T> static void set_af( vcpu* cpu, std::optional<T> lhs, std::optional<T> rhs, std::optional<T> carry, std::optional<T> result ) { cpu->write_flag( AF, af_any( lhs, rhs, carry, result ) ); }

	template<typename T>
	static void set_flags_logical( vcpu* cpu, std::optional<T> result ) {
		set_sf( cpu, result );
		set_zf( cpu, result );
		set_pf( cpu, result );
		// - The OF and CF flags are cleared; the SF, ZF, and PF flags are set according to the result. The state of the AF flag is undefined.
		cpu->write_flag( CF, false );
		cpu->write_flag( OF, false );
		cpu->write_flag( AF, false ); // Runtime behaviour.
	}

	// Invalid / NOP.
	//
	DECL_EMU( INVALID ) {
		// Trash all written operands.
		//
		for ( size_t i = 0; i != dec.num_operands(); i++ ) {
			auto* op = dec.operand( i );
			if ( op && op->written( true ) ) {
				cpu->store<uint64_t>( dec, op->name(), std::nullopt );
			}
		}
		if ( auto* fi = dec.flag_info() ) {
			cpu->write_flags( fi->may_write | fi->must_write | fi->written.flat, std::nullopt );
		}
	};
	DECL_EMU( NOP ) {};
	DECL_EMU( NOP2 ) {};
	DECL_EMU( NOP3 ) {};
	DECL_EMU( NOP4 ) {};
	DECL_EMU( NOP5 ) {};
	DECL_EMU( NOP6 ) {};
	DECL_EMU( NOP7 ) {};
	DECL_EMU( NOP8 ) {};
	DECL_EMU( NOP9 ) {};
	DECL_EMU( PAUSE ) {};

	// Data movement.
	//
	DECL_EMU( LEA ) {
		// Don't let the thing address RIP, we don't want to const-propagate it.
		//
		if ( cpu->shadow_rip && dec.mem_base( 0 ) == XED_REG_RIP ) {
			cpu->store_n<uint64_t>( dec, 0, std::nullopt );
			return;
		}
		cpu->store_n( dec, 0, cpu->load_n( dec, 1 ) );
	};
	DECL_EMU( MOV ) {
		cpu->store_n( dec, 0, cpu->load_n( dec, 1 ) );
	};
	DECL_EMU( XCHG ) {
		auto rhs = cpu->load_n( dec, 1 );
		auto lhs = cpu->load_n( dec, 0 );
		cpu->store_n( dec, 1, lhs );
		cpu->store_n( dec, 0, rhs );
	};

	// Zero-extension.
	//
	DECL_EMU( MOVZX ) {
		cpu->store_n( dec, 0, cpu->load_n( dec, 1 ) );
	};

	// Sign-extension.
	//
	DECL_EMU( MOVSX ) {
		cpu->store_n( dec, 0, cpu->load_n<int64_t>( dec, 1 ) );
	};
	DECL_EMU( MOVSXD ) {
		cpu->store_n( dec, 0, cpu->load_n<int64_t>( dec, 1 ) );
	};
	DECL_EMU( CDQE ) {
		cpu->write_reg( XED_REG_RAX, cpu->read_reg<int64_t>( XED_REG_EAX ) );
	};
	DECL_EMU( CWDE ) {
		cpu->write_reg( XED_REG_RAX, cpu->read_reg<int32_t>( XED_REG_AX ) );
	};
	DECL_EMU( CBW ) {
		cpu->write_reg( XED_REG_AX,  cpu->read_reg<int16_t>( XED_REG_AL ) );
	};

	// Stack movement.
	//
	template<typename T>
	static void tmp_push( vcpu* cpu, std::optional<T> value ) {
		auto sp =     cpu->rsp().to_optional();
		auto sp_new = sp.transform( [&]( auto s ) { return s - sizeof( T ); } );
		cpu->mem_write<T>( sp_new, value );
		cpu->rsp().write( sp_new );
	}
	template<typename T>
	static std::optional<T> tmp_pop( vcpu* cpu ) {
		auto sp =     cpu->rsp().to_optional();
		auto sp_new = sp.transform( [&]( auto s ) { return s + sizeof( T ); } );
		auto val =    cpu->mem_read<T>( sp );
		cpu->rsp().write( sp_new );
		return val;
	}

	DECL_EMU( PUSH ) {
		if ( dec.eff_op_width_bits() == 16 ) {
			tmp_push( cpu, cpu->load_n<int16_t>( dec, 0 ) );
		} else {
			tmp_push( cpu, cpu->load_n<int64_t>( dec, 0 ) );
		}
	};
	DECL_EMU( PUSHF ) {
		tmp_push<int16_t>( cpu, cpu->read_flags( 0xFFFF ).transform( []( auto v ) {return (int16_t) (uint16_t) v; } ) );
	};
	DECL_EMU( PUSHFQ ) {
		tmp_push<uint64_t>( cpu, cpu->read_flags( ~0ull ) );
	};
	DECL_EMU( POPF ) {
		constexpr uint64_t mask = rflags_load_mask_cpl3 & 0xFFFF;
		if ( auto pop = tmp_pop<uint16_t>( cpu ) ) {
			cpu->rflags.mask |=  mask;
			cpu->rflags.value |= mask & *pop;
		} else {
			cpu->rflags.mask &= ~mask;
		}
	};
	DECL_EMU( POPFQ ) {
		constexpr uint64_t mask = rflags_load_mask_cpl3;
		if ( auto pop = tmp_pop<uint64_t>( cpu ) ) {
			cpu->rflags.mask |=  mask;
			cpu->rflags.value |= mask & *pop;
		} else {
			cpu->rflags.mask &= ~mask;
		}
	};
	DECL_EMU( POP ) {
		if ( dec.eff_op_width_bits() == 16 ) {
			cpu->store_n( dec, 0, tmp_pop<int16_t>( cpu ) );
		} else {
			cpu->store_n( dec, 0, tmp_pop<int64_t>( cpu ) );
		}
	};

	// Flags and conditionals.
	//
	DECL_EMU( CLD ) { cpu->write_flag( DF, false ); };
	DECL_EMU( STD ) { cpu->write_flag( DF, false ); };
	DECL_EMU( CLC ) { cpu->write_flag( CF, false ); };
	DECL_EMU( STC ) { cpu->write_flag( CF, false ); };
	DECL_EMU( CMC ) { cpu->rflags.value ^= CF; };
	DECL_EMU( LAHF ) {
		auto val = cpu->read_flags( rflags_lahf_mask ).transform( []( auto v ) {return uint16_t( v ); } );
		cpu->write_reg( XED_REG_AH, val );
	};
	DECL_EMU( SAHF ) {
		constexpr uint64_t mask = rflags_lahf_mask;
		if ( auto v = cpu->read_reg<uint16_t>( XED_REG_AH ) ) {
			cpu->rflags.mask |=  mask;
			cpu->rflags.value |= mask & *v;
		} else {
			cpu->rflags.mask &= ~mask;
		}
	};

	static void tmp_jcc(vcpu* cpu, const xed::decoding& dec, branch b) {
		auto rel = dec.relbr_value();
		
		// Both goes to the same point.
		//
		if ( !rel ) return;

		// Decide on the condition state considering forced branches.
		//
		auto cc = cpu->test_branch( b );
		uint64_t addr_of_jcc = cpu->rip - dec.length();
		if ( !cc.has_value() ) {
			for ( auto& [addr, fcc] : cpu->forced_branches ) {
				if ( addr == addr_of_jcc ) {
					cc = fcc;
					cpu->assume_branch( b, fcc );
				}
			}
		}

		if ( !cc.has_value() ) {
			cpu->branch_store =    rel;
			cpu->branch_store_cc = b;
			cpu->state = status::branch;
		} else {
			cpu->rip += *cc ? dec.relbr_value() : 0;

			// Infinite loop.
			//
			if ( cpu->rip == addr_of_jcc ) {
				cpu->state = status::err_timeout;
				return;
			}
		}
	}
	static void tmp_setcc( vcpu* cpu, const xed::decoding& dec, branch b ) {
		auto cc = cpu->test_branch( b );
		cpu->store_n<uint8_t>( dec, 0, cc.transform( []( auto v ) -> uint8_t { return v ? 1 : 0; } ) );
	}
	static void tmp_cmovcc( vcpu* cpu, const xed::decoding& dec, branch b ) {
		auto cc = cpu->test_branch( b );
		auto lhs = cpu->load_n( dec, 0 );
		auto rhs = cpu->load_n( dec, 1 );
		
		// If both values are established to be the same, assume one of them.
		//
		std::optional<uint64_t> val;
		if ( lhs.has_value() && rhs.has_value() && lhs && rhs ) {
			val = rhs;
		} 
		// If we know the condition flag, apply the op.
		//
		else if ( cc.has_value() ) {
			val = *cc ? rhs : lhs;
		}

		// If lax restrictions on CMOVCC, assume one that is known.
		//
		if ( !val.has_value() && cpu->cmov_lax ) {
			val = rhs ? rhs : lhs;
		}
		cpu->store_n( dec, 0, val );
	}

#define MAKE_JCC(Insn, BranchId)    DECL_EMU( Insn ) { tmp_jcc(cpu, dec, BranchId); }
#define MAKE_SETCC(Insn, BranchId)  DECL_EMU( Insn ) { tmp_setcc(cpu, dec, BranchId); }
#define MAKE_CMOVCC(Insn, BranchId) DECL_EMU( Insn ) { tmp_cmovcc(cpu, dec, BranchId); }
	MAKE_JCC( JB,    branch::b );
	MAKE_JCC( JNB,   branch::nb );
	MAKE_JCC( JBE,   branch::be );
	MAKE_JCC( JNBE,  branch::nbe );
	MAKE_JCC( JL,    branch::l );
	MAKE_JCC( JNL,   branch::nl );
	MAKE_JCC( JLE,   branch::le );
	MAKE_JCC( JNLE,  branch::nle );
	MAKE_JCC( JCXZ,  branch::cxz );
	MAKE_JCC( JECXZ, branch::ecxz );
	MAKE_JCC( JRCXZ, branch::rcxz );
	MAKE_JCC( JO,    branch::o );
	MAKE_JCC( JNO,   branch::no );
	MAKE_JCC( JP,    branch::p );
	MAKE_JCC( JNP,   branch::np );
	MAKE_JCC( JS,    branch::s );
	MAKE_JCC( JNS,   branch::ns );
	MAKE_JCC( JZ,    branch::z );
	MAKE_JCC( JNZ,   branch::nz );
	MAKE_SETCC( SETB,    branch::b );
	MAKE_SETCC( SETNB,   branch::nb );
	MAKE_SETCC( SETBE,   branch::be );
	MAKE_SETCC( SETNBE,  branch::nbe );
	MAKE_SETCC( SETL,    branch::l );
	MAKE_SETCC( SETNL,   branch::nl );
	MAKE_SETCC( SETLE,   branch::le );
	MAKE_SETCC( SETNLE,  branch::nle );
	MAKE_SETCC( SETO,    branch::o );
	MAKE_SETCC( SETNO,   branch::no );
	MAKE_SETCC( SETP,    branch::p );
	MAKE_SETCC( SETNP,   branch::np );
	MAKE_SETCC( SETS,    branch::s );
	MAKE_SETCC( SETNS,   branch::ns );
	MAKE_SETCC( SETZ,    branch::z );
	MAKE_SETCC( SETNZ,   branch::nz );
	MAKE_CMOVCC( CMOVB,    branch::b );
	MAKE_CMOVCC( CMOVNB,   branch::nb );
	MAKE_CMOVCC( CMOVBE,   branch::be );
	MAKE_CMOVCC( CMOVNBE,  branch::nbe );
	MAKE_CMOVCC( CMOVL,    branch::l );
	MAKE_CMOVCC( CMOVNL,   branch::nl );
	MAKE_CMOVCC( CMOVLE,   branch::le );
	MAKE_CMOVCC( CMOVNLE,  branch::nle );
	MAKE_CMOVCC( CMOVO,    branch::o );
	MAKE_CMOVCC( CMOVNO,   branch::no );
	MAKE_CMOVCC( CMOVP,    branch::p );
	MAKE_CMOVCC( CMOVNP,   branch::np );
	MAKE_CMOVCC( CMOVS,    branch::s );
	MAKE_CMOVCC( CMOVNS,   branch::ns );
	MAKE_CMOVCC( CMOVZ,    branch::z );
	MAKE_CMOVCC( CMOVNZ,   branch::nz );
#undef MAKE_SETCC
#undef MAKE_CMOVCC
#undef MAKE_JCC
	DECL_EMU( LOOP ) {
		auto rcx_n = cpu->read_reg( XED_REG_RCX ).transform( []( auto c ) { return c - 1; } );
		cpu->write_reg( XED_REG_RCX, rcx_n );
		tmp_jcc( cpu, dec, branch::loop );
	};
	DECL_EMU( LOOPE ) {
		auto rcx_n = cpu->read_reg( XED_REG_RCX ).transform( []( auto c ) { return c - 1; } );
		cpu->write_reg( XED_REG_RCX, rcx_n );
		tmp_jcc( cpu, dec, branch::loope );
	};
	DECL_EMU( LOOPNE ) {
		auto rcx_n = cpu->read_reg( XED_REG_RCX ).transform( []( auto c ) { return c - 1; } );
		cpu->write_reg( XED_REG_RCX, rcx_n );
		tmp_jcc( cpu, dec, branch::loopne );
	};

	// Unconditional control flow.
	//
	DECL_EMU( JMP ) {
		cpu->write_reg( XED_REG_RIP, cpu->load_n<uint64_t>( dec, 0 ) );
	};
	DECL_EMU( CALL_NEAR ) {
		// If calls are not allowed:
		//
		if ( !cpu->consume_call_token() ) {
			// TODO: Stack too?

			// Trash return value, continue.
			cpu->write_reg<uint64_t>( XED_REG_RAX, std::nullopt );
			return;
		}

		// sp -= 8
		// [sp] = rip
		auto sp = cpu->rsp().to_optional().transform( []( auto s ) { return s - 8; } );
		cpu->rsp().write( sp );
		cpu->mem_write<uint64_t>( sp, cpu->rip );
		// rip = Op0
		cpu->write_reg( XED_REG_RIP, cpu->load_n<uint64_t>( dec, 0 ) );
	};
	DECL_EMU( RET_NEAR ) {
		// rip = [sp]
		auto sp = cpu->rsp().to_optional();
		cpu->write_reg( XED_REG_RIP, cpu->mem_read<uint64_t>( sp ) );
		// sp += 8 + (imm)
		auto dt = dec.has_imm() ? dec.imm0u_value() : 0;
		cpu->rsp().write( sp.transform( [&]( auto s ) { return s + dt; } ) );
	};

	// Logical operators.
	//
	DECL_EMU( OR ) {
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<T>( dec, 1 );
			auto res = lhs ? rhs.transform( [l = *lhs]( auto r ) { return T(l | r); } ) : lhs;
			if ( lhs == ~T( 0 ) || rhs == ~T( 0 ) ) lhs = rhs = 0;

			set_flags_logical( cpu, res );
			cpu->store_n( dec, 0, res );
		} );
	};
	DECL_EMU( AND ) {
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<T>( dec, 1 );
			if ( lhs == 0 || rhs == 0 ) lhs = rhs = 0;

			auto res = lhs ? rhs.transform( [l = *lhs]( auto r ) { return T(l & r); } ) : lhs;
			set_flags_logical( cpu, res );
			cpu->store_n( dec, 0, res );
		} );
	};
	DECL_EMU( TEST ) {
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<T>( dec, 1 );
			auto res = lhs ? rhs.transform( [l = *lhs]( auto r ) { return T(l & r); } ) : lhs;
			set_flags_logical( cpu, res );
		} );
	};
	DECL_EMU( XOR ) {
		// [xor eax, eax]
		if ( dec.num_reg_operands() == 2 ) {
			if ( dec.reg( 0 ) == dec.reg( 1 ) ) {
				cpu->store_n<uint64_t>( dec, 0, 0u );
				cpu->write_flags( SF | ZF | PF | OF | CF | AF, ZF | PF );
				return;
			}
		}
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<T>( dec, 1 );
			auto res = lhs ? rhs.transform( [l = *lhs]( auto r ) { return T(l ^ r); } ) : lhs;
			set_flags_logical( cpu, res );
			cpu->store_n( dec, 0, res );
		} );
	};
	DECL_EMU( NOT ) {
		auto rhs = cpu->load_n<uint64_t>( dec, 0 );
		auto res = rhs.transform( []( auto r ) { return ~r; } );
		cpu->store_n( dec, 0, res );
	};

	// Bitwise operators.
	//
	// TODO: BSF BSR TZCNT LZCNT
	DECL_EMU( MOVBE ) {
		cpu->uvisit_n( dec, 1, [ & ]<typename T>( std::optional<T> rhs ) {
			rhs = rhs.transform( []( auto v ) { return bswap( v ); } );
			cpu->store_n( dec, 0, rhs );
		} );
	};
	DECL_EMU( BSWAP ) {
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			if constexpr ( sizeof( T ) != 4 && sizeof( T ) != 8 ) {
				lhs = 0;
			} else {
				lhs = lhs.transform( []( auto v ) { return bswap( v ); } );
			}
			cpu->store_n( dec, 0, lhs );
		} );
	};
	DECL_EMU( BT ) {
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<char>( dec, 1 );
			std::optional<bool> cf;
			if ( lhs && rhs ) {
				cf = xstd::bit_test( *lhs, *rhs );
			}
			cpu->write_flag( CF, cf );
		} );
	};
	DECL_EMU( BTS ) {
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<char>( dec, 1 );
			if ( !rhs.has_value() && ( lhs == ~T() ) ) rhs = 0;
			std::optional<T>    res;
			std::optional<bool> cf;
			if ( lhs && rhs ) {
				res = lhs;
				cf = xstd::bit_set( *res, *rhs );
			}
			cpu->write_flag( CF, cf );
			cpu->store_n( dec, 0, res );
		} );
	};
	DECL_EMU( BTR ) {
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<char>( dec, 1 );
			if ( !rhs.has_value() && ( lhs == 0 ) ) rhs = 0;
			std::optional<T>    res;
			std::optional<bool> cf;
			if ( lhs && rhs ) {
				res = lhs;
				cf = xstd::bit_reset( *res, *rhs );
			}
			cpu->write_flag( CF, cf );
			cpu->store_n( dec, 0, res );
		} );
	};
	DECL_EMU( BTC ) {
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<char>( dec, 1 );
			std::optional<T>    res;
			std::optional<bool> cf;
			if ( lhs && rhs ) {
				res = lhs;
				cf = xstd::bit_complement( *res, *rhs );
			}
			cpu->write_flag( CF, cf );
			cpu->store_n( dec, 0, res );
		} );
	};

	// Shift and rotate.
	//
	DECL_EMU( SHR ) {
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<char>( dec, 1 );
			if ( !rhs.has_value() && ( lhs == 0 ) ) rhs = 3;
			std::optional<T>    res;
			std::optional<bool> cf, of;
			if ( lhs && rhs ) {
				res = lhs;
				asm( "shr %[rhs], %[lhs]" : [lhs] "+r"( *res ), "=@ccc" ( cf.emplace() ), "=@cco" ( of.emplace() ) : [rhs] "c"( *rhs ) : "flags" );
			}
			set_sf( cpu, res );
			set_zf( cpu, res );
			set_pf( cpu, res );
			cpu->write_flag( CF, cf );
			cpu->write_flag( OF, of );
			cpu->store_n( dec, 0, res );
		} );
	};
	DECL_EMU( SAR ) {
		cpu->ivisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<char>( dec, 1 );
			if ( !rhs.has_value() && ( lhs == 0 || lhs == -1 ) ) rhs = 3;
			std::optional<T>    res;
			std::optional<bool> cf, of;
			if ( lhs && rhs ) {
				res = lhs;
				asm( "sar %[rhs], %[lhs]" : [lhs] "+r"( *res ), "=@ccc" ( cf.emplace() ), "=@cco" ( of.emplace() ) : [rhs] "c"( *rhs ) : "flags" );
			}
			set_sf( cpu, res );
			set_zf( cpu, res );
			set_pf( cpu, res );
			cpu->write_flag( CF, cf );
			cpu->write_flag( OF, of );
			cpu->store_n( dec, 0, res );
		} );
	};
	DECL_EMU( SHL ) {
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<char>( dec, 1 );
			if ( !rhs.has_value() && ( lhs == 0 ) ) rhs = 3;
			std::optional<T>    res;
			std::optional<bool> cf, of;
			if ( lhs && rhs ) {
				res = lhs;
				asm( "shl %[rhs], %[lhs]" : [lhs] "+r"( *res ), "=@ccc" ( cf.emplace() ), "=@cco" ( of.emplace() ) : [rhs] "c"( *rhs ) : "flags" );
			}
			set_sf( cpu, res );
			set_zf( cpu, res );
			set_pf( cpu, res );
			cpu->write_flag( CF, cf );
			cpu->write_flag( OF, of );
			cpu->store_n( dec, 0, res );
		} );
	};
	DECL_EMU( ROR ) {
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<char>( dec, 1 );
			if ( !rhs.has_value() && ( lhs == 0 || lhs == ~T( 0 ) ) ) rhs = 3;
			std::optional<T>    res;
			std::optional<bool> cf, of;
			if ( lhs && rhs ) {
				res = lhs;
				asm( "ror %[rhs], %[lhs]" : [lhs] "+r"( *res ), "=@ccc" ( cf.emplace() ), "=@cco" ( of.emplace() ) : [rhs] "c"( *rhs ) : "flags" );
			}
			cpu->write_flag( CF, cf );
			cpu->write_flag( OF, of );
			cpu->store_n( dec, 0, res );
		} );
	};
	DECL_EMU( ROL ) {
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<char>( dec, 1 );
			if ( !rhs.has_value() && ( lhs == 0 || lhs == ~T(0) ) ) rhs = 3;
			std::optional<T>    res;
			std::optional<bool> cf, of;
			if ( lhs && rhs ) {
				res = lhs;
				asm( "rol %[rhs], %[lhs]" : [lhs] "+r"( *res ), "=@ccc" ( cf.emplace() ), "=@cco" ( of.emplace() ) : [rhs] "c"( *rhs ) : "flags" );
			}
			cpu->write_flag( CF, cf );
			cpu->write_flag( OF, of );
			cpu->store_n( dec, 0, res );
		} );
	};
	DECL_EMU( RCR ) {
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<char>( dec, 1 );
			if ( !rhs.has_value() && ( lhs == 0 ) ) rhs = 3;
			auto cf_in = cpu->read_flags( CF );

			std::optional<T>    res;
			std::optional<bool> cf, of;
			if ( lhs && rhs && cf_in ) {
				res = lhs;
				asm( 
					"neg %[cf_in];"
					"rcr %[rhs], %[lhs]" 
					: [lhs]   "+r"( *res ), 
							  "=@ccc" ( cf.emplace() ), 
							  "=@cco" ( of.emplace() )
					: [rhs]   "c"( *rhs ),
					  [cf_in] "r" ( *cf_in ) 
					: "flags" 
				);
			}
			cpu->write_flag( CF, cf );
			cpu->write_flag( OF, of );
			cpu->store_n( dec, 0, res );
		} );
	};
	DECL_EMU( RCL ) {
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<char>( dec, 1 );
			if ( !rhs.has_value() && ( lhs == 0 ) ) rhs = 3;
			auto cf_in = cpu->read_flags( CF );

			std::optional<T>    res;
			std::optional<bool> cf, of;
			if ( lhs && rhs && cf_in ) {
				res = lhs;
				asm( 
					"neg %[cf_in];"
					"rcl %[rhs], %[lhs]" 
					: [lhs]   "+r"( *res ), 
							  "=@ccc" ( cf.emplace() ), 
							  "=@cco" ( of.emplace() )
					: [rhs]   "c"( *rhs ),
					  [cf_in] "r" ( *cf_in ) 
					: "flags" 
				);
			}
			cpu->write_flag( CF, cf );
			cpu->write_flag( OF, of );
			cpu->store_n( dec, 0, res );
		} );
	};
	DECL_EMU( RORX ) {
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<char>( dec, 1 );
			if ( !rhs.has_value() && ( lhs == 0 || lhs == ~T( 0 ) ) ) rhs = 3;
			std::optional<T> res;
			if ( lhs && rhs ) {
				res = T( rotr( *lhs, *rhs ) );
			}
			cpu->store_n( dec, 0, res );
		} );
	};
	DECL_EMU( SHRD ) {
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			if constexpr ( sizeof( T ) > 1 ) {
				auto aux = cpu->load_n<T>( dec, 1 );
				auto rhs = cpu->load_n<char>( dec, 2 );
				if ( rhs == 0 ) aux = 0;

				std::optional<T>    res;
				std::optional<bool> cf, of;
				if ( lhs && rhs && aux ) {
					res = lhs;
					asm( "shrd %[rhs], %[aux], %[lhs]" : [lhs] "+r"( *res ), "=@ccc" ( cf.emplace() ), "=@cco" ( of.emplace() ) : [aux] "r"( *aux ), [rhs] "c"( *rhs ) : "flags" );
				}
				set_sf( cpu, res );
				set_zf( cpu, res );
				set_pf( cpu, res );
				cpu->write_flag( CF, cf );
				cpu->write_flag( OF, of );
				cpu->store_n( dec, 0, res );
			}
		} );
	};
	DECL_EMU( SHLD ) {
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			if constexpr ( sizeof( T ) > 1 ) {
				auto aux = cpu->load_n<T>( dec, 1 );
				auto rhs = cpu->load_n<char>( dec, 2 );
				if ( rhs == 0 ) aux = 0;

				std::optional<T>    res;
				std::optional<bool> cf, of;
				if ( lhs && rhs && aux ) {
					res = lhs;
					asm( "shld %[rhs], %[aux], %[lhs]" : [lhs] "+r"( *res ), "=@ccc" ( cf.emplace() ), "=@cco" ( of.emplace() ) : [aux] "r"( *aux ), [rhs] "c"( *rhs ) : "flags" );
				}
				set_sf( cpu, res );
				set_zf( cpu, res );
				set_pf( cpu, res );
				cpu->write_flag( CF, cf );
				cpu->write_flag( OF, of );
				cpu->store_n( dec, 0, res );
			}
		} );
	};
	// TODO: SHLX, SHRX, SARX.

	// Arithmetic operators.
	//
	DECL_EMU( ADD ) {
		cpu->ivisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<T>( dec, 1 );
			auto res = opt_apply( []( T a, T b ) { return T( a + b ); }, lhs, rhs );
			set_af( cpu, lhs, rhs, res );
			set_sf( cpu, res );
			set_zf( cpu, res );
			set_pf( cpu, res );
			set_cf_add( cpu, lhs, rhs );
			set_of_add( cpu, lhs, rhs );
			cpu->store_n( dec, 0, res );
		} );
	};
	DECL_EMU( SUB ) {
		cpu->ivisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<T>( dec, 1 );
			auto res = opt_apply( []( T a, T b ) { return T( a - b ); }, lhs, rhs );
			set_af( cpu, lhs, rhs, res );
			set_sf( cpu, res );
			set_zf( cpu, res );
			set_pf( cpu, res );
			set_cf_sub( cpu, lhs, rhs );
			set_of_sub( cpu, lhs, rhs );
			cpu->store_n( dec, 0, res );
		} );
	};
	DECL_EMU( INC ) {
		cpu->ivisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			std::optional<T> rhs = T(1);
			auto res = opt_apply( []( T a, T b ) { return T( a + b ); }, lhs, rhs );
			set_af( cpu, lhs, rhs, res );
			set_sf( cpu, res );
			set_zf( cpu, res );
			set_pf( cpu, res );
			set_of_add( cpu, lhs, rhs );
			cpu->store_n( dec, 0, res );
		} );
	};
	DECL_EMU( CMP ) {
		cpu->ivisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<T>( dec, 1 );
			auto res = opt_apply( []( T a, T b ) { return T( a - b ); }, lhs, rhs );
			set_af( cpu, lhs, rhs, res );
			set_sf( cpu, res );
			set_zf( cpu, res );
			set_pf( cpu, res );
			set_cf_sub( cpu, lhs, rhs );
			set_of_sub( cpu, lhs, rhs );
		} );
	};
	DECL_EMU( DEC ) {
		cpu->ivisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			std::optional<T> rhs = T( 1 );
			auto res = opt_apply( []( T a, T b ) { return T( a - b ); }, lhs, rhs );
			set_af( cpu, lhs, rhs, res );
			set_sf( cpu, res );
			set_zf( cpu, res );
			set_pf( cpu, res );
			set_of_sub( cpu, lhs, rhs );
			cpu->store_n( dec, 0, res );
		} );
	};
	DECL_EMU( XADD ) {
		cpu->ivisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto rhs = cpu->load_n<T>( dec, 1 );
			auto res = opt_apply( []( T a, T b ) { return T( a + b ); }, lhs, rhs );
			set_af( cpu, lhs, rhs, res );
			set_sf( cpu, res );
			set_zf( cpu, res );
			set_pf( cpu, res );
			set_cf_add( cpu, lhs, rhs );
			set_of_add( cpu, lhs, rhs );
			cpu->store_n( dec, 0, res );
			cpu->store_n( dec, 1, lhs );
		} );
	};
	DECL_EMU( NEG ) {
		cpu->ivisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			auto res = opt_apply( []( T a ) { return T( -a ); }, lhs );
			set_af( cpu, lhs, res );
			set_sf( cpu, res );
			set_zf( cpu, res );
			set_pf( cpu, res );
			cpu->write_flag( CF, lhs.transform( []( auto v ) { return v != 0; } ) );
			cpu->store_n( dec, 0, res );
		} );
	};

	// Add/Sub with carry.
	//
	DECL_EMU( ADC ) {
		cpu->ivisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			std::optional<T> rhs_1 = cpu->load_n<T>( dec, 1 );
			std::optional<T> rhs_2 = cpu->read_flag( CF ).transform( []( auto v ) { return v ? T( 1 ) : T( 0 ); } );
			auto res = opt_apply( []( T a, T b ) { return T( a + b ); }, lhs, rhs_1 );
			res =      opt_apply( []( T a, T b ) { return T( a + b ); }, lhs, rhs_2 );
			set_af( cpu, lhs, rhs_1, res );
			set_sf( cpu, res );
			set_zf( cpu, res );
			set_pf( cpu, res );
			set_cf_add( cpu, lhs, rhs_1, rhs_2 );
			set_of_add( cpu, lhs, rhs_1, rhs_2 );
			cpu->store_n( dec, 0, res );
		} );
	};
	DECL_EMU( SBB ) {
		cpu->ivisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			std::optional<T> rhs_1 = cpu->load_n<T>( dec, 1 );
			std::optional<T> rhs_2 = cpu->read_flag( CF ).transform( []( auto v ) { return v ? T( 1 ) : T( 0 ); } );
			auto res = opt_apply( []( T a, T b ) { return T( a - b ); }, lhs, rhs_1 );
			res =      opt_apply( []( T a, T b ) { return T( a - b ); }, lhs, rhs_2 );
			set_af( cpu, lhs, rhs_1, res );
			set_sf( cpu, res );
			set_zf( cpu, res );
			set_pf( cpu, res );
			set_cf_sub( cpu, lhs, rhs_1, rhs_2 );
			set_of_sub( cpu, lhs, rhs_1, rhs_2 );
			cpu->store_n( dec, 0, res );
		} );
	};

	// Multiplication and division.
	//
	DECL_EMU( MUL ) {
		cpu->uvisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
			std::optional<T> rhs, res_lo, res_hi;
			switch ( sizeof( T ) ) {
				case 1: {
					// AX <| AL * OP1
					using R = uint16_t;
					rhs = cpu->read_reg<T>( XED_REG_AL );
					auto res = opt_apply( []( T l, T r ) { return (R) ( R( l ) * R( r ) ); }, lhs, rhs );
					cpu->write_reg<R>( XED_REG_AX, res );
					res_lo = res.transform( []( auto a ) { return (T) ( a ); } );
					res_hi = res.transform( []( auto a ) { return (T) ( a >> 8 ); } );
					break;
				}
				case 2: {
					// DX:AX <| AX * OP1
					using R = uint32_t;
					rhs = cpu->read_reg<T>( XED_REG_AX );
					auto res = opt_apply( []( T l, T r ) { return (R) ( R( l ) * R( r ) ); }, lhs, rhs );
					res_lo = res.transform( []( auto a ) { return (T) ( a ); } );
					res_hi = res.transform( []( auto a ) { return (T) ( a >> 16 ); } );
					cpu->write_reg<T>( XED_REG_AX, res_lo );
					cpu->write_reg<T>( XED_REG_DX, res_hi );
					break;
				}
				case 4: {
					// EDX:EAX <| EAX * OP1
					using R = uint64_t;
					rhs = cpu->read_reg<T>( XED_REG_EAX );
					auto res = opt_apply( []( T l, T r ) { return (R) ( R( l ) * R( r ) ); }, lhs, rhs );
					res_lo = res.transform( []( auto a ) { return (T) ( a ); } );
					res_hi = res.transform( []( auto a ) { return (T) ( a >> 32 ); } );
					cpu->write_reg<T>( XED_REG_EAX, res_lo );
					cpu->write_reg<T>( XED_REG_EDX, res_hi );
					break;
				}
				case 8: {
					// RDX:RAX <| RAX * OP1
					using R = uint128_t;
					rhs = cpu->read_reg<T>( XED_REG_RAX );
					auto res = opt_apply( []( T l, T r ) { return (R) ( R( l ) * R( r ) ); }, lhs, rhs );
					res_lo = res.transform( []( auto a ) { return (T) ( a ); } );
					res_hi = res.transform( []( auto a ) { return (T) ( a >> 64 ); } );
					cpu->write_reg<T>( XED_REG_RAX, res_lo );
					cpu->write_reg<T>( XED_REG_RDX, res_hi );
					break;
				}
			}
			auto overflow = res_hi.transform( [] ( auto v ) { return v != 0; } );
			cpu->write_flag( CF, overflow );
			cpu->write_flag( OF, overflow );
		} );
	};
	DECL_EMU( MULX ) {
		cpu->uvisit_n( dec, 2, [ & ]<typename T>( std::optional<T> lhs ) {
			// Performs an unsigned multiplication of the implicit source operand (EDX/RDX) and the specified source operand 
			// (the third operand) and stores the low half of the result in the second destination (second operand), 
			// the high half of the result in the first destination operand (first operand).
			//
			std::optional<T> rhs, res_lo, res_hi;
			switch ( sizeof( T ) ) {
				case 1: 
				case 2: unreachable();
				case 4: {
					// EDX:EAX <| EAX * OP1
					using R = uint64_t;
					rhs = cpu->read_reg<T>( XED_REG_EDX );
					auto res = opt_apply( []( T l, T r ) { return (R) ( R( l ) * R( r ) ); }, lhs, rhs );
					res_lo = res.transform( []( auto a ) { return (T) ( a ); } );
					res_hi = res.transform( []( auto a ) { return (T) ( a >> 32 ); } );
					break;
				}
				case 8: {
					// RDX:RAX <| RAX * OP1
					using R = uint128_t;
					rhs = cpu->read_reg<T>( XED_REG_RDX );
					auto res = opt_apply( []( T l, T r ) { return (R) ( R( l ) * R( r ) ); }, lhs, rhs );
					res_lo = res.transform( []( auto a ) { return (T) ( a ); } );
					res_hi = res.transform( []( auto a ) { return (T) ( a >> 64 ); } );
					break;
				}
			}
			cpu->store_n<T>( dec, 1, res_lo );
			cpu->store_n<T>( dec, 0, res_hi );
		} );
	};
	DECL_EMU( IMUL ) {
		switch ( dec.iform() ) {
			// 1op: 	DX:AX =         AX *            r/m word.
			// -  the CF and OF flags are set when significant bits are carried into the upper half of the result and 
			//    cleared when the result fits exactly in the lower half of the result.
			case XED_IFORM_IMUL_GPR8:
			case XED_IFORM_IMUL_GPRv:
			case XED_IFORM_IMUL_MEMb:
			case XED_IFORM_IMUL_MEMv: {
				return cpu->ivisit_n( dec, 0, [ & ]<typename T>( std::optional<T> lhs ) {
					std::optional<T> rhs, res_lo, res_hi;
					switch ( sizeof( T ) ) {
						case 1: {
							// AX <| AL * OP1
							using R = uint16_t;
							rhs = cpu->read_reg<T>( XED_REG_AL );
							auto res = opt_apply( []( T l, T r ) { return (R) ( R( l ) * R( r ) ); }, lhs, rhs );
							cpu->write_reg<R>( XED_REG_AX, res );
							res_lo = res.transform( []( auto a ) { return (T) ( a ); } );
							res_hi = res.transform( []( auto a ) { return (T) ( a >> 8 ); } );
							break;
						}
						case 2: {
							// DX:AX <| AX * OP1
							using R = uint32_t;
							rhs = cpu->read_reg<T>( XED_REG_AX );
							auto res = opt_apply( []( T l, T r ) { return (R) ( R( l ) * R( r ) ); }, lhs, rhs );
							res_lo = res.transform( []( auto a ) { return (T) ( a ); } );
							res_hi = res.transform( []( auto a ) { return (T) ( a >> 16 ); } );
							cpu->write_reg<T>( XED_REG_AX, res_lo );
							cpu->write_reg<T>( XED_REG_DX, res_hi );
							break;
						}
						case 4: {
							// EDX:EAX <| EAX * OP1
							using R = uint64_t;
							rhs = cpu->read_reg<T>( XED_REG_EAX );
							auto res = opt_apply( []( T l, T r ) { return (R) ( R( l ) * R( r ) ); }, lhs, rhs );
							res_lo = res.transform( []( auto a ) { return (T) ( a ); } );
							res_hi = res.transform( []( auto a ) { return (T) ( a >> 32 ); } );
							cpu->write_reg<T>( XED_REG_EAX, res_lo );
							cpu->write_reg<T>( XED_REG_EDX, res_hi );
							break;
						}
						case 8: {
							// RDX:RAX <| RAX * OP1
							using R = uint128_t;
							rhs = cpu->read_reg<T>( XED_REG_RAX );
							auto res = opt_apply( []( T l, T r ) { return (R) ( R( l ) * R( r ) ); }, lhs, rhs );
							res_lo = res.transform( []( auto a ) { return (T) ( a ); } );
							res_hi = res.transform( []( auto a ) { return (T) ( a >> 64 ); } );
							cpu->write_reg<T>( XED_REG_RAX, res_lo );
							cpu->write_reg<T>( XED_REG_RDX, res_hi );
							break;
						}
					}
					auto overflow = res_hi.transform( [] ( auto v ) { return v != 0 && v != -1; } );
					cpu->write_flag( CF, overflow );
					cpu->write_flag( OF, overflow );
				} );
			}
			// 2op:     word register = word register * r/m16.
			// 3op:     word register = r/m16 * immediate word.
			// - the CF and OF flags are set when the result must be truncated to fit in the destination operand size and 
			//   cleared when the result fits exactly in the destination operand size
			default:
			case XED_IFORM_IMUL_GPRv_GPRv:
			case XED_IFORM_IMUL_GPRv_MEMv:
			case XED_IFORM_IMUL_GPRv_GPRv_IMMb:
			case XED_IFORM_IMUL_GPRv_GPRv_IMMz:
			case XED_IFORM_IMUL_GPRv_MEMv_IMMb:
			case XED_IFORM_IMUL_GPRv_MEMv_IMMz: {
				return cpu->ivisit_n( dec, 1, [ & ]<typename T>( std::optional<T> lhs ) {
					std::optional<T> rhs = dec.has_imm() ? std::optional{ T( dec.imm0_value() ) } : cpu->load_n<T>( dec, 0 );
					std::optional<T> res_lo, res_hi;
					switch ( sizeof( T ) ) {
						case 1: unreachable();
						case 2: {
							// DX:AX <| AX * OP1
							using R = uint32_t;
							auto res = opt_apply( []( T l, T r ) { return (R) ( R( l ) * R( r ) ); }, lhs, rhs );
							res_lo = res.transform( []( auto a ) { return (T) ( a ); } );
							res_hi = res.transform( []( auto a ) { return (T) ( a >> 16 ); } );
							cpu->store_n<T>( dec, 0, res_lo );
							break;
						}
						case 4: {
							// EDX:EAX <| EAX * OP1
							using R = uint64_t;
							auto res = opt_apply( []( T l, T r ) { return (R) ( R( l ) * R( r ) ); }, lhs, rhs );
							res_lo = res.transform( []( auto a ) { return (T) ( a ); } );
							res_hi = res.transform( []( auto a ) { return (T) ( a >> 32 ); } );
							cpu->store_n<T>( dec, 0, res_lo );
							break;
						}
						case 8: {
							// RDX:RAX <| RAX * OP1
							using R = uint128_t;
							auto res = opt_apply( []( T l, T r ) { return (R) ( R( l ) * R( r ) ); }, lhs, rhs );
							res_lo = res.transform( []( auto a ) { return (T) ( a ); } );
							res_hi = res.transform( []( auto a ) { return (T) ( a >> 64 ); } );
							cpu->store_n<T>( dec, 0, res_lo );
							break;
						}
					}
					auto overflow = res_hi.transform( [] ( auto v ) { return v != 0 && v != -1; } );
					cpu->write_flag( CF, overflow );
					cpu->write_flag( OF, overflow );
				} );
			}
		}
	};
	template<typename T>
	static void tmp_div( vcpu* cpu, const xed::decoding&, std::optional<T> divisor ) {
		if ( divisor == 0 ) {
			cpu->state = status::err_div;
			return;
		}
		switch ( sizeof( T ) ) {
			case 1: {
				// AL&AH <| AX /% OP1
				auto dividend_lo = cpu->read_reg<T>( XED_REG_AH );
				auto dividend_hi = cpu->read_reg<T>( XED_REG_AL );

				auto res = opt_apply( [&]( T dividend_hi, T dividend_lo, T divisor ) {
					auto [quot, rem, bad] = div_checked( dividend_hi, dividend_lo, divisor );
					if ( bad ) cpu->state = status::err_div;
					return std::pair{ quot, rem };
				}, dividend_hi, dividend_lo, divisor );

				cpu->write_reg<T>( XED_REG_AL, res.transform( []( auto& p ) {return p.first; } ) );
				cpu->write_reg<T>( XED_REG_AH, res.transform( []( auto& p ) {return p.second; } ) );
				break;
			}
			case 2: {
				// AX&DX <| DX:AX /% OP1
				auto dividend_lo = cpu->read_reg<T>( XED_REG_AX );
				auto dividend_hi = cpu->read_reg<T>( XED_REG_DX );

				auto res = opt_apply( [&]( T dividend_hi, T dividend_lo, T divisor ) {
					auto [quot, rem, bad] = div_checked( dividend_hi, dividend_lo, divisor );
					if ( bad ) cpu->state = status::err_div;
					return std::pair{ quot, rem };
				}, dividend_hi, dividend_lo, divisor );

				cpu->write_reg<T>( XED_REG_AX, res.transform( []( auto& p ) {return p.first; } ) );
				cpu->write_reg<T>( XED_REG_DX, res.transform( []( auto& p ) {return p.second; } ) );
				break;
			}
			case 4: {
				// EAX&EDX <| EDX:EAX /% OP1
				auto dividend_lo = cpu->read_reg<T>( XED_REG_EAX );
				auto dividend_hi = cpu->read_reg<T>( XED_REG_EDX );

				auto res = opt_apply( [&]( T dividend_hi, T dividend_lo, T divisor ) {
					auto [quot, rem, bad] = div_checked( dividend_hi, dividend_lo, divisor );
					if ( bad ) cpu->state = status::err_div;
					return std::pair{ quot, rem };
				}, dividend_hi, dividend_lo, divisor );

				cpu->write_reg<T>( XED_REG_EAX, res.transform( []( auto& p ) {return p.first; } ) );
				cpu->write_reg<T>( XED_REG_EDX, res.transform( []( auto& p ) {return p.second; } ) );
				break;
			}
			case 8: {
				// RAX&RDX <| RDX:RAX /% OP1
				auto dividend_lo = cpu->read_reg<T>( XED_REG_RAX );
				auto dividend_hi = cpu->read_reg<T>( XED_REG_RDX );

				auto res = opt_apply( [&]( T dividend_hi, T dividend_lo, T divisor ) {
					auto [quot, rem, bad] = div_checked( dividend_hi, dividend_lo, divisor );
					if ( bad ) cpu->state = status::err_div;
					return std::pair{ quot, rem };
				}, dividend_hi, dividend_lo, divisor );

				cpu->write_reg<T>( XED_REG_RAX, res.transform( []( auto& p ) {return p.first; } ) );
				cpu->write_reg<T>( XED_REG_RDX, res.transform( []( auto& p ) {return p.second; } ) );
				break;
			}
		}
	}
	DECL_EMU( DIV ) {
		cpu->uvisit_n( dec, 0, [&]( auto divisor ) { return tmp_div( cpu, dec, divisor ); } );
	}; 
	DECL_EMU( IDIV ) {
		cpu->ivisit_n( dec, 0, [&]( auto divisor ) { return tmp_div( cpu, dec, divisor ); } );
	};

	// Main step function.
	//
	status vcpu::step( const xed::decoding& dec ) {
		// Set resume flag if previously stopped on a breakpoint.
		//
		bool lmtf = monitor_resume_flag;
		if ( state == status::bp ) {
			lmtf = true;
			state = status::ok;
		}
		monitor_resume_flag = false;

		// Step into it if CPU is running.
		//
		if ( state != status::ok )
			return state;

		// If MTF is not set, interrupt if at a breakpoint.
		//
		if ( !lmtf ) {
			// If we ran out of tokens, halt.
			//
			if ( !this->consume_token() ) {
				return ( state = status::err_timeout );
			}

			// If we reached a breakpoint, halt.
			//
			if ( std::find( std::begin( breakpoints ), std::end( breakpoints ), rip ) != std::end( breakpoints ) ) {
				return ( state = status::bp );
			}
		}

		// Fail if invalid instruction.
		//
		if ( !dec.is_valid( xed::chip_t::XED_CHIP_CANNONLAKE ) || dec.attribute( XED_ATTRIBUTE_RING0 ) ) {
			return( state = status::err_decode );
		}

		// Pick semantic function.
		//
		auto sema = dec.is_nop() ? sema_NOP : sema_INVALID;
		if ( auto icl = dec.iclass(); icl < std::size( known_semantics ) ) {
			if ( auto s = known_semantics[ icl ] ) {
				sema = s;
			}
		}

		// If we're tracing
		//
		size_t h0 = history.size();
		if ( tracing_enable && !xed::is_branch( dec.iclass() ) ) {
			//xstd::inspect( "Tracing for: ", dec );

			// With propagation?:
			//
			bool changed = false;
			if ( tracing_propagate ) {
				xed::encoding decn{ dec };
				auto add_ins = [&]( xed::encoding&& enc ) -> uint64_t& {
					auto res = enc.encode();
					if ( !res ) {
						static uint64_t dummy = 0;
						return dummy;
						//xstd::warning( "encoding failed: %s\n", res );
						//xstd::inspect( enc.to_string() );
					} else {
						auto& r = history.emplace_back( rip, *xed::decode64( *res ) );
						//xstd::inspect( "+= ", history.back().second );
						return r.first;
					}
				};

				// Load constant regs.
				//
				for ( size_t i = 0; i != dec.num_reg_operands(); i++ ) {
					auto r = dec.reg( i );
					if ( xed::is_gpr32( r ) ) {
						r = xed::extend_register( r );
					}
					if ( r == XED_REG_RSP || r == XED_REG_RIP ) continue;
					if ( auto v = read_reg( r ) ) {
						if ( ss_lea( *v, 1 ) < 0 ) {
							if ( auto w = xed::register_bit_width( r ); w == 64 ) {
								add_ins( xed::encode64( XED_ICLASS_MOV, xed::reg{ r }, xed::imm0u{ *v, 64 } ) );
							} else {
								add_ins( xed::encode64( XED_ICLASS_MOV, xed::reg{ r }, xed::imm0{ *v, w } ) );
							}
						}
					}
				}

				// Adjust memory operands.
				//
				for ( size_t i = 0; i != dec.num_mem_operands(); i++ ) {
					auto mem = dec.mem( i );
					auto adj_reg = [&]( xed::reg_t r ) -> xed::reg_t {
						if ( r != XED_REG_RSP && r != XED_REG_RIP && r != XED_REG_INVALID ) {
							// If constant:
							//
							if ( auto v = read_reg( r ) ) {
								// If within stack:
								//
								if ( ss_lea( *v, 1 ) >= 0 ) {
									// Replace with RSP, add offset.
									//
									if ( auto sp = rsp().to_optional() ) {
										mem.set_disp( mem.disp().value() + ( *v - *sp ) );
										changed = true;
										return XED_REG_RSP;
									}
								} else {
									// Replace with constant or load.
									//
									int64_t rel = ptrdiff_t( mem.disp().value() ) + *v;
									if ( int32_t( rel ) == rel ) {
										mem.set_disp( rel );
										changed = true;
										return XED_REG_INVALID;
									} else {
										add_ins( xed::encode64( XED_ICLASS_MOV, xed::reg{ r }, xed::imm0u{ *v, 64 } ) );
										return r;
									}
								}
							}
						}
						return r;
					};
					mem.set_base( adj_reg( mem.base() ) );
					mem.set_index( adj_reg( mem.index() ) );
					decn.set_mem( i, mem );
				}

				// If there is a single memory operand:
				//
				if ( dec.num_mem_operands() == 1 ) {
					//xstd::log( "single mem\n" );
					// If we know the stack pointer:
					if ( auto sp_ptr = rsp(); sp_ptr.known() ) {
						//xstd::log( "sp = %p\n", sp_ptr.value );
						// If we know the pointer being loaded:
						if ( auto mem_ptr = agen( dec, 0 ) ) {
							//xstd::log( "mem = %p\n", *mem_ptr );
							// If we have a shadow retptr pending:
							if ( ss_retptr_pos ) {
								//xstd::log( "ss_retptr = %p\n", ss_retptr_pos );
								auto min_addr = *mem_ptr;
								auto max_addr = *mem_ptr + dec.mem_width( 0 );
								auto min_dst = ss_retptr_pos;
								auto max_dst = ss_retptr_pos + 8;

								//xstd::log( "min_addr = %p\n", min_addr );
								//xstd::log( "max_addr = %p\n", max_addr );
								//xstd::log( "min_dst = %p\n", min_dst );
								//xstd::log( "max_dst = %p\n", max_dst );

								// If shadow-retptr and memory access overlap:
								if ( min_addr < max_dst && min_dst < max_addr ) {
									// Emit a store.
									auto& rip = add_ins( xed::encode64( 
										XED_ICLASS_KMOVQ, 
										xed::mem{ 64, XED_REG_RSP, xed::disp( ss_retptr_pos - sp_ptr.value ) },
										xed::reg( XED_REG_K0 )
									) );
									if ( ss_retptr_val ) {
										rip = ss_retptr_val;
									}
									// Clear shadow-retptr.
									ss_retptr_pos = 0;
								}
							}
						}
					}
				}

				// If changed, re-encode, emplace.
				//
				if ( changed ) {
					add_ins( std::move( decn ) );
				}
			}

			if ( !changed ) {
				history.emplace_back( rip, dec );
				//xstd::inspect( "+= ", dec );
			}
		}

		// Step through it.
		//
		uint64_t prev_rip = rip;
		rip = prev_rip + dec.length();
		sema( this, dec );
		if ( state != status::ok ) {
			xstd::shrink_resize( history, h0 );
			if ( state >= status::err ) {
				rip = prev_rip;
			}
		}
		return state;
	}
	status vcpu::step() {
		if ( auto rva = to_rva( rip ) ) {
			if ( auto dec = xed::decode64( img->data.subspan( *rva ) ) ) {
				return step( *dec );
			}
		}
		return ( state = status::err_decode );
	}

	// Basic-block level runner.
	//
	status vcpu::step_block() {
		do {
			step();
		} while ( state == status::ok );
		return state;
	}

	// Routine level runner.
	//
	status vcpu::run() {
		if ( !img ) 
			return status::err_decode;

		// Set resume flag if previously stopped on a breakpoint.
		//
		if ( state == status::bp ) {
			monitor_resume_flag = true;
			state = status::ok;
		}

		std::vector<uint64_t> branch_history;
		std::vector<vcpu*> states = { new vcpu( *this ) };
		states[ 0 ]->rip = rip;
		while ( !states.empty() ) {
			bool done = true;
			size_t limit = states.size();
			for ( size_t index = 0; index < limit; index++ ) {
				auto* cpu = states[ index ];

				// If it didn't start yet:
				//
				if ( cpu->state == status::ok ) {
					while ( true ) {
						// Run until we get a non-okay status.
						//
						auto state = cpu->step_block();

						// Break if we didn't stop beacuse of a branch.
						//
						if ( state != status::branch )
							break;

						// Fail if infinite loop.
						//
						auto br_kind = cpu->try_branch( cpu->rip, branch_history );
						if ( !br_kind )
							break;

						// Lê branch predictor.
						// - Intel CPUs assume forward branches are not taken the first time seen.
						//
						bool prediction;
						if ( *br_kind == branch_action::fork ) {
							prediction = branch_store < 0;
						} else {
							prediction = *br_kind == branch_action::take;
						}
					
						// If forking:
						//
						if ( br_kind == branch_action::fork ) {
							// Spawn the child.
							//
							auto* child = states.emplace_back( new vcpu( *cpu ) );
							child->resolve_branch( !prediction );

							// Mark loop changed since we have more states.
							//
							done = false;
						}
						cpu->resolve_branch( prediction );
					}
				}

				// If we got interrupted:
				//
				if ( cpu->state == status::bp ) {
					// Copy state, return.
					//
					*this = *cpu;
					for ( auto& e : states ) 
						delete e;
					return status::bp;
				}

				// If it errored, remove it from consideration.
				//
				delete cpu;
				states.erase( states.begin() + index );
				--limit; --index;
			}
			if ( done ) break;
		}

		// Failed to find a path.
		//
		for ( auto& e : states )
			delete e;
		return status::err_nopath;
	}

	std::string vcpu::dump() const {
		auto print_hexpart = [&]( partial<uint64_t> p ) {
			auto hv = xstd::fmt::print_ux<true>( p.value );
			for ( size_t i = 0; i != hv.size(); i++ ) {
				auto mask = 0xF000000000000000 >> ( 4 * i );
				if ( !p.known( mask ) ) {
					hv[ i ] = '?';
				}
			}
			return hv;
		};
		auto print_reg = [&]( int r ) {
			return print_hexpart( gprs[ r - XED_REG_RAX ] );
		};
		auto print_fl = [&]( int r ) {
			if ( rflags.known( r ) ) {
				return ( rflags.value & r ) ? '1' : '0';
			} else {
				return '?';
			}
		};


		std::string result = {};
		xed::result<xed::decoding> dec = std::nullopt;
		if ( img ) {
			if ( auto rva = xstd::narrow_cast_s<uint32_t>( rip - img->base_address ) ) {
				if ( auto* scn = img->get_section( *rva ) ) {
					dec = scn->decode( img, *rva );
				}
			}
		}
		result += xstd::fmt::str( "-----------[VM-%s]----------\n", xstd::try_name_enum( this->state ) );
		result += xstd::fmt::str( "[IP: 33:%p | SP: 2B:%s] %s\n", rip, print_reg( XED_REG_RSP ), dec ? dec->to_string( rip ) : "-"s );
		result += xstd::fmt::str( "[CF:%c PF:%c AF:%c ZF:%c SF:%c DF:%c OF:%c]\n", print_fl( CF ), print_fl( PF ), print_fl( AF ), print_fl( ZF ), print_fl( SF ), print_fl( DF ), print_fl( OF ) );
		result += "Features: ";
		if ( rdata_enable )      result += "RDATA_PROP ";
		if ( ss_enable )         result += "SYM_STACK ";
		if ( shadow_rip )        result += "SHADOW_RIP ";
		if ( cmov_lax )          result += "LAX_CMOV ";
		if ( tracing_enable )    result += "TRACING ";
		if ( tracing_propagate ) result += "TRACING_PROP ";
		for ( auto& bp : breakpoints ) {
			if ( bp ) result += xstd::fmt::str( "BP[%p] ", bp );
		}
		for ( auto& [va,cc] : forced_branches ) {
			if ( va ) result += xstd::fmt::str( "CC[%p=%d] ", va, cc );
		}
		result += "\n";
		result += "-----------[REG]----------\n";
		result += xstd::fmt::str( "RAX: %s  RCX: %s  RDX: %s  RBX:  %s\n", print_reg( XED_REG_RAX ), print_reg( XED_REG_RCX ), print_reg( XED_REG_RDX ), print_reg( XED_REG_RBX ) );
		result += xstd::fmt::str( "RBP: %s  RSI: %s  RDI: %s  R8:   %s\n", print_reg( XED_REG_RBP ), print_reg( XED_REG_RSI ), print_reg( XED_REG_RDI ), print_reg( XED_REG_R8 ) );
		result += xstd::fmt::str( "R9:  %s  R10: %s  R11: %s  R12:  %s\n", print_reg( XED_REG_R9 ), print_reg( XED_REG_R10 ), print_reg( XED_REG_R11 ), print_reg( XED_REG_R12 ) );
		result += xstd::fmt::str( "R13: %s  R14: %s  R15: %s\n", print_reg( XED_REG_R13 ), print_reg( XED_REG_R14 ), print_reg( XED_REG_R15 ) );
		result += "-----------[MEM]----------\n";
		for ( size_t i = 0; (i+8) <= std::size(ss_arena); i += 8 ) {
			auto v = *(const uint64_t*) &ss_arena[ i ];
			auto m = *(const uint64_t*) &ss_known[ i ];
			if ( !m ) continue;

			auto val_ptr = i + ss_ptr_limit;

			partial<uint64_t> p{ v,m };
			result += xstd::fmt::str( " - %p {sp0%s}: %s\n",
									  val_ptr,
									  xstd::fmt::offset( val_ptr - ss_ptr0 ),
									  print_hexpart( p )
									  );
		}
		if ( !history.empty() ) {
			result += "-----------[HIS]----------\n";
			for ( auto& [rip, ins] : history ) {
				result += xstd::fmt::str( "%p: %s\n", rip, ins.to_string( rip ) );
			}
		}
		result += "--------------------------\n";
		return result;
	}
};