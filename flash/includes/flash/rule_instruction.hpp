#pragma once
#include <flash/rule.hpp>
#include <xedpp.hpp>

namespace flash
{
	struct instruction final : rule
	{
		enum ex_matching_flags : uint8_t
		{
			match_imm =   1 << 0,
			match_disp =  1 << 1,
			match_scale = 1 << 2,
			match_reg0 =  1 << 3,
			match_tmpl =  1 << 4,
			match_mrelax = 1 << 5,
		};
		xed::decoding value = {};
		xed::iclass_t iclass = {};
		uint8_t extended_matching_flags = 0;

		// Constructed by an encoded instruction and the match flags.
		//
		instruction( const xed::decoding& _value, uint8_t extended_matching_flags = 0 )
			: rule( ( extended_matching_flags & match_tmpl ) ? 0 : ( rule::forward_accel | rule::backwards_accel ), 
					  ( extended_matching_flags & match_tmpl ) ? 0.25 : (extended_matching_flags ? 1.0f : 0.5f) ),
			value( _value ), iclass( value.iclass() ), extended_matching_flags( extended_matching_flags ) {}

		// Constructs the rule from a string.
		//
		static instruction from( std::string_view str, uint8_t extended_matching_flags = 0 );

		// Matches instruction properties.
		//
		bool match( const xed::decoding& dec ) const;

		// Implement the interface.
		// 
		int32_t match( image* img, section* scn, uint32_t rva_0, uint32_t rva_1, bool forward = true ) override;
		search_result accelerated_search( image* img, section* scn, uint32_t rva_0, uint32_t rva_1, bool forward ) override;
		std::string to_string() const override {
			return xstd::fmt::str( "Insn{%s}", xstd::try_name_enum( iclass ) );
		}
	};
};