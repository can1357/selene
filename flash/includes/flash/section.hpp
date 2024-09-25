#pragma once
#include <xstd/intrinsics.hpp>
#include <xstd/type_helpers.hpp>
#include <memory>
#include <vector>
#include <unordered_map>
#include <string>
#include <span>
#include <xedpp.hpp>

namespace flash
{
	// Compact instruction summary for fast search.
	//
	struct instruction_summary
	{
		uint16_t iclass : 12;
		uint16_t length : 4;

		bool valid() const { return iclass != XED_ICLASS_INVALID; }
	};
	static_assert( sizeof( instruction_summary ) == 2, "Invalid size." );

	// Text analysis.
	//
	struct text_analysis
	{
		// Instruction summary for text sections, same length as type id.
		//
		std::vector<instruction_summary> isummary = {};
	};

	// Rdata analysis.
	//
	struct rdata_analysis
	{
	};

	struct image;

	// Section type.
	//
	struct section
	{
		enum type_id : uint8_t
		{
			unknown = 0,
			text =    1,
			rdata =   2,
		};

		// Name and type.
		//
		std::string          name = {};
		type_id              type = {};
		
		// RVA ranges.
		//
		uint32_t                 rva = 0;
		uint32_t                 rva_limit = 0;

		// Analysis.
		//
		std::optional<text_analysis>  ta;
		std::optional<rdata_analysis> ra;

		// Decoding helper.
		//
		xed::result<xed::decoding> decode( image* img, uint32_t rva ) const;
		uint32_t decode_len( image* img, uint32_t rva ) const;

		// Given a valid offset within the section, finds the previous/next valid instruction.
		//
		std::optional<uint32_t> find_prev( image* img, uint32_t rva, size_t depth = 1 ) const;
		std::optional<uint32_t> find_next( image* img, uint32_t rva, size_t depth = 1 ) const;

		// Validates the instruction.
		//
		bool validate_ip( image* img, uint32_t rva ) const;

		// Applies the section class specific analysis.
		//
		void analyze( image* img );
	};
};