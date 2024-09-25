#pragma once
#include <string>
#include <vector>
#include <optional>
#include <tuple>
#include <xedpp.hpp>
#include <xstd/result.hpp>
#include <xstd/robin_hood.hpp>

namespace flash
{
	struct image;

	enum special_arg {
		special_arg_rip = 0,
		special_arg_gsbase = 1,
		special_arg_count = 2,
	};

	struct stack_analysis {
		robin_hood::unordered_flat_set<int32_t> required;
		robin_hood::unordered_flat_set<int32_t> written;
	};
	struct register_analysis {
		uint64_t required = 0;
		uint64_t written = 0;
	};

	// Register mask utilities.
	//
	inline constexpr uint64_t make_reg_mask( size_t gpr_index, size_t offset, size_t size ) {
		if ( size >= 4 )
			return 0b1111ull << ( gpr_index * 4 );
		else if ( size == 2 )
			return 0b0011ull << ( gpr_index * 4 );
		else if ( size == 1 && offset )
			return 0b0010ull << ( gpr_index * 4 );
		else
			return 0b0001ull << ( gpr_index * 4 );
	}
	inline constexpr uint64_t make_reg_mask( xed::reg_t reg ) {
		if ( xed::is_gpr64( reg ) )
			return make_reg_mask( reg - XED_REG_GPR64_FIRST, 0, 8 );
		if ( xed::is_gpr32( reg ) )
			return make_reg_mask( reg - XED_REG_GPR32_FIRST, 0, 4 );
		if ( xed::is_gpr16( reg ) )
			return make_reg_mask( reg - XED_REG_GPR16_FIRST, 0, 2 );
		if ( xed::is_gpr8( reg ) )
			return make_reg_mask( reg - XED_REG_GPR8_FIRST, 0, 1 );
		switch ( reg ) {
			case XED_REG_AH: return make_reg_mask( XED_REG_RAX - XED_REG_GPR64_FIRST, 8, 1 );
			case XED_REG_CH: return make_reg_mask( XED_REG_RCX - XED_REG_GPR64_FIRST, 8, 1 );
			case XED_REG_DH: return make_reg_mask( XED_REG_RDX - XED_REG_GPR64_FIRST, 8, 1 );
			case XED_REG_BH: return make_reg_mask( XED_REG_RBX - XED_REG_GPR64_FIRST, 8, 1 );
			default: return 0;
		}
	}
	inline constexpr xed::reg_t alloc_reg_with_used_mask( uint64_t used_mask ) {
		used_mask |= make_reg_mask( XED_REG_RSP ); // Never allocate stack pointer.
		char r = 0;
		while ( ( used_mask >> ( r * 4 ) ) & 0b1111 ) {
			if ( ++r == 16 )
				return XED_REG_INVALID;
		}
		return xed::reg_t( r + XED_REG_GPR64_FIRST );
	}
	inline constexpr xed::reg_t alloc_reg_with_mask( uint64_t allowed_mask ) {
		return alloc_reg_with_used_mask( ~allowed_mask );
	}

	// Returns true if the given GPR index is non-volatile in MS ABI.
	//
	inline constexpr uint64_t msabi_nonvolatile_mask =
		make_reg_mask( XED_REG_RBX ) |
		make_reg_mask( XED_REG_RBP ) |
		make_reg_mask( XED_REG_RSI ) |
		make_reg_mask( XED_REG_RDI ) |
		make_reg_mask( XED_REG_R12 ) |
		make_reg_mask( XED_REG_R13 ) |
		make_reg_mask( XED_REG_R14 ) |
		make_reg_mask( XED_REG_R15 );
	inline constexpr uint64_t msabi_volatile_mask = 
		~( msabi_nonvolatile_mask | make_reg_mask( XED_REG_RSP ) );
	inline constexpr bool msabi_is_nonvolatile( size_t gpr_index ) {
		return bool( ( msabi_nonvolatile_mask >> ( gpr_index * 4 ) ) & 1 );
	}

	struct shellcode
	{
		// Instruction record.
		//
		struct instruction
		{
			// Instruction position and the decoding.
			//
			uint32_t      rva;
			xed::decoding dec;

			// Instruction I/O.
			//
			uint64_t      reg_read_mask = 0;
			uint64_t      reg_write_mask = 0;
			bool          mem_read = 0;
			bool          mem_write = 0;

			// Stack access ranges.
			//
			int32_t       stack_min = 0;
			int32_t       stack_max = 0;

			// Error if relevant.
			//
			std::string   error = {};

			// Construction with analysis.
			//
			instruction( uint32_t rva, const xed::decoding& dec );

			// Default copy.
			//
			instruction( const instruction& ) = default;
			instruction& operator=( const instruction& ) = default;

			// Equality comparison.
			//
			bool operator==( const instruction& other ) const {
				if ( dec.length() != other.dec.length() ) {
					return false;
				} else if ( !memcmp( &dec[ 0 ], &other.dec[ 0 ], dec.length() ) ) {
					return true;
				}
				// Handle rip-relative instructions.
				if ( dec.mem_base( 0 ) == XED_REG_RIP && other.dec.mem_base( 0 ) == XED_REG_RIP ) {
					if ( rva == other.rva ) {
						return false; // shouldn't have failed.
					}
					if ( dec.length() <= 4 || memcmp( &dec[ 0 ], &other.dec[ 0 ], 4 ) ) {
						return false; // shouldn't have failed.
					}
					int64_t a = dec.mem_disp( 0 ).value() + rva + dec.length();
					int64_t b = other.dec.mem_disp( 0 ).value() + other.rva + other.dec.length();
					return a == b;
				}
				return false;
			}
			bool operator!=( const instruction& other ) const { return !operator==( other ); }

			// Is pure?
			//
			bool is_pure() const { return !mem_write; }
		};
		std::vector<instruction> instructions;

		// User promised arguments. 
		// Note: Implicit image base as first argument.
		//
		struct argument_promise
		{
			// Always 64-bit registers.
			//
			uint8_t assigned_gpr = 0;

			// Stack offset and length.
			//
			int32_t stack_offset = 0;
			uint8_t stack_length = 0;
		};
		std::vector<argument_promise> arguments;

		// Requested output register.
		//
		std::optional<xed::reg_t> output_reg;

		// Default construction and construction by initial range.
		//
		shellcode() {}
		shellcode( image* img, uint32_t rva_0, uint32_t rva_1 ) { push_back( img, rva_0, rva_1 ); }

		// Pushes the given range of instructions.
		//
		void push_at( image* img, size_t idx, uint32_t rva_0, uint32_t rva_1 );
		void push_back( image* img, uint32_t rva_0, uint32_t rva_1 );
		void push_front( image* img, uint32_t rva_0, uint32_t rva_1 );

		// Sets up the frame register as an alias to stack pointer.
		//
		void setup_frame( xed::reg_t frame_reg, int32_t frame_offset );

		// Performs register and stack analysis.
		//
		register_analysis analyze_registers() const;
		stack_analysis analyze_stack() const;

		// Returns a register mask for all used registers.
		//
		uint64_t used_registers() const;

		// Tries to repair shellcode by coalescing push instructions.
		//
		int64_t repair_pushes();

		// Calculates stack slots used [min_offset, max_offset].
		//
		void calc_stack_slots( std::vector<std::pair<int32_t, int32_t>>& list ) const;

		// Runs basic dead code elimination given an optional result register and handling mode for side effects.
		//
		void set_output( xed::reg_t reg, bool ignore_side_effects );

		// Pushes a new argument to the function prototype to be the given register / stack slot value.
		//
		void add_argument( xed::reg_t reg ) { arguments.push_back( { .assigned_gpr = uint8_t( xed::extend_register( reg ) - XED_REG_GPR64_FIRST ) } ); }
		void add_argument( int32_t stack_slot, uint8_t size ) { arguments.push_back( { .stack_offset = stack_slot, .stack_length = size } ); }

		// Gets the index of a specified RVA.
		//
		std::optional<size_t> index_of( uint32_t rva ) const;

		// Compares against another shellcode for equivalence.
		//
		bool equivalent( const shellcode& other ) const;

		// Validates the state for codegen.
		//
		xstd::result<> validate_for_codegen() const;

		// Optimizes for the result.
		//
		bool optimize_for( uint64_t& required_registers, robin_hood::unordered_flat_set<int32_t>& required_stack_slots, uint32_t& required_flags, bool dry );
		void optimize();

		// Generates the final code.
		//
		xstd::result<std::vector<uint8_t>> generate() const;
	};
};