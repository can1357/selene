#include <flash/rule_instruction.hpp>
#include <flash/section.hpp>
#include <flash/simd.hpp>
#include <flash/hex.hpp>

namespace flash
{
	// Constructs the rule from a string.
	//
	instruction instruction::from( std::string_view str, uint8_t extended_matching_flags )
	{
		std::vector<uint8_t> value = from_hex( str );
		return { xed::decode64( value ).value_or( {} ), extended_matching_flags };
	}

	// Matches instruction properties.
	//
	bool instruction::match( const xed::decoding& dec ) const
	{
		if ( !( extended_matching_flags & match_tmpl ) )
			if ( dec.iclass() != iclass )
				return false;

		// Match optionally matched properties.
		//
		if ( extended_matching_flags & match_imm )
			if ( dec.imm0u_value() != value.imm0u_value() )
				return false;
		if ( extended_matching_flags & match_disp )
			if ( dec.mem_disp_value( 0 ) != value.mem_disp_value( 0 ) )
				return false;
		if ( extended_matching_flags & match_scale )
			if ( dec.mem_scale( 0 ) != value.mem_scale( 0 ) )
				return false;
		if ( extended_matching_flags & match_reg0 )
			if ( dec.reg( 0 ) != value.reg( 0 ) )
				return false;

		// Match basic properties.
		//
		if ( dec.num_mem_operands() != value.num_mem_operands() )
			return false;
		if ( dec.seg_prefix() != value.seg_prefix() )
			return false;
		if ( dec.eff_op_width_bits() != value.eff_op_width_bits() )
			return false;
		if ( dec.eff_adr_width_bits() != value.eff_adr_width_bits() )
			return false;
		if ( dec.iform() != value.iform() ) {
			size_t i = 0, j = 0;
			while ( true ) {
				auto* o1 = i >= dec.num_operands() ? nullptr : dec.operand( i );
				if ( o1 && ( o1->is_suppressed() || o1->is_address_register() ) ) {
					i++;
					continue;
				}

				auto* o2 = j >= value.num_operands() ? nullptr : value.operand( j );
				if ( o2 && ( o2->is_suppressed() || o2->is_address_register() ) ) {
					j++;
					continue;
				}

				if ( !o1 || !o2 ) {
					if ( bool( o1 ) != bool( o2 ) ) {
						return false;
					}
					break;
				}

				i++; j++;

				auto name = o1->name();
				if ( name != o2->name() ) {
					return false;
				}
				if ( name == XED_OPERAND_REG0 || name == XED_OPERAND_MEM0 || name == XED_OPERAND_REG1 ) {
					if ( o1->width() != o2->width() ) {
						return false;
					}
				}
			}
		}


		if ( dec.is_mem() && !(extended_matching_flags & match_mrelax) ) {
			if ( ( dec.mem_base( 0 ) == XED_REG_RIP ) != ( value.mem_base( 0 ) == XED_REG_RIP ) )
				return false;
			if ( ( dec.mem_base( 0 ) == XED_REG_INVALID ) != ( value.mem_base( 0 ) == XED_REG_INVALID ) )
				return false;
			if ( ( dec.mem_index( 0 ) == XED_REG_INVALID ) != ( value.mem_index( 0 ) == XED_REG_INVALID ) )
				return false;
		}
		return true;
	}

	// Implement the interface.
	// 
	int32_t instruction::match( image* img, section* scn, uint32_t rva_0, uint32_t rva_1, bool forward )
	{
		if ( !scn->ta ) return -1;
		if ( rva_0 == rva_1 ) return -1;

		if ( bool weak = extended_matching_flags & match_tmpl ) {
			if ( forward ) {
				if ( scn->ta->isummary[ rva_0 - scn->rva ].iclass ) {
					if ( auto dec = scn->decode( img, rva_0 ); dec && match( *dec ) ) {
						if ( !img->validation_disabled && !scn->validate_ip( img, rva_0 ) )
							return -1;
						return ( int32_t ) dec->length();
					}
				}
			} else {
				uint32_t limit = std::min<uint32_t>( xed::max_ins_len, rva_1 - rva_0 );
				for ( uint32_t i = 1; i <= limit; i++ ) {
					if ( auto& idec = scn->ta->isummary[ rva_1 - i - scn->rva ]; idec.length == i && idec.iclass ) {
						if ( auto dec = scn->decode( img, rva_1 - i ); dec && match( *dec ) ) {
							if ( !img->validation_disabled && !scn->validate_ip( img, rva_1 - i ) )
								continue;
							return ( int32_t ) dec->length();
						}
					}
				}
			}
		} else {
			if ( forward ) {
				if ( scn->ta->isummary[ rva_0 - scn->rva ].iclass == iclass ) {
					if ( auto dec = scn->decode( img, rva_0 ); dec && match( *dec ) ) {
						if ( !img->validation_disabled && !scn->validate_ip( img, rva_0 ) )
							return -1;
						return ( int32_t ) dec->length();
					}
				}
			} else {
				uint32_t limit = std::min<uint32_t>( xed::max_ins_len, rva_1 - rva_0 );
				for ( uint32_t i = 1; i <= limit; i++ ) {
					if ( auto& idec = scn->ta->isummary[ rva_1 - i - scn->rva ]; idec.length == i && idec.iclass == iclass ) {
						if ( auto dec = scn->decode( img, rva_1 - i ); dec && match( *dec ) ) {
							if ( !img->validation_disabled && !scn->validate_ip( img, rva_1 - i ) )
								continue;
							return ( int32_t ) dec->length();
						}
					}
				}
			}
		}
		
		return -1;
	}
	search_result instruction::accelerated_search( image* img, section* scn, uint32_t rva_0, uint32_t rva_1, bool forward )
	{
		if ( !scn->ta ) return {};
		if ( rva_0 == rva_1 ) return {};

		auto* first = ( const uint16_t* ) &scn->ta->isummary[ rva_0 - scn->rva ];
		auto* last = first + ( rva_1 - rva_0 );

		if ( forward )
		{
			for ( auto it = first; it != last; it++ )
			{
				it = simd::find<uint16_t>( it, last, iclass, 0xFFF );
				if ( !it ) return {};

				if ( !img->validation_disabled && !scn->validate_ip( img, it - first + rva_0 ) )
					continue;

				if ( auto dec = scn->decode( img, it - first + rva_0 ); dec && match( *dec ) )
					return { uint32_t( it - first + rva_0 ), uint32_t( dec->length() ) };
			}
		}
		else
		{
			for ( auto it = last; it != first; )
			{
				it = simd::rfind<uint16_t>( first, it, value.iclass(), 0xFFF );
				if ( !it ) return {};
				
				if ( !img->validation_disabled && !scn->validate_ip( img, it - first + rva_0 ) )
					continue;

				if ( auto dec = scn->decode( img, it - first + rva_0 ); dec && match( *dec ) )
					return { uint32_t( it - first + rva_0 ), uint32_t( dec->length() ) };
			}
		}
		return {};
	}
};