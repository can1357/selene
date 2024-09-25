#include <flash/section.hpp>
#include <xstd/spinlock.hpp>
#include <xstd/xvector.hpp>
#include <flash/image.hpp>
#include <execution>

namespace flash
{
	static bool validate_prefixes( const xed::decoding& dec, const uint8_t* ) {
		if ( auto n = dec._operands.nrexes ) {
			if ( n > 1 ) return false;
			if ( !( dec._operands.rexw | dec._operands.rexx | dec._operands.rexr | dec._operands.rexb ) ) {
				bool rl_used = false;
				for ( auto r : { dec.reg( 0 ), dec.reg( 1 ) } ) {
					switch ( r ) {
						case XED_REG_SPL:
						case XED_REG_BPL:
						case XED_REG_SIL:
						case XED_REG_DIL:
							rl_used = true;
							break;
						default:
							break;
					}
				}
				if ( !rl_used ) return false;
			}
			if ( dec._operands.rexx && !dec._operands.has_sib ) return false;
			if ( dec._operands.rexr && !dec._operands.has_modrm ) return false;
			if ( dec._operands.rexb && !dec._operands.has_modrm && !dec._operands.has_sib && !dec._operands.reg0 ) return false;
		}

		// Segment prefixes.
		//
		if ( auto n = dec._operands.nseg_prefixes ) {
			if ( n > 1 ) return false;
			if ( !dec._operands.mem0 ) return false;
		}

		// REP/REPNE:
		//
		if ( dec._operands.rep ) {
			bool vector = 
				dec.mem_width_bits( 0 ) > 64 || 
				xed::register_bit_width( dec.reg( 0 ) ) > 64 || 
				xed::register_bit_width( dec.reg( 1 ) ) > 64 || 
				xed::register_bit_width( dec.reg( 2 ) ) > 64;
			if ( !vector ) {
				auto new_cl = xed_rep_remove( dec.iclass() );
				if ( new_cl == XED_ICLASS_INVALID || new_cl == dec.iclass() ) {
					return false;
				}
			}
		}

		// Lock.
		//
		if ( dec._operands.lock && !dec.inst()->attribute( XED_ATTRIBUTE_LOCKED ) ) {
			return false;
		}

		// 66:
		//
		if ( dec._operands.prefix66 ) {
			for ( const xed::operand* op : dec.inst()->operands() ) {
				if ( op->nonterminal_name() == XED_NONTERMINAL_IGNORE66 )
					return false;
			}
		}
		return true;
	}


	// Decoding helper.
	//
	xed::result<xed::decoding> section::decode( image* img, uint32_t rva ) const
	{
		if ( !ta ) return std::nullopt;
		uint32_t offset = rva - this->rva;

		if ( ta->isummary[ offset ].valid() )
			return xed::decode64( img->data.data() + rva, img->data.size() - rva );
		return {};
	}
	uint32_t section::decode_len( image*, uint32_t rva ) const 
	{
		if ( !ta ) return 0;
		uint32_t offset = rva - this->rva;

		if ( ta->isummary[ offset ].valid() )
			return ta->isummary[ offset ].length;
		return 0;
	}

	// Given a valid offset within the section, finds the previous/next valid instruction.
	//
	std::optional<uint32_t> section::find_prev( image*, uint32_t rva, size_t depth ) const
	{
		if ( !ta ) return std::nullopt;

		while ( depth )
		{
			uint32_t offset = rva - this->rva;
			for ( int i = std::min( ( int ) xed::max_ins_len, ( int ) offset );; i-- )
			{
				if ( ta->isummary[ offset - i ].length == i )
				{
					rva -= i;
					break;
				}

				if ( i == 0 )
					return std::nullopt;
				continue;
			}
			depth--;
		}
		return rva;
	}
	std::optional<uint32_t> section::find_next( image*, uint32_t rva, size_t depth ) const
	{
		if ( !ta ) return std::nullopt;

		uint32_t it = rva;
		for ( size_t d = 0; d <= depth; d++ )
		{
			if ( it >= rva_limit )
				return std::nullopt;
			auto& i = ta->isummary[ it - this->rva ];
			if ( !i.valid() ) 
				return std::nullopt;
			it += i.length;
		}
		return it;
	}

	// Validates the instruction.
	//
	bool section::validate_ip( image*, uint32_t rva ) const
	{
		if ( !ta ) return false;
		uint32_t offset = rva - this->rva;

		auto& s = ta->isummary[ offset ];
		if ( !s.valid() )
			return false;

		if ( offset != 0 )
		{
			bool found = false;
			for ( int i = std::min( ( int ) xed::max_ins_len, ( int ) offset ); i >= 1; i-- )
			{
				if ( ta->isummary[ offset - i ].length != i )
					continue;
				found = true;
				break;
			}
			if ( !found ) return false;
		}
		if ( ( offset + s.length ) != ( rva_limit - rva ) )
		{
			if ( !ta->isummary[ offset + s.length ].valid() )
				return false;
		}
		return true;
	}

	// Code analysis.
	//
	static void analyze_section( image* img, section* s, text_analysis& a )
	{
		a.isummary.resize( s->rva_limit - s->rva );
		std::span data{ img->data.data() + s->rva, img->data.data() + s->rva_limit };
		uint32_t max_fast_scan = std::max( data.size(), 5ull ) - 5;

		for ( uint32_t offset = 0; offset != data.size(); offset++ )
		{
			auto& result = a.isummary[ offset ];
			result = { .iclass = XED_ICLASS_INVALID, .length = 0 };

			// Faster implementation for common opcodes.
			//
			if ( offset <= max_fast_scan )
			{
				switch ( data[ offset ] )
				{
					case 0x00:
					{
						// Skip add [rax], al. Most likely invalid.
						//
						while ( offset < max_fast_scan && !data[ offset + 1 ] )
							offset++;
						break;
					}
					case 0x90: result = { .iclass = XED_ICLASS_NOP, .length = 1 }; continue;
					case 0xCC: result = { .iclass = XED_ICLASS_INT3, .length = 1 }; continue;
					case 0xC3: result = { .iclass = XED_ICLASS_RET_NEAR, .length = 1 }; continue;
					case 0xE8: {
						uint32_t relbr_target = offset + s->rva + 5 + *( int32_t* ) &data[offset+1];
						if ( !( relbr_target & 0xF ) )
							img->xref_map_code_call[ relbr_target ].emplace_back( offset + s->rva );
						result = { .iclass = XED_ICLASS_CALL_NEAR, .length = 5 };
						continue;
					}
					case 0xE9: result = { .iclass = XED_ICLASS_JMP, .length = 5 }; continue;
					case 0x70: result = { .iclass = XED_ICLASS_JO , .length = 2 }; continue;
					case 0x71: result = { .iclass = XED_ICLASS_JNO, .length = 2 }; continue;
					case 0x72: result = { .iclass = XED_ICLASS_JB , .length = 2 }; continue;
					case 0x73: result = { .iclass = XED_ICLASS_JNB, .length = 2 }; continue;
					case 0x74: result = { .iclass = XED_ICLASS_JZ , .length = 2 }; continue;
					case 0x75: result = { .iclass = XED_ICLASS_JNZ, .length = 2 }; continue;
					case 0x76: result = { .iclass = XED_ICLASS_JBE, .length = 2 }; continue;
					case 0x77: result = { .iclass = XED_ICLASS_JNBE , .length = 2 }; continue;
					case 0x78: result = { .iclass = XED_ICLASS_JS , .length = 2 }; continue;
					case 0x79: result = { .iclass = XED_ICLASS_JNS, .length = 2 }; continue;
					case 0x7A: result = { .iclass = XED_ICLASS_JP , .length = 2 }; continue;
					case 0x7B: result = { .iclass = XED_ICLASS_JNP, .length = 2 }; continue;
					case 0x7C: result = { .iclass = XED_ICLASS_JL , .length = 2 }; continue;
					case 0x7D: result = { .iclass = XED_ICLASS_JNL, .length = 2 }; continue;
					case 0x7E: result = { .iclass = XED_ICLASS_JLE, .length = 2 }; continue;
					case 0x7F: result = { .iclass = XED_ICLASS_JNLE, .length = 2 }; continue;
					// IN/OUT.
					case 0xE4:
					case 0xE5:
					case 0xE6:
					case 0xE7:
					case 0xEC:
					case 0xED:
					case 0xEE:
					case 0xEF: continue;
					// POP/PUSH.
					case 0x50:
					case 0x51:
					case 0x52:
					case 0x53:
					case 0x54:
					case 0x55:
					case 0x56:
					case 0x57: result = { .iclass = XED_ICLASS_PUSH, .length = 1 }; continue;
					case 0x58:
					case 0x59:
					case 0x5A:
					case 0x5B:
					case 0x5C:
					case 0x5D:
					case 0x5E:
					case 0x5F: result = { .iclass = XED_ICLASS_POP, .length = 1 }; continue;
					case 0xC8: result = { .iclass = XED_ICLASS_ENTER, .length = 4 }; continue;
					default: break;
				}
			}

			// Decode the instruction.
			//
			auto ins = xed::decode64( data.data() + offset, data.size() - offset );
			if ( !ins )
				continue;

			// Skip if unlikely to be valid.
			//
			if ( !validate_prefixes( *ins, data.data() + offset ) )
				continue;
			if ( ins->attribute( XED_ATTRIBUTE_RING0 ) )
				continue;
			switch ( ins->category() )
			{
				case XED_CATEGORY_WAITPKG:
				case XED_CATEGORY_SYSRET:
				case XED_CATEGORY_SGX:
				case XED_CATEGORY_PKU:
				case XED_CATEGORY_CET:
				case XED_CATEGORY_3DNOW:
				case XED_CATEGORY_MPX:
				case XED_CATEGORY_XSAVE:
				case XED_CATEGORY_XSAVEOPT:
				case XED_CATEGORY_IOSTRINGOP:
				case XED_CATEGORY_VTX:
				case XED_CATEGORY_MMX:
				case XED_CATEGORY_X87_ALU:
					continue;
				case XED_CATEGORY_SYSTEM:
					if ( ins->iform() != XED_IFORM_RDTSC && ins->iform() != XED_IFORM_RDTSCP )
						continue;
					break;
				default:
					break;
			}

			if ( offset && ( data[ offset ] & 0x48 ) ) {
				if ( ins->iclass() == XED_ICLASS_LEA && ins->mem_base( 0 ) == XED_REG_RIP && !ins->_operands.rexw ) {
					continue;
				}
			}

			// If relative operand with invalid delta, fail.
			//
			uint32_t relbr_target = 0;
			if ( ins->has_relbr() )
			{
				relbr_target = offset + s->rva + ins->length() + ins->relbr();
				if ( relbr_target >= img->data.size() )
					continue;
			}

			// Add references.
			//
			if ( ins->has_mem_disp() && ins->mem_base( 0 ) == XED_REG_RIP )
			{
				img->xref_map_code_disp[ offset + s->rva + ins->length() + ins->mem_disp_value( 0 ) ].emplace_back( offset + s->rva );
			}
			else if ( ins->iform() == XED_IFORM_CALL_NEAR_RELBRd || ins->iform() == XED_IFORM_CALL_NEAR_RELBRz )
			{
				// Skip misaligned calls.
				//
				if ( !( relbr_target & 0xF ) )
					img->xref_map_code_call[ relbr_target ].emplace_back( offset + s->rva );
			}

			// Assign the entry.
			//
			result = { .iclass = ( uint16_t ) ins->iclass(), .length = ( uint16_t ) ins->length() };
		}
	}
	
	// Constant analysis.
	//
	static void analyze_section( image* img, section* s, rdata_analysis& )
	{
		using vec_t = xstd::vec256_t<uint64_t>;
		
		// Create the upperbound and lowerbound vectors.
		//
		vec_t lower = vec_t::broadcast( img->base_address );
		vec_t upper = vec_t::broadcast( img->data.size() );

		// For each u64 aligned to u64 boundary:
		//
		for ( size_t off = s->rva; ( off + sizeof( vec_t ) ) <= s->rva_limit; off += sizeof( vec_t ) )
		{
			auto vec = xstd::load_misaligned<vec_t>( img->data.data() + off );
			vec -= lower;

			auto cmp = vec < upper;
			if ( !cmp.is_zero() )
			{
				xstd::bit_enum( cmp.mask(), [ & ] ( bitcnt_t n ) FORCE_INLINE
				{
					auto rva = *( const uint64_t* ) ( img->data.data() + off + n * 8 );
					img->xref_map_data[ rva ].emplace_back( off + n * 8 );
				} );
			}
		}
	}

	// Applies the section class specific analysis.
	//
	void section::analyze( image* img )
	{
		switch ( type )
		{
			case flash::section::text:  return analyze_section( img, this, ta.emplace() );
			case flash::section::rdata: return analyze_section( img, this, ra.emplace() );
			default:                    break;
		}
	}
};