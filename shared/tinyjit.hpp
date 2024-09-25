#pragma once
#include <xstd/type_helpers.hpp>
#include <span>
#include <array>
#include <optional>
#include <variant>

namespace tinyjit
{
	// Nop table.
	//
	static constexpr size_t max_nop_length = 15;
	static constexpr uint8_t nop_table[ max_nop_length + 1 ][ max_nop_length ] = {
		{},
		{ 0x90 },
		{ 0x66, 0x90 },
		{ 0x0F, 0x1F, 0x00 },
		{ 0x0F, 0x1F, 0x40, 0x00 },
		{ 0x0F, 0x1F, 0x44, 0x00, 0x00 },
		{ 0x66, 0x0F, 0x1F, 0x44, 0x00, 0x00 },
		{ 0x0F, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00 },
		{ 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x66, 0x2E, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x66, 0x66, 0x2E, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x66, 0x66, 0x66, 0x2E, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x66, 0x66, 0x66, 0x66, 0x2E, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x66, 0x66, 0x66, 0x66, 0x66, 0x2E, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x2E, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00 }
	};

	// Register indexes.
	//
	static constexpr uint8_t extend_rex_flag = 8;
	static constexpr uint8_t force_rex_flag = 16;
	enum class r64 : uint8_t
	{
		rax = 0,
		rcx = 1,
		rdx = 2,
		rbx = 3,
		rsp = 4,
		rbp = 5,
		rsi = 6,
		rdi = 7,
		r8 =  8,
		r9 =  9,
		r10 = 10,
		r11 = 11,
		r12 = 12,
		r13 = 13,
		r14 = 14,
		r15 = 15,
	};
	enum class r32 : uint8_t
	{
		eax =  0,
		ecx =  1,
		edx =  2,
		ebx =  3,
		esp =  4,
		ebp =  5,
		esi =  6,
		edi =  7,
		r8d =  8,
		r9d =  9,
		r10d = 10,
		r11d = 11,
		r12d = 12,
		r13d = 13,
		r14d = 14,
		r15d = 15,
	};
	enum class r16 : uint8_t
	{
		ax =   0,
		cx =   1,
		dx =   2,
		bx =   3,
		sp =   4,
		bp =   5,
		si =   6,
		di =   7,
		r8w =  8,
		r9w =  9,
		r10w = 10,
		r11w = 11,
		r12w = 12,
		r13w = 13,
		r14w = 14,
		r15w = 15,
	};
	enum class r8 : uint8_t
	{
		al =   0,
		cl =   1,
		dl =   2,
		bl =   3,

		ah =   4,
		ch =   5,
		dh =   6,
		bh =   7,
		spl =  4 | force_rex_flag,
		bpl =  5 | force_rex_flag,
		sil =  6 | force_rex_flag,
		dil =  7 | force_rex_flag,
		
		r8b =  8,
		r9b =  9,
		r10b = 10,
		r11b = 11,
		r12b = 12,
		r13b = 13,
		r14b = 14,
		r15b = 15,
	};

	// Legacy prefixes.
	//
	enum class prefix : uint8_t
	{
		invalid = 0x00,

		lock =  0xF0,
		
		repnz = 0xF2,
		rep =   0xF3, 
		repz =  0xF3,
		
		cs =    0x2E,
		ss =    0x36,
		ds =    0x3E,
		es =    0x26,
		fs =    0x64,
		gs =    0x65,

		opsz =  0x66,
		adsz =  0x67,
	};

	// REX, ModR/M, SIB encodings.
	//
	struct rex_t
	{
		bool b = false; // extends rm / base
		bool x = false; // extends idx
		bool r = false; // extends reg
		bool w = false; // wide op
		bool force = false;
		
		FORCE_INLINE constexpr bool redundant() const { return !b && !x && !r && !w && !force; }
		FORCE_INLINE constexpr uint8_t encode() const
		{
			uint8_t result = 0x40;
			result |= b ? 1 : 0;
			result |= x ? 2 : 0;
			result |= r ? 4 : 0;
			result |= w ? 8 : 0;
			return result;
		}
		FORCE_INLINE constexpr void extend( bool& at, uint8_t& v )
		{
			force |= v & force_rex_flag;
			at =     v & extend_rex_flag;
			v &= ~( force_rex_flag | extend_rex_flag );
		}
	};
	struct modrm_t
	{
		uint8_t rm = 0;
		uint8_t reg = 0;
		uint8_t mod = 0;

		FORCE_INLINE constexpr void set_rm( rex_t& x, uint8_t v )
		{
			x.extend( x.b, v );
			rm =  v & 0b111;
		}
		FORCE_INLINE constexpr void set_reg( rex_t& x, uint8_t v )
		{
			x.extend( x.r, v );
			reg = v & 0b111;
		}
		FORCE_INLINE constexpr uint8_t encode() const
		{
			uint8_t result = 0;
			result |= ( rm  & 0b111 ) << 0;
			result |= ( reg & 0b111 ) << 3;
			result |= ( mod & 0b11  ) << 6;
			return result;
		}
	};
	struct sib_t
	{
		uint8_t base  = 0;
		uint8_t idx   = 0;
		uint8_t scale = 0;

		FORCE_INLINE constexpr void set_base( rex_t& x, uint8_t v )
		{
			x.extend( x.b, v );
			base = v & 0b111;
		}
		FORCE_INLINE constexpr void set_idx( rex_t& x, uint8_t v )
		{
			x.extend( x.x, v );
			idx = v & 0b111;
		}
		FORCE_INLINE constexpr uint8_t encode() const
		{
			uint8_t result = 0;
			result |= ( base  & 0b111 ) << 0;
			result |= ( idx   & 0b111 ) << 3;
			result |= ( scale & 0b11  ) << 6;
			return result;
		}
	};

	// General meaning of the mod bits.
	//
	enum addressing_mode
	{
		mod_mem        =  0b00,
		mod_mem_disp8  =  0b01,
		mod_mem_disp32 =  0b10,
		mod_reg        =  0b11,
	};

	// Memory operand.
	//
	struct rip_t {};

	struct segment_t { prefix pfx; };
	struct cs_t : segment_t { FORCE_INLINE constexpr cs_t() : segment_t{ prefix::cs } {} };
	struct ss_t : segment_t { FORCE_INLINE constexpr ss_t() : segment_t{ prefix::ss } {} };
	struct ds_t : segment_t { FORCE_INLINE constexpr ds_t() : segment_t{ prefix::ds } {} };
	struct es_t : segment_t { FORCE_INLINE constexpr es_t() : segment_t{ prefix::es } {} };
	struct fs_t : segment_t { FORCE_INLINE constexpr fs_t() : segment_t{ prefix::fs } {} };
	struct gs_t : segment_t { FORCE_INLINE constexpr gs_t() : segment_t{ prefix::gs } {} };
	
	struct memory
	{
		prefix segment = prefix::invalid;

		std::optional<std::variant<rip_t, r64>> base = {};
		std::optional<r64> index = {};
		int32_t disp = 0;
		int scale = 0;
		
		FORCE_INLINE explicit constexpr memory( int32_t disp ) : disp( disp ) {}
		FORCE_INLINE constexpr memory( rip_t ) : base( rip_t{} ) {}
		FORCE_INLINE constexpr memory( int32_t disp, rip_t ) : base( rip_t{} ), disp( disp ) {}
		FORCE_INLINE constexpr memory( r64 base ) : base( base ) {}
		FORCE_INLINE constexpr memory( int32_t disp, r64 base ) : base( base ), disp( disp ) {}
		FORCE_INLINE constexpr memory( r64 index, int scale ) : index( index ), scale( scale ) {}
		FORCE_INLINE constexpr memory( int32_t disp, r64 index, int scale ) : index( index ), disp( disp ), scale( scale ) {}
		FORCE_INLINE constexpr memory( r64 base, r64 index, int scale = 1 ) : base( base ), index( index ), scale( scale ) {}
		FORCE_INLINE constexpr memory( int32_t disp, r64 base, r64 index, int scale = 1 ) : base( base ), index( index ), disp( disp ), scale( scale ) {}

		FORCE_INLINE constexpr memory( segment_t seg, int32_t disp ) : segment( seg.pfx ), disp( disp ) {}
		FORCE_INLINE constexpr memory( segment_t seg, rip_t ) : segment( seg.pfx ), base( rip_t{} ) {}
		FORCE_INLINE constexpr memory( segment_t seg, int32_t disp, rip_t ) : segment( seg.pfx ), base( rip_t{} ), disp( disp ) {}
		FORCE_INLINE constexpr memory( segment_t seg, r64 base ) : segment( seg.pfx ), base( base ) {}
		FORCE_INLINE constexpr memory( segment_t seg, int32_t disp, r64 base ) : segment( seg.pfx ), base( base ), disp( disp ) {}
		FORCE_INLINE constexpr memory( segment_t seg, r64 index, int scale ) : segment( seg.pfx ), index( index ), scale( scale ) {}
		FORCE_INLINE constexpr memory( segment_t seg, int32_t disp, r64 index, int scale ) : segment( seg.pfx ), index( index ), disp( disp ), scale( scale ) {}
		FORCE_INLINE constexpr memory( segment_t seg, r64 base, r64 index, int scale = 1 ) : segment( seg.pfx ), base( base ), index( index ), scale( scale ) {}
		FORCE_INLINE constexpr memory( segment_t seg, int32_t disp, r64 base, r64 index, int scale = 1 ) : segment( seg.pfx ), base( base ), index( index ), disp( disp ), scale( scale ) {}
	};

	// ModR/M operand.
	//
	struct modrm_op
	{
		// Segment prefix.
		//
		prefix  seg = {};

		// REX Prefix
		rex_t   x = {};

		// ModR/M encoding.
		modrm_t m = {};
		
		// ? SIB.
		sib_t   s = {};
		bool    ss = false;

		// ? Displacement.
		int32_t d = {};
		uint8_t dw = 0;

		// Registers.
		//
		FORCE_INLINE constexpr modrm_op( uint8_t reg ) { m.mod = mod_reg; m.set_rm( x, reg ); }

		// Memory.
		//
		FORCE_INLINE constexpr modrm_op( const memory& mem )
		{
			// Set segment prefix if relevant.
			//
			seg = mem.segment;

			// If rip relative:
			//
			if ( mem.base && std::holds_alternative<rip_t>( *mem.base ) )
			{
				m.rm =  0b101;
				m.mod = mod_mem;
				d = mem.disp;
				dw = 4;
				return;
			}

			// Figure out the minimum displacement we can get away with.
			//
			d = mem.disp;
			if ( xstd::const_condition( d == 0 ) )
			{
				// If RBP/R13, force a disp8, since otherwise it implies an exceptional case.
				//
				if ( mem.base && ( ( ( uint8_t ) std::get<r64>( *mem.base ) ) & 0b111 ) == 0b101 )
					dw = 1, m.mod = mod_mem_disp8;
				else
					dw = 0, m.mod = mod_mem;
			}
			else if ( xstd::const_condition( d == int8_t( d ) ) )
				dw = 1, m.mod = mod_mem_disp8;
			else
				dw = 4, m.mod = mod_mem_disp32;

			// Try to encode without SIB if possible:
			//
			if ( !mem.index && mem.base )
			{
				// If RSP/R12, we have to encode as SIB.
				//
				auto base = std::get<r64>( *mem.base );
				if ( ( uint8_t( base ) & 0b111 ) != 0b100 )
				{
					// Set the R/M and return.
					//
					m.set_rm( x, ( uint8_t ) base );
					return;
				}
			}

			// Declare SIB present.
			//
			ss = true;
			m.rm = 0b100;

			// Encode the scale.
			//
			switch ( mem.scale )
			{
				case 0:
				case 1: s.scale = 0; break;
				case 2: s.scale = 1; break;
				case 4: s.scale = 2; break;
				case 8: s.scale = 3; break;
				default: unreachable();
			}

			// Encode the base.
			//
			if ( mem.base )
				s.set_base( x, ( uint8_t ) std::get<r64>( *mem.base ) );
			else
				s.set_base( x, 0b101 );

			// Encode the index.
			//
			if ( mem.index )
				s.set_idx( x, ( uint8_t ) *mem.index );
			else
				s.set_idx( x, 0b100 );

			// Handle exceptional cases.
			//
			// - [base]
			if ( mem.base && d == 0 && !mem.index )
			{
				m.mod = mod_mem;
			}
			// - [disp32]
			else if ( d != 0 && !mem.base && !mem.index )
			{
				dw = 4;
				m.mod = mod_mem;
			}
			// - [index*s + disp32]
			else if ( mem.index && !mem.base )
			{
				dw = 4;
				m.mod = mod_mem;
			}
		}

		// Sets the reg/w fields.
		//
		FORCE_INLINE constexpr void set_reg( uint8_t v )
		{
			x.extend( x.r, v );
			m.reg = v & 0b111;
		}
		template<typename T> requires ( std::is_enum_v<T> && std::is_same_v<std::underlying_type_t<T>, uint8_t> )
		FORCE_INLINE constexpr void set_reg( T v )
		{
			return set_reg( ( uint8_t ) v );
		}
		FORCE_INLINE constexpr void set_w( bool v = true ) { x.w = v; }
	};

	template<typename Reg>
	struct modrm_operand : modrm_op
	{
		FORCE_INLINE constexpr modrm_operand( Reg r ) requires ( !std::is_same_v<Reg, memory> ) : modrm_op( ( uint8_t ) r ) {}
		FORCE_INLINE constexpr modrm_operand( const memory& m ) : modrm_op( m ) {}
	};

	// Label wrapper.
	//
	struct label_t 
	{ 
		size_t iterator;
		FORCE_INLINE constexpr label_t( size_t iterator ) : iterator( iterator ) {}
	};
	struct forward_label_t
	{
		bool is_short = true;
		size_t rip = 0;
	};

	// Opcode list.
	//
	enum class cc : uint8_t
	{
		jo =   0,
		jno =  1,
		jb =   2,
		jnae = 2,
		jc =   2,
		jnb =  3,
		jae =  3,
		jnc =  3,
		jz =   4,
		je =   4,
		jnz =  5,
		jne =  5,
		jbe =  6,
		jna =  6,
		jnbe = 7,
		ja =   7,
		js =   8,
		jns =  9,
		jp =   10,
		jpe =  10,
		jnp =  11,
		jpo =  11,
		jl =   12,
		jnge = 12,
		jnl =  13,
		jge =  13,
		jle =  14,
		jng =  14,
		jnle = 15,
		jg =   15,
	};
	enum class opcode : uint32_t
	{
		add_rm_r =     0x01,
		add_r_rm =     0x03,
		or_rm_r =      0x09,
		or_r_rm =      0x0B,
		sub_rm_r =     0x29,
		sub_r_rm =     0x2B,
		xor_rm_r =     0x31,
		add_rm_imm =   0x81,    // /0
		or_rm_imm =    0x81,    // /1
		sub_rm_imm =   0x81,    // /5
		add_rm_i8 =    0x83,    // /0
		or_rm_i8 =     0x83,    // /1
		sub_rm_i8 =    0x83,    // /5
		mov_rm_r =     0x89,
		mov_r_rm =     0x8B,
		mov_r_imm =    0xB8,    // +r
		rol_rm_i8 =    0xC1,    // /0
		ror_rm_i8 =    0xC1,    // /1
		rcl_rm_i8 =    0xC1,    // /2
		rcr_rm_i8 =    0xC1,    // /3
		shl_rm_i8 =    0xC1,    // /4
		shr_rm_i8 =    0xC1,    // /5
		sal_rm_i8 =    0xC1,    // /6
		sar_rm_i8 =    0xC1,    // /7
		ret =          0xC3,
		mov_rm_imm =   0xC7,
		call_rm =      0xFF,    // /2
		jmp_rm =       0xFF,    // /4
		invlpg =       0x0F'01, // /7
		mov_r64_cr =   0x0F'20,
		mov_r64_dr =   0x0F'21,
		mov_cr_r64 =   0x0F'22,
		mov_dr_r64 =   0x0F'23,
		wrmsr =        0x0F'30,
		rdtsc =        0x0F'31,
		rdmsr =        0x0F'32,
		jcc_i8 =       0x70,    // +cc
		jcc_i32 =      0x0F'80, // +cc
		jmp_i8 =       0xEB,
		jmp_i32 =      0xE9,
		call_i32 =     0xE8,
		loopnz_i8 =    0xE0,
		loopz_i8 =     0xE1,
		loop_i8 =      0xE2,
		lea_r_rm =     0x8D,
		movups_r_rm =  0x0F'10,
		movups_rm_r =  0x0F'11,
		movaps_r_rm =  0x0F'28,
		movaps_rm_r =  0x0F'29,
		push_r =       0x50,    // +r
		pop_r =        0x58,    // +r
	};

	// Tiny JIT assembler for a certain select opcodes.
	//
	template<typename Range, bool Safe = false>
	struct basic_assembler
	{
		Range range = {};
		size_t iterator = 0;
		bool overflow = false;

		// Explicit construction by range.
		//
		FORCE_INLINE constexpr basic_assembler( Range&& range ) noexcept : range( std::move( range ) ) {}
		FORCE_INLINE constexpr basic_assembler( const Range& range ) noexcept : range( range ) {}

		// Default construction, move and copy.
		//
		constexpr basic_assembler() = default;
		constexpr basic_assembler( basic_assembler&& ) noexcept = default;
		constexpr basic_assembler( const basic_assembler& ) = default;
		constexpr basic_assembler& operator=( basic_assembler&& ) noexcept = default;
		constexpr basic_assembler& operator=( const basic_assembler& ) = default;

		// Make iterable.
		//
		FORCE_INLINE constexpr uint8_t* data() { return &range[ 0 ]; }
		FORCE_INLINE constexpr uint8_t* begin() { return &range[ 0 ]; }
		FORCE_INLINE constexpr const uint8_t* begin() const { return &range[ 0 ]; }
		FORCE_INLINE constexpr uint8_t* end() { return &range[ iterator ]; }
		FORCE_INLINE constexpr const uint8_t* end() const { return &range[ iterator ]; }
		FORCE_INLINE constexpr size_t size() const { return iterator; }
		FORCE_INLINE constexpr size_t capacity() const { return std::size( range ); }
		FORCE_INLINE constexpr bool empty() const { return !iterator; }

		// Conversion to span.
		//
		FORCE_INLINE constexpr std::span<uint8_t> span() { return { begin(), end() }; }
		FORCE_INLINE constexpr std::span<const uint8_t> span() const { return { begin(), end() }; }

		// Stream helpers.
		//
		FORCE_INLINE constexpr bool check_overflow( size_t append_count )
		{
			// If constant evaluation, let it access and throw.
			//
			if ( std::is_constant_evaluated() )
				return false;
			
			return ( overflow = capacity() < ( append_count + iterator ) );
		}

		template<typename T> requires std::is_integral_v<T>
		FORCE_INLINE constexpr void insert( T value )
		{
			if ( Safe && check_overflow( sizeof( T ) ) )
				return;

			if ( std::is_constant_evaluated() )
			{
				if constexpr ( sizeof( T ) == 1 )
				{
					range[ iterator++ ] = value;
				}
				else
				{
					auto u = ( std::make_unsigned_t<T> ) value;
					for ( size_t n = 0; n != sizeof( T ); n++ )
					{
						insert( uint8_t( u & 0xFF ) );
						u >>= 8;
					}
				}
			}
			else
			{
				memcpy( &range[ iterator ], &value, sizeof( T ) );
				iterator += sizeof( T );
			}
		}
		template<typename T> requires ( std::is_enum_v<T> && !std::is_same_v<T, opcode> )
		FORCE_INLINE constexpr void insert( T value )
		{
			return insert( ( std::underlying_type_t<T> ) value );
		}
		FORCE_INLINE constexpr void insertb( std::span<const uint8_t> value )
		{
			if ( Safe && check_overflow( value.size() ) )
				return;

			if ( !std::is_constant_evaluated() )
			{
				memcpy( &range[ iterator ], value.data(), value.size() );
				iterator += value.size();
			}
			else
			{
				for ( size_t n = 0; n != value.size(); n++ )
					range[ iterator++ ] = value[ n ];
			}
		}
		FORCE_INLINE constexpr void insertb( std::initializer_list<uint8_t> i )
		{
			return insertb( std::span<const uint8_t>{ i.begin(), i.end() } );
		}

		// Encoder types.
		//
		FORCE_INLINE constexpr void insert( opcode op, uint8_t reg = 0 )
		{
			uint32_t o = ( uint32_t ) op;
			if ( o & 0xFF000000 ) insert<uint8_t>( ( uint8_t ) ( o >> 24 ) );
			if ( o & 0xFF0000 )   insert<uint8_t>( ( uint8_t ) ( o >> 16 ) );
			if ( o & 0xFF00 )     insert<uint8_t>( ( uint8_t ) ( o >> 8 ) );
			insert<uint8_t>( ( uint8_t ) ( o + ( reg & 0b111 ) ) );
		}
		FORCE_INLINE constexpr void insert( rex_t x ) { if ( !x.redundant() ) insert( x.encode() ); }
		FORCE_INLINE constexpr void insert( sib_t s ) { insert( s.encode() ); }
		FORCE_INLINE constexpr void insert( modrm_t m ) { insert( m.encode() ); }
		FORCE_INLINE constexpr void encode( const modrm_op& modrm, opcode op, uint8_t reg = 0 )
		{
			// Push the segment prefix if relevant.
			if ( modrm.seg != prefix::invalid )
				insert( modrm.seg );
			// Encode the REX prefix if relevant.
			insert( modrm.x );
			// Encode the opcode.
			insert( op, reg );
			// Encode the ModR/M.
			insert( modrm.m );
			// Encode the SIB if relevant.
			if ( modrm.ss )
				insert( modrm.s );
			// Encode the Displacement if relevant.
			if ( modrm.dw == 1 )
				insert( ( int8_t ) modrm.d );
			else if ( modrm.dw == 4 )
				insert( ( int32_t ) modrm.d );
		}

		// Opcodes we've implemented.
		//
		FORCE_INLINE constexpr void xorl( modrm_operand<r32> op1, r32 op2 )
		{
			op1.set_reg( op2 );
			encode( op1, opcode::xor_rm_r );
		}
		FORCE_INLINE constexpr void movabs( r64 op1, int64_t imm64 )
		{
			rex_t x = { .w = true };
			uint8_t v = ( uint8_t ) op1;
			x.extend( x.b, v );
			insert( x );
			insert( opcode::mov_r_imm, v );
			insert( imm64 );
		}
		FORCE_INLINE constexpr void movl( r32 op1, int32_t imm32 )
		{
			rex_t x = { .w = false };
			uint8_t v = ( uint8_t ) op1;
			x.extend( x.b, v );
			insert( x );
			insert( opcode::mov_r_imm, v );
			insert( imm32 );
		}
		FORCE_INLINE constexpr void movq( modrm_operand<r64> op1, int32_t imm32 )
		{
			op1.set_w();
			encode( op1, opcode::mov_rm_imm );
			insert( imm32 );
		}
		FORCE_INLINE constexpr void wrmsr() { insert( opcode::wrmsr ); }
		FORCE_INLINE constexpr void rdmsr() { insert( opcode::rdmsr ); }
		FORCE_INLINE constexpr void rdtsc() { insert( opcode::rdtsc ); }
		FORCE_INLINE constexpr void ret() { insert( opcode::ret ); }
		FORCE_INLINE constexpr void invlpg( modrm_operand<memory> mem )
		{
			mem.set_reg( 7 );
			encode( mem, opcode::invlpg );
		}
		FORCE_INLINE constexpr void mov_cr( modrm_operand<r64> r, uint8_t i )
		{
			r.set_reg( i );
			encode( r, opcode::mov_r64_cr );
		}
		FORCE_INLINE constexpr void mov_dr( modrm_operand<r64> r, uint8_t i )
		{
			r.set_reg( i );
			encode( r, opcode::mov_r64_dr );
		}
		FORCE_INLINE constexpr void mov_cr( modrm_operand<uint8_t> i, r64 r )
		{
			i.set_reg( r );
			encode( i, opcode::mov_cr_r64 );
		}
		FORCE_INLINE constexpr void mov_dr( modrm_operand<uint8_t> i, r64 r )
		{
			i.set_reg( r );
			encode( i, opcode::mov_dr_r64 );
		}
		FORCE_INLINE constexpr void rolq( modrm_operand<r64> r, int8_t imm )
		{
			r.set_reg( 0 );
			r.set_w();
			encode( r, opcode::rol_rm_i8 );
			insert( imm );
		}
		FORCE_INLINE constexpr void rorq( modrm_operand<r64> r, int8_t imm )
		{
			r.set_reg( 1 );
			r.set_w();
			encode( r, opcode::ror_rm_i8 );
			insert( imm );
		}
		FORCE_INLINE constexpr void rclq( modrm_operand<r64> r, int8_t imm )
		{
			r.set_reg( 2 );
			r.set_w();
			encode( r, opcode::rcl_rm_i8 );
			insert( imm );
		}
		FORCE_INLINE constexpr void rcrq( modrm_operand<r64> r, int8_t imm )
		{
			r.set_reg( 3 );
			r.set_w();
			encode( r, opcode::rcr_rm_i8 );
			insert( imm );
		}
		FORCE_INLINE constexpr void shlq( modrm_operand<r64> r, int8_t imm )
		{
			r.set_reg( 4 );
			r.set_w();
			encode( r, opcode::shl_rm_i8 );
			insert( imm );
		}
		FORCE_INLINE constexpr void shrq( modrm_operand<r64> r, int8_t imm )
		{
			r.set_reg( 5 );
			r.set_w();
			encode( r, opcode::shr_rm_i8 );
			insert( imm );
		}
		FORCE_INLINE constexpr void salq( modrm_operand<r64> r, int8_t imm )
		{
			r.set_reg( 6 );
			r.set_w();
			encode( r, opcode::sal_rm_i8 );
			insert( imm );
		}
		FORCE_INLINE constexpr void sarq( modrm_operand<r64> r, int8_t imm )
		{
			r.set_reg( 8 );
			r.set_w();
			encode( r, opcode::sar_rm_i8 );
			insert( imm );
		}
		FORCE_INLINE constexpr void orq( modrm_operand<r64> a, r64 b )
		{
			a.set_reg( b );
			a.set_w();
			encode( a, opcode::or_rm_r );
		}
		FORCE_INLINE constexpr void orq( r64 a, modrm_operand</*r64*/ memory> b )
		{
			b.set_reg( a );
			b.set_w();
			encode( b, opcode::or_r_rm );
		}
		FORCE_INLINE constexpr void addq( modrm_operand<r64> a, r64 b )
		{
			a.set_reg( b );
			a.set_w();
			encode( a, opcode::add_rm_r );
		}
		FORCE_INLINE constexpr void addq( r64 a, modrm_operand</*r64*/ memory> b )
		{
			b.set_reg( a );
			b.set_w();
			encode( b, opcode::add_r_rm );
		}
		FORCE_INLINE constexpr void subq( modrm_operand<r64> a, r64 b )
		{
			a.set_reg( b );
			a.set_w();
			encode( a, opcode::sub_rm_r );
		}
		FORCE_INLINE constexpr void subq( r64 a, modrm_operand</*r64*/ memory> b )
		{
			b.set_reg( a );
			b.set_w();
			encode( b, opcode::sub_r_rm );
		}
		FORCE_INLINE constexpr void addq8( modrm_operand<r64> a, int8_t imm )
		{
			a.set_reg( 0 );
			a.set_w();
			encode( a, opcode::add_rm_i8 );
			insert( imm );
		}
		FORCE_INLINE constexpr void addq( modrm_operand<r64> a, int32_t imm )
		{
			if ( xstd::const_condition( imm == int8_t( imm ) ) )
				return addq8( a, imm );
			a.set_reg( 0 );
			a.set_w();
			encode( a, opcode::add_rm_imm );
			insert( imm );
		}
		FORCE_INLINE constexpr void subq8( modrm_operand<r64> a, int8_t imm )
		{
			a.set_reg( 5 );
			a.set_w();
			encode( a, opcode::sub_rm_i8 );
			insert( imm );
		}
		FORCE_INLINE constexpr void subq( modrm_operand<r64> a, int32_t imm )
		{
			if ( xstd::const_condition( imm == int8_t( imm ) ) )
				return subq8( a, imm );
			a.set_reg( 5 );
			a.set_w();
			encode( a, opcode::sub_rm_imm );
			insert( imm );
		}
		FORCE_INLINE constexpr void orq8( modrm_operand<r64> a, int8_t imm )
		{
			a.set_reg( 1 );
			a.set_w();
			encode( a, opcode::or_rm_i8 );
			insert( imm );
		}
		FORCE_INLINE constexpr void orq( modrm_operand<r64> a, int32_t imm )
		{
			if ( xstd::const_condition( imm == int8_t( imm ) ) )
				return orq8( a, imm );
			a.set_reg( 1 );
			a.set_w();
			encode( a, opcode::or_rm_imm );
			insert( imm );
		}
		FORCE_INLINE constexpr void callq( modrm_operand<r64> a )
		{
			a.set_reg( 2 );
			encode( a, opcode::call_rm );
		}
		FORCE_INLINE constexpr void jmpq( modrm_operand<r64> a )
		{
			a.set_reg( 4 );
			encode( a, opcode::jmp_rm );
		}
		FORCE_INLINE constexpr void movq( modrm_operand<r64> a, r64 b )
		{
			a.set_reg( b );
			a.set_w();
			encode( a, opcode::mov_rm_r );
		}
		FORCE_INLINE constexpr void movq( r64 a, modrm_operand</*r64*/ memory> b )
		{
			b.set_reg( a );
			b.set_w();
			encode( b, opcode::mov_r_rm );
		}
		FORCE_INLINE constexpr void lea( r64 a, modrm_operand<memory> b )
		{
			b.set_reg( a );
			b.set_w();
			encode( b, opcode::lea_r_rm );
		}
		FORCE_INLINE constexpr void movups( modrm_operand<uint8_t> a, uint8_t b )
		{
			a.set_reg( b );
			encode( a, opcode::movups_rm_r );
		}
		FORCE_INLINE constexpr void movups( uint8_t a, modrm_operand<memory> b )
		{
			b.set_reg( a );
			encode( b, opcode::movups_r_rm );
		}
		FORCE_INLINE constexpr void movaps( modrm_operand<uint8_t> a, uint8_t b )
		{
			a.set_reg( b );
			encode( a, opcode::movaps_rm_r );
		}
		FORCE_INLINE constexpr void movaps( uint8_t a, modrm_operand<memory> b )
		{
			b.set_reg( a );
			encode( b, opcode::movaps_r_rm );
		}
		FORCE_INLINE constexpr void push( r64 op )
		{
			rex_t x = { .w = false };
			uint8_t v = ( uint8_t ) op;
			x.extend( x.b, v );
			insert( x );
			insert( opcode::push_r, v );
		}
		FORCE_INLINE constexpr void pop( r64 op )
		{
			rex_t x = { .w = false };
			uint8_t v = ( uint8_t ) op;
			x.extend( x.b, v );
			insert( x );
			insert( opcode::pop_r, v );
		}

		// Relative operations.
		//
		FORCE_INLINE constexpr void jcc8( cc c, int8_t r, bool unbase = false )
		{
			insert( opcode::jcc_i8, ( uint8_t ) c );
			insert<int8_t>( unbase ? r - 2 : r );
		}
		FORCE_INLINE constexpr void jcc( cc c, int32_t r, bool unbase = false )
		{
			if ( xstd::const_condition( ( unbase ? r - 2 : r ) == int8_t( ( unbase ? r - 2 : r ) ) ) )
				return jcc8( c, ( int8_t ) r, unbase );
			insert( opcode::jcc_i32, ( uint8_t ) c );
			insert( unbase ? r - 6 : r );
		}
		FORCE_INLINE constexpr void jmp8( int8_t r, bool unbase = false )
		{
			insert( opcode::jmp_i8 );
			insert<int8_t>( unbase ? r - 2 : r );
		}
		FORCE_INLINE constexpr void jmp( int32_t r, bool unbase = false )
		{
			if ( xstd::const_condition( ( unbase ? r - 2 : r ) == int8_t( ( unbase ? r - 2 : r ) ) ) )
				return jmp8( ( int8_t ) r, unbase );
			insert( opcode::jmp_i32 );
			insert( unbase ? r - 5 : r );
		}
		FORCE_INLINE constexpr void call( int32_t r, bool unbase = false )
		{
			insert( opcode::call_i32 );
			insert( unbase ? r - 5 : r );
		}
		FORCE_INLINE constexpr void loop( int8_t r, bool unbase = false )
		{
			insert( opcode::loop_i8 );
			insert<int8_t>( unbase ? r - 2 : r );
		}
		FORCE_INLINE constexpr void loopz( int8_t r, bool unbase = false )
		{
			insert( opcode::loopz_i8 );
			insert<int8_t>( unbase ? r - 2 : r );
		}
		FORCE_INLINE constexpr void loopnz( int8_t r, bool unbase = false )
		{
			insert( opcode::loopnz_i8 );
			insert<int8_t>( unbase ? r - 2 : r );
		}

		// Absolute helpers.
		//
		FORCE_INLINE void jmp_abs( const void* ptr, const void* relocated = 0 )
		{
			if ( !relocated )
				relocated = &range[ iterator ];
			else
				relocated = ( const uint8_t* ) relocated + iterator;
			ptrdiff_t delta = ( uint64_t ) ptr - ( uint64_t ) relocated;
			if ( auto r = int32_t( delta - 5 ); r == ( delta - 5 ) )
			{
				jmp( r );
			}
			else
			{
				jmpq( memory{ rip_t{} } );
				insert( ( uint64_t ) ptr );
			}
		}
		FORCE_INLINE void call_abs( const void* ptr, const void* relocated = 0 )
		{
			if ( !relocated )
				relocated = &range[ iterator ];
			else
				relocated = ( const uint8_t* ) relocated + iterator;
			ptrdiff_t delta = ( uint64_t ) ptr - ( uint64_t ) relocated;
			if ( auto r = int32_t( delta - 5 ); r == ( delta - 5 ) )
			{
				call( r );
			}
			else
			{
				jmp8( 8 );
				insert( ( uint64_t ) ptr );
				callq( memory{ -6 /*ff15 dw0*/ - 8 /*ptr*/, rip_t{} } );
			}
		}

		// Label helpers.
		//
		FORCE_INLINE constexpr label_t label() const { return label_t{ iterator }; }
		FORCE_INLINE constexpr void label( forward_label_t fwd )
		{
			int32_t delta = ( int32_t ) ( iterator - fwd.rip );

			if ( std::is_constant_evaluated() )
			{
				size_t prev_it = iterator;
				if ( fwd.is_short )
					iterator = fwd.rip - 1, insert( ( int8_t ) delta );
				else
					iterator = fwd.rip - 4, insert( ( int32_t ) delta );
				iterator = prev_it;
			}
			else
			{
				if ( fwd.is_short ) *( int8_t* ) ( fwd.rip - 1 ) = ( int8_t ) delta;
				else                *( int32_t* ) ( fwd.rip - 4 ) = delta;
			}
		}
		FORCE_INLINE constexpr void jcc( cc c, label_t l )
		{
			jcc( c, int32_t( l.iterator - iterator ), true );
		}
		FORCE_INLINE constexpr void jmp( label_t l )
		{
			jmp( int32_t( l.iterator - iterator ), true );
		}
		FORCE_INLINE constexpr void call( label_t l )
		{
			call( int32_t( l.iterator - iterator ), true );
		}
		FORCE_INLINE constexpr void loop( label_t l )
		{
			loop( int8_t( l.iterator - iterator ), true );
		}
		FORCE_INLINE constexpr void loopz( label_t l )
		{
			loopz( int8_t( l.iterator - iterator ), true );
		}
		FORCE_INLINE constexpr void loopnz( label_t l )
		{
			loopnz( int8_t( l.iterator - iterator ), true );
		}
		FORCE_INLINE constexpr void jcc( cc c, forward_label_t& f )
		{
			if ( f.is_short ) jcc8( c, 0x77 );
			else              jcc( c,  0x77777777 );
			f.rip = iterator;
		}
		FORCE_INLINE constexpr void jmp( forward_label_t& f )
		{
			if ( f.is_short ) jmp8( 0x77 );
			else              jmp( 0x77777777 );
			f.rip = iterator;
		}
		FORCE_INLINE constexpr void call( forward_label_t& f )
		{
			call( 0x77777777 );
			f.rip = iterator;
		}
		FORCE_INLINE constexpr void loop( forward_label_t& f )
		{
			loop( 0x77 );
			f.rip = iterator;
		}
		FORCE_INLINE constexpr void loopz( forward_label_t& f )
		{
			loopz( 0x77 );
			f.rip = iterator;
		}
		FORCE_INLINE constexpr void loopnz( forward_label_t& f )
		{
			loopnz( 0x77 );
			f.rip = iterator;
		}

		// Nop encoding.
		//
		FORCE_INLINE constexpr void nop( size_t n = 1 )
		{
			// Insert max length nops until we reach the single instruction range.
			//
			for ( ; n > max_nop_length; n -= max_nop_length ) [[unlikely]]
				insertb( std::span{ nop_table[ max_nop_length ], max_nop_length } );

			// Insert N byte nop using the lookup table.
			//
			insertb( std::span{ nop_table[ n ], n } );
		}
		FORCE_INLINE constexpr void align( size_t n )
		{
			size_t offset = iterator % n;
			if ( offset )
				nop( n - offset );
		}

		// Sets a 64-bit register in smallest way possible.
		//
		template<typename I> requires std::is_integral_v<I>
		FORCE_INLINE constexpr void set( r64 reg, I _i )
		{
			int64_t xs = ( int64_t ) _i;
			uint64_t xu = ( uint64_t ) xs;

			// 0
			if ( xstd::const_condition( xu == 0 ) )
				return xorl( ( r32 ) reg, ( r32 ) reg );
			// u32
			else if ( xstd::const_condition( uint32_t( xu ) == xu ) )
				return movl( ( r32 ) reg, ( int32_t ) xs );
			// i32
			else if ( xstd::const_condition( int32_t( xs ) == xs ) )
				return movq( reg, ( int32_t ) xs );
			// u64
			else
				return movabs( reg, ( int64_t ) xs );
		}
	};

	// Define assembler targetting a buffer.
	//
	template<size_t Limit = 256, bool Safe = false>
	using buffer = basic_assembler<std::array<uint8_t, Limit>, Safe>;

	// Define assembler targetting a range.
	//
	template<bool Safe = false>
	using view = basic_assembler<std::span<uint8_t>, Safe>;

	// Invokes the lambda given with a max-length view<>&, returns the buffer with the minimum size.
	//
	template<typename F>
	static consteval auto generate_code( F )
	{
		using max_buffer = buffer<1024 * 8>;
		constexpr max_buffer result = [] ()
		{
			max_buffer buffer = {};
			view<> buffer_view = { buffer.range };
			F{}( buffer_view );
			buffer.iterator = buffer_view.iterator;
			return buffer;
		}();

		buffer<result.size()> retval = {};
		std::copy( result.begin(), result.end(), retval.begin() );
		retval.iterator = result.size();
		return retval;
	}
};