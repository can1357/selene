#pragma once
#include <xedpp.hpp>
#include <optional>
#include <xstd/object_pool.hpp>
#include <flash/image.hpp>
#include <xstd/small_vector.hpp>
#include <xstd/narrow_cast.hpp>

namespace flash::vm {
	template<typename T, size_t Bits = 64>
	static constexpr auto ireshape = []( uint64_t v ) FORCE_INLINE->T{
		if constexpr ( std::is_signed_v<T> ) {
			return (T) xstd::sign_extend( v, Bits );
		} else {
			return (T) xstd::zero_extend( v, Bits );
		}
	};
	static constexpr std::optional<bool> bool_and( std::optional<bool> a, std::optional<bool> b ) {
		if ( a.has_value() && b.has_value() ) {
			return *a && *b;
		} else if ( a.has_value() ) {
			return !*a ? std::optional{ false } : std::nullopt;
		} else if ( b.has_value() ) {
			return !*b ? std::optional{ false } : std::nullopt;
		}
		return std::nullopt;
	}
	static constexpr std::optional<bool> bool_or( std::optional<bool> a, std::optional<bool> b ) {
		if ( a.has_value() && b.has_value() ) {
			return *a || *b;
		} else if ( a.has_value() ) {
			return *a ? std::optional{ true } : std::nullopt;
		} else if ( b.has_value() ) {
			return *b ? std::optional{ true } : std::nullopt;
		}
		return std::nullopt;
	}
	static constexpr std::optional<bool> bool_xor( std::optional<bool> a, std::optional<bool> b ) {
		if ( a.has_value() && b.has_value() ) {
			return *a != *b;
		}
		return std::nullopt;
	}
	static constexpr std::optional<bool> bool_not( std::optional<bool> a ) {
		if ( a.has_value() ) {
			return !*a;
		}
		return std::nullopt;
	}
	template<typename F, typename... Tx>
	static constexpr auto opt_apply( F&& fn, std::optional<Tx>... values ) -> std::optional<decltype( fn( std::declval<Tx>()... ) )> {
		if ( ( values.has_value() && ... ) ) {
			return fn( *values... );
		}
		return std::nullopt;
	}

	// Flags for convenience.
	//
	static constexpr uint64_t CF =  0x0001;
	static constexpr uint64_t PF =  0x0004;
	static constexpr uint64_t AF =  0x0010;
	static constexpr uint64_t ZF =  0x0040;
	static constexpr uint64_t SF =  0x0080;
	static constexpr uint64_t TF =  0x0100;
	static constexpr uint64_t DF =  0x0400;
	static constexpr uint64_t OF =  0x0800;
	static constexpr uint64_t NTF = 0x4000;
	static constexpr uint64_t IDF = 0x200000;
	static constexpr uint64_t rflags_fixed_m = 0xFFFFFFFF'FFFFF000 | 0x200 | 0x100 | 0x20 | 0x8 | 0x2;
	static constexpr uint64_t rflags_fixed_v = 0x202;
	static constexpr uint64_t rflags_lahf_mask =      ZF | SF | CF | PF | AF;
	static constexpr uint64_t rflags_memop_mask =     DF | OF | rflags_lahf_mask;
	static constexpr uint64_t rflags_load_mask_cpl3 = TF | NTF | IDF | rflags_memop_mask;

	// Symbolic stack pointer.
	//
	static constexpr uint64_t ss_ptr0 =   0x000000786B38F2A08;
	static constexpr size_t   ss_shift =  512;
	static constexpr size_t   ss_limit =  64_kb;
	static constexpr uint64_t ss_ptr_limit = ss_ptr0 - (ss_limit - ss_shift);
	static constexpr uint64_t ss_ptr_base =  ss_ptr0 + ss_shift;

	// Partial values.
	//
	template<typename T, T FixedValue = 0, T FixedMask = 0>
	struct partial {
		T value = 0;
		T mask =  0;

		template<int Shift = 0, int Bits = 64>
		std::optional<T> select( T request = ~T(0) ) const {
			request &= xstd::fill_bits( Bits );
			if ( known<Shift, Bits>( request ) ) {
				return T( ( ( value | FixedValue ) >> Shift ) & request );
			}
			return std::nullopt;
		}

		template<int Shift = 0, int Bits = 64>
		bool known( T m = ~T( 0 ) ) const {
			m &=  xstd::fill_bits( Bits );
			m <<= Shift;
			return ( ( mask | FixedMask ) & m ) == m;
		}

		template<int Shift = 0, int Bits = 64>
		void undef( T m = ~T( 0 ) ) {
			m &=  xstd::fill_bits( Bits );
			m <<= Shift;
			mask &= ~m;
		}
		template<int Shift = 0, int Bits = 64>
		void write( std::optional<T> v, T m = ~T( 0 ) ) {
			m &=  xstd::fill_bits( Bits );
			m <<= Shift;
			m &= ~FixedMask;

			if ( v ) {
				mask |= m;
				value ^= ( value ^ ( *v << Shift ) ) & m;
			} else {
				mask &= ~m;
			}
		}

		template<typename Ty = T>
		std::optional<Ty> to_optional() const {
			bitcnt_t min_bits = ( bitcnt_t ) std::min( sizeof( Ty ), sizeof( T ) ) * 8;
			uint64_t required = xstd::fill_bits( min_bits );
			if ( ( mask & required ) == required ) {
				if constexpr ( std::is_signed_v<Ty> ) {
					return (Ty) xstd::sign_extend( value & required, min_bits );
				} else {
					return (Ty) xstd::zero_extend( value & required, min_bits );
				}
			}
			return std::nullopt;
		}
	};


	enum class status : uint8_t {
		ok,
		
		// Exit out of recursive loop:
		//
		bp,

		// Exit out of local loop:
		//
		branch,

		// Fatal errors:
		//
		err,
		err_timeout,
		err_unk_flow,
		err_div,
		err_non_cannon,
		err_decode,
		err_loop,
		err_nopath
	};
	enum class branch : uint8_t {
		z,       nz,
		s,       ns,
		b,       nb,
		p,       np,
		o,       no,
		l,       nl,
		be,      nbe,
		le,      nle,
		cxz,     nxz,
		ecxz,    necxz,
		rcxz,    nrcxz,
		loope,   nloope,
		loopne,  nloopne,
		loop,    nloop
	};
	enum class branch_action : uint8_t {
		take,
		dont_take,
		fork
	};

	// VM state.
	//
	struct vcpu {
		// State and configuration.
		//
		image*                    img                 = nullptr;
		uintptr_t                 user_data           = 0;
		mutable status            state               = status::ok;
		bool                      rdata_enable        = true;
		bool                      ss_enable           = true;
		bool                      shadow_rip          = true;
		bool                      cmov_lax            = true;
		bool                      tracing_enable      = false;
		bool                      tracing_propagate   = true;
		bool                      monitor_resume_flag = false;
		uint64_t                  breakpoints[ 4 ] = {};
		std::pair<uint64_t, bool> forced_branches[ 4 ] = {};
		std::vector<std::pair<uint64_t, xed::decoding>> history = {};

		// Details of the pending branch for status::branch.
		//
		int32_t branch_store = 0;
		branch  branch_store_cc = {};

		// Limits.
		//
		uint32_t        call_tokens = 0;
		uint32_t        step_tokens = 8192;

		// Register file.
		//
		uint64_t          rip = 0;
		partial<uint64_t, rflags_fixed_v, rflags_fixed_m> rflags = {
			.value = 0,
			.mask =  DF // As per MSABI.
		};
		partial<uint64_t> gprs[ 16 ] = {}; // Starting at XED_REG_RAX.

		// Symbolic stack.
		//
		uint64_t             ss_nextptr = ss_ptr0;
		uint8_t              ss_arena[ ss_limit ] = { 0 };
		uint8_t              ss_known[ ss_limit ] = { 0 };

		// Retptr injection.
		//
		uint64_t             ss_retptr_pos = 0;
		uint64_t             ss_retptr_val = 0;

		// Introspection control.
		//
		bool ctl_breakpoint( uint64_t va, bool enabled ) {
			for ( auto& bp : breakpoints ) {
				if ( bp == va ) {
					if ( !enabled )
						bp = 0;
					return true;
				}
			}
			if ( !enabled ) return false;
			for ( auto& bp : breakpoints ) {
				if ( bp == 0 ) {
					bp = va;
					return true;
				}
			}
			return false;
		}
		bool ctl_branch( uint64_t va, std::optional<bool> cc ) {
			for ( auto& [ip, c] : forced_branches ) {
				if ( ip == va ) {
					if ( cc.has_value() ) {
						c = *cc;
					} else {
						ip = 0;
					}
					return true;
				}
			}
			if ( !cc.has_value() ) return false;
			for ( auto& [ip, c] : forced_branches ) {
				if ( ip == 0 ) {
					ip = va;
					c =  *cc;
					return true;
				}
			}
			return false;
		}

		// CPU limits.
		//
		std::optional<branch_action> try_branch( uint64_t rip, std::vector<uint64_t>& branch_history ) {
			auto it_0 = std::find( branch_history.begin(), branch_history.end(), rip );
			auto it_1 = std::find( branch_history.begin(), branch_history.end(), rip + branch_store );
			
			// If we took [cc=0] before:
			//
			if ( it_0 != branch_history.end() ) {
				// If we took [cc=1] before:
				//
				if ( it_1 != branch_history.end() ) {
					state = status::err_loop;
					return std::nullopt;
				}

				// Take.
				//
				branch_history.push_back( rip + branch_store );
				return branch_action::take;
			}

			// If we took [cc=1] before:
			//
			if ( it_1 != branch_history.end() ) {
				// Don't take.
				//
				branch_history.push_back( rip );
				return branch_action::dont_take;
			}

			// Fork.
			//
			branch_history.push_back( rip + branch_store );
			branch_history.push_back( rip );
			return branch_action::fork;
		}
		bool consume_call_token() {
			if ( !call_tokens ) {
				return false;
			}
			--call_tokens;
			return true;
		}
		bool consume_token() {
			if ( !step_tokens ) {
				return false;
			}
			--step_tokens;
			return true;
		}

		// Symbolic stack utilities.
		//
		ptrdiff_t ss_lea( uint64_t ptr, size_t width ) const {
			if ( ss_enable && /*ss_ptr_limit <= ptr && */ ( ptr + width ) <= ss_ptr_base ) {
				return ptr - ss_ptr_limit;
			}
			return -1;
		}
		template<typename T>
		std::optional<T> ss_read( ptrdiff_t offset, T mask = (T) xstd::fill_bits( sizeof( T ) * 8 ) ) const {
			if ( ( offset + sizeof( T ) ) > std::size( ss_known ) ) {
				return std::nullopt;
			}
			
			T v = *(const T*) &ss_arena[ offset ];
			T m = *(const T*) &ss_known[ offset ];
			if ( ( m & mask ) != mask )
				return std::nullopt;
			return v & mask;
		}
		template<typename T>
		bool ss_write( ptrdiff_t offset, std::optional<T> value, T mask = (T) xstd::fill_bits( sizeof( T ) * 8 ) ) {
			T& v = *(T*) &ss_arena[ offset ];
			T& m = *(T*) &ss_known[ offset ];
			if ( value ) {
				m |= mask;
				v ^= ( *value ^ v ) & mask;
			} else {
				m &= ~mask;
			}
			return true;
		}

		// Memory emulator.
		//
		template<typename T>
		std::optional<T> mem_read( std::optional<uint64_t> ptr, uint64_t mask = ~0ull ) const {
			if ( !ptr ) return std::nullopt;

			// Emulate #GP for non-cannonical and #PF for kernel VA.
			//
			if ( *ptr >> 48 ) {
				state = status::err_non_cannon;
				return std::nullopt;
			}
			
			// Handle symbolic stack.
			//
			if ( auto off = ss_lea( *ptr, sizeof( T ) ); off >= 0 ) {
				return ss_read<T>( off, (T)mask );
			}

			// Handle RDATA.
			//
			if ( rdata_enable && img ) {
				if ( auto rva = to_rva( *ptr ) ) {
					auto scn = img->get_section( *rva );
					if ( !scn || scn->type == flash::section::rdata || scn->type == flash::section::text ) {
						return T( mask ) & ( *(const T*) &img->data[ *rva ] );
					}
					return std::nullopt;
				}
			}

			// TODO: KUSER_SHARED_DATA, TEB...
			//

			// Fail.
			//
			return std::nullopt;
		}
		template<typename T>
		bool mem_write( std::optional<uint64_t> ptr, std::optional<T> value, uint64_t mask = ~0ull ) {
			if ( !ptr ) return false;

			// Emulate #GP for non-cannonical and #PF for kernel VA.
			//
			if ( *ptr >> 48 ) {
				state = status::err_non_cannon;
				return false;
			}

			// Handle symbolic stack.
			//
			if ( auto off = ss_lea( *ptr, sizeof(T)); off >= 0 ) {
				return ss_write<T>( off, value, (T) mask );
			}

			// Fail.
			//
			return false;
		}

		// EFlags access.
		//
		std::optional<uint64_t> read_flags( uint64_t mask ) const {
			return rflags.select( mask );
		}
		void write_flags( uint64_t mask, std::optional<uint64_t> value ) {
			rflags.write( value, mask );
		}
		std::optional<bool> read_flag( uint64_t mask ) const {
			return read_flags( mask ).transform( [] ( auto v ) { return bool( v ); } );
		}
		void write_flag( uint64_t mask, std::optional<bool> value ) {
			write_flags( mask, value.transform( [&]( auto b ) {return b ? mask : 0; } ) );
		}

		// Register access.
		//
		partial<uint64_t>& rsp() {
			auto& res = gprs[ XED_REG_RSP - XED_REG_RAX ]; 
			if ( ss_enable && !res.known() ) {
				res.write( ss_nextptr );
				ss_nextptr -= 1_kb;
				ss_nextptr &= ~0xFull;
			}
			return res;
		}
		const partial<uint64_t>& rsp() const { return const_cast<vcpu*>( this )->rsp(); }

		template<typename Ty = uint64_t>
		std::optional<Ty> read_reg( xed::reg_t r, uint64_t mask = ~0ull ) const {
			// Handle symbolic stack pointer.
			//
			if ( ( r == XED_REG_RSP || r == XED_REG_ESP || r == XED_REG_SP || r == XED_REG_SPL ) && ss_enable ) {
				rsp(); // Asserts SSPTR.
			}

			// Handle GPRs.
			//
			if ( xed::is_gpr64( r ) ) {
				return gprs[ r - XED_REG_RAX ].select( mask ).transform( ireshape<Ty> );
			} else if ( xed::is_gpr32( r ) ) {
				return gprs[ r - XED_REG_EAX ].select<0, 32>( mask ).transform( ireshape<Ty, 32> );
			} else if ( xed::is_gpr16( r ) ) {
				return gprs[ r - XED_REG_AX ].select<0, 16>( mask ).transform( ireshape<Ty, 16> );
			} else if ( xed::is_gpr8( r ) ) {
				return gprs[ r - XED_REG_AL ].select<0, 8>( mask ).transform( ireshape<Ty, 8> );
			} else if ( xed::is_gpr8h( r ) ) {
				return gprs[ r - XED_REG_AH ].select<8, 8>( mask ).transform( ireshape<Ty, 8> );
			} 
			// Handle flags.
			//
			else if ( r == XED_REG_RFLAGS ) {
				return rflags.select( mask ).transform( ireshape<Ty> );
			} else if ( r == XED_REG_EFLAGS ) {
				return rflags.select<0, 32>( mask ).transform( ireshape<Ty, 32> );
			} else if ( r == XED_REG_FLAGS ) {
				return rflags.select<0, 16>( mask ).transform( ireshape<Ty, 16> );
			} 
			// Handle RIP.
			//
			else if ( r == XED_REG_RIP ) {
				return ireshape<Ty>( mask & rip );
			} else if ( r == XED_REG_EIP ) {
				return ireshape<Ty, 32>( mask & (uint32_t)rip );
			} else if ( r == XED_REG_IP ) {
				return ireshape<Ty, 16>( mask & (uint16_t)rip );
			}

			// Handle segment selectors, map invalid to 0.
			//
			if ( r == XED_REG_INVALID ) return (Ty) 0;
			if ( r == XED_REG_CS ) return ireshape<Ty, 16>( mask & 0x33 );
			if ( r == XED_REG_GS ) return ireshape<Ty, 16>( mask & 0x2B );
			if ( r == XED_REG_FS ) return ireshape<Ty, 16>( mask & 0x2B );
			if ( r == XED_REG_ES ) return ireshape<Ty, 16>( mask & 0x2B );
			if ( r == XED_REG_DS ) return ireshape<Ty, 16>( mask & 0x2B );
			if ( r == XED_REG_SS ) return ireshape<Ty, 16>( mask & 0x2B );

			// No idea.
			//
			return std::nullopt;
		}
		template<typename Ty = uint64_t>
		bool write_reg( xed::reg_t r, std::optional<Ty> value_s, uint64_t mask = ~0ull ) {
			std::optional<uint64_t> value = value_s.transform( []( auto x ) { return (uint64_t) (int64_t) x; } );

			// Terminate if RIP is unknown.
			//
			if ( !value && ( r == XED_REG_RIP || r == XED_REG_EIP || r == XED_REG_IP ) ) {
				state = status::err_unk_flow;
				value = 0;
			}

			// Handle GPRs.
			//
			if ( xed::is_gpr64( r ) ) {
				gprs[ r - XED_REG_RAX ].write( value, mask );
			} else if ( xed::is_gpr32( r ) ) {
				gprs[ r - XED_REG_EAX ].write<0,  32>( value, mask );
				gprs[ r - XED_REG_EAX ].write<32, 32>( 0 );
			} else if ( xed::is_gpr16( r ) ) {
				gprs[ r - XED_REG_AX ].write<0, 16>( value, mask );
			} else if ( xed::is_gpr8( r ) ) {
				gprs[ r - XED_REG_AL ].write<0, 8>( value, mask );
			} else if ( xed::is_gpr8h( r ) ) {
				gprs[ r - XED_REG_AH ].write<8, 8>( value, mask );
			}
			// Handle flags.
			//
			else if ( r == XED_REG_RFLAGS ) {
				rflags.write( value, mask );
			} else if ( r == XED_REG_EFLAGS ) {
				rflags.write<0, 32>( value, mask );
			} else if ( r == XED_REG_FLAGS ) {
				rflags.write<0, 64>( value, mask );
			}
			// Handle IP.
			//
			else if ( r == XED_REG_RIP ) {
				rip &= ~mask;
				rip |= *value & mask;
			} else if ( r == XED_REG_EIP ) {
				rip &= 0xFFFFFFFF;
				mask &= 0xFFFFFFFF;
				rip &= ~mask;
				rip |= *value & mask;
			} else if ( r == XED_REG_IP ) {
				mask &= 0xFFFF;
				rip &= ~mask;
				rip |= *value & mask;
			} else {
				return false;
			}
			return true;
		}

		// Operand utilities.
		//
		std::optional<uint64_t> agen( const xed::decoding& dec, size_t n ) const {
			if ( auto seg = dec.mem_seg( n ); seg == XED_REG_FS || seg == XED_REG_GS ) {
				return std::nullopt;
			}
			auto base = read_reg( dec.mem_base( n ) );
			if ( !base ) return std::nullopt;
			auto idx =  read_reg( dec.mem_index( n ) );
			if ( !idx ) return std::nullopt;
			return *base + *idx * dec.mem_scale( n ) + dec.mem_disp_value( n );
		}
		template<typename Ty = uint64_t>
		std::optional<Ty> load( const xed::decoding& dec, xed::op_name_t op, uint64_t mask = ~0ull ) const {
			mask &= xstd::fill_bits( sizeof( Ty ) * 8 );

			switch ( op ) {
				case XED_OPERAND_AGEN: {
					return agen( dec, 0 ).transform( [&]( auto x ) { return ireshape<Ty>( Ty(x) & mask ); } );
				}
				case XED_OPERAND_PTR:
				case XED_OPERAND_MEM0:
				case XED_OPERAND_MEM1: {
					size_t idx = op == XED_OPERAND_MEM1 ? 1 : 0;
					auto adr =   agen( dec, idx );
					switch ( dec.mem_width( idx ) ) {
						case 1: return mem_read<uint8_t>(  adr, mask ).transform( ireshape<Ty, 8> );
						case 2: return mem_read<uint16_t>( adr, mask ).transform( ireshape<Ty, 16> );
						case 4: return mem_read<uint32_t>( adr, mask ).transform( ireshape<Ty, 32> );
						case 8: return mem_read<uint64_t>( adr, mask ).transform( ireshape<Ty> );
						default: break;
					}
					return std::nullopt;
				}
				case XED_OPERAND_RELBR: {
					return ireshape<Ty>( Ty( mask ) & Ty( rip + dec.relbr_value() ) );
				}
				case XED_OPERAND_REG ... XED_OPERAND_REG8: {
					return read_reg<Ty>( dec.reg( op ), mask );
				}
				case XED_OPERAND_UIMM0:
					return Ty( mask ) & (Ty) dec.imm0u_value();
				case XED_OPERAND_UIMM1:
					return Ty( mask ) & (Ty) dec.imm1u_value();
				case XED_OPERAND_IMM0:
				case XED_OPERAND_IMM0SIGNED:
					return Ty( mask ) & (Ty) dec.imm0_value();
				case XED_OPERAND_IMM1:
				case XED_OPERAND_IMM1_BYTES:
					return Ty( mask ) & (Ty) dec.imm1_value();
				default:
					break;
			}
			return std::nullopt;
		}
		template<typename Ty = uint64_t>
		bool store( const xed::decoding& dec, xed::op_name_t op, std::optional<Ty> value, uint64_t mask = ~0ull ) {
			switch ( op ) {
				case XED_OPERAND_PTR:
				case XED_OPERAND_MEM0:
				case XED_OPERAND_MEM1: {
					size_t idx = op == XED_OPERAND_MEM1 ? 1 : 0;
					auto adr = agen( dec, idx );
					switch ( dec.mem_width( idx ) ) {
						case 1: return mem_write<uint8_t>(  adr, value.transform( [](auto x){ return (uint8_t)(int8_t) x;} ), mask );
						case 2: return mem_write<uint16_t>( adr, value.transform( [](auto x){ return (uint16_t)(int16_t) x;} ), mask );
						case 4: return mem_write<uint32_t>( adr, value.transform( [](auto x){ return (uint32_t)(int32_t) x;} ), mask );
						case 8: return mem_write<uint64_t>( adr, value.transform( [](auto x){ return (uint64_t)(int64_t) x;} ), mask );
						default: break;
					}
					return false;
				}
				case XED_OPERAND_REG ... XED_OPERAND_REG8: {
					return write_reg<Ty>( dec.reg( op ), value, mask );
				}
				default:
					return false;
			}
		}
		template<typename Ty = uint64_t>
		std::optional<Ty> load_n( const xed::decoding& dec, size_t i, uint64_t mask = ~0ull ) const {
			return load<Ty>( dec, dec.operand( i )->name(), mask );
		}
		template<typename Ty = uint64_t>
		bool store_n( const xed::decoding& dec, size_t i, std::optional<Ty> value, uint64_t mask = ~0ull ) {
			return store( dec, dec.operand( i )->name(), value, mask );
		}

		// Visit helper.
		//
		template<typename F>
		decltype(auto) uvisit_n( const xed::decoding& dec, size_t i, F&& fn ) const {
			switch ( dec.operand_len_bits( i ) ) {
				case 8:  return fn( load_n<uint8_t>( dec, i ) );
				case 16: return fn( load_n<uint16_t>( dec, i ) );
				case 32: return fn( load_n<uint32_t>( dec, i ) );
				default:
				case 64: return fn( load_n<uint64_t>( dec, i ) );
			}
		}
		template<typename F>
		decltype(auto) ivisit_n( const xed::decoding& dec, size_t i, F&& fn ) const {
			switch ( dec.operand_len_bits( i ) ) {
				case 8:  return fn( load_n<int8_t>( dec, i ) );
				case 16: return fn( load_n<int16_t>( dec, i ) );
				case 32: return fn( load_n<int32_t>( dec, i ) );
				default:
				case 64: return fn( load_n<int64_t>( dec, i ) );
			}
		}

		// Conditional helpers.
		//
		std::optional<bool> test_branch( branch b ) const {
			if ( ( uint8_t( b ) & 1 ) ) {
				return test_branch( branch( uint8_t( b ) ^ 1 ) ).transform( []( bool b ) {return !b; } );
			}
			switch ( b ) {
				case branch::z:       return read_flag( ZF );
				case branch::s:       return read_flag( SF );
				case branch::b:       return read_flag( CF );
				case branch::p:       return read_flag( PF );
				case branch::o:       return read_flag( OF );
				case branch::l:       return opt_apply( []( bool o, bool s ) { return o != s; }, read_flag( OF ), read_flag( SF ) );
				case branch::be:      return bool_or( test_branch( branch::b ), test_branch( branch::z ) );
				case branch::le:      return bool_or( test_branch( branch::l ), test_branch( branch::z ) );
				case branch::cxz:     return read_reg( XED_REG_CX ).transform( []( auto v ) { return v == 0; } );
				case branch::ecxz:    return read_reg( XED_REG_ECX ).transform( []( auto v ) { return v == 0; } );
				case branch::rcxz:    return read_reg( XED_REG_RCX ).transform( []( auto v ) { return v == 0; } );
				case branch::loop:    return test_branch( branch::nrcxz );
				case branch::loope:   return bool_and( test_branch( branch::nrcxz ), test_branch( branch::z ) );
				case branch::loopne:  return bool_and( test_branch( branch::nrcxz ), test_branch( branch::nz ) );
				default: unreachable();
			}
		}
		void assume_branch( branch b, bool taken ) {
			if ( ( uint8_t( b ) & 1 ) ) {
				return assume_branch( branch( uint8_t( b ) ^ 1 ), !taken );
			}
			switch ( b ) {
				case branch::z:    return write_flag( ZF, taken );
				case branch::s:    return write_flag( SF, taken );
				case branch::b:    return write_flag( CF, taken );
				case branch::p:    return write_flag( PF, taken );
				case branch::o:    return write_flag( OF, taken );
				case branch::l: {
					if ( auto sf = rflags.select( SF ); sf.has_value() ) {
						return write_flag( OF, taken ? !bool(*sf) : bool(*sf) );
					} else if ( auto of = rflags.select( OF ); of.has_value() ) {
						return write_flag( SF, taken ? !bool(*of) : bool(*of) );
					} else {
						return write_flags( SF | OF, SF );
					}
				}
				case branch::be: {
					assume_branch( branch::b, taken );
					return assume_branch( branch::z, taken );
				}
				case branch::le: {
					assume_branch( branch::l, taken );
					return assume_branch( branch::z, taken );
				}
				case branch::cxz:  
				case branch::ecxz: 
				case branch::rcxz: {
					xed::reg_t reg = XED_REG_RCX;
					if ( b == branch::ecxz ) reg = XED_REG_ECX;
					if ( b == branch::cxz )  reg = XED_REG_CX;

					if ( taken ) {
						return (void) write_reg<uint64_t>( reg, 0 );
					} else {
						uint64_t non_zero_sample = read_reg( reg ).value_or( 0 );
						if ( !non_zero_sample ) non_zero_sample = 1;
						return (void) write_reg<uint64_t>( reg, non_zero_sample );
					}
				}
				case branch::loop: {
					assume_branch( branch::nrcxz, taken );
					return assume_branch( branch::z, taken );
				}
				case branch::loope: {
					assume_branch( branch::nrcxz, taken );
					return assume_branch( branch::z, taken );
				}
				case branch::loopne: {
					assume_branch( branch::nrcxz, taken );
					return assume_branch( branch::nz, taken );
				}
				default: unreachable();
			}
		}
		void resolve_branch( bool taken ) {
			assume_branch( branch_store_cc, taken );
			state = status::ok;
			if ( taken ) rip += branch_store;
			branch_store = {};
			branch_store_cc = {};
		}
		
		// Emulator.
		//
		status step( const xed::decoding& dec );
		status step();
		status step_block();
		status run();

		// Sets a pretend return address.
		//
		void set_retptr( uint64_t va, int64_t sp_offset ) {
			if ( auto& sp = rsp(); sp.known() ) {
				ss_retptr_pos = sp.value + sp_offset;
				ss_retptr_val = va;
			}
		}

		// RVA <=> VA conversion.
		//
		std::optional<uint32_t> to_rva( uint64_t va ) const {
			if ( img && img->base_address <= va && va <= ( img->base_address + img->data.size() ) ) {
				return xstd::narrow_cast_s<uint32_t>( va - img->base_address );
			}
			return std::nullopt;
		}
		uint64_t to_va( uint64_t rva ) const {
			if ( !img || rva > img->data.size() ) 
				return rva;
			return rva + img->base_address;
		}

		// Debug.
		//
		std::string dump() const;
	};
};