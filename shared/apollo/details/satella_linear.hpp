#pragma once
#include <memory>
#include <vector>
#include <map>
#include <filesystem>
#include <ranges>
#include <xstd/bitwise.hpp>
#include <xstd/algorithm.hpp>
#include <xstd/random.hpp>
#include <xstd/assert.hpp>
#include <xstd/hashable.hpp>
#include "../satella.hpp"

namespace satella
{
	using section_map_t = std::unordered_map<section*, uint64_t, xstd::hasher<>>;

	// Section sorting predicates for linear mapper.
	//
	enum class section_placement
	{
		random,
		grouped_by_type,
		identity,
	};

	// Relocates a given linearly mapped image.
	// - If first time relocation, old base can be set to std::string::npos.
	//
	inline xstd::result<> linear_relocate( std::vector<uint8_t>& raw_data, section_map_t& section_map, uint64_t old_base, uint64_t new_base )
	{
		// Fix the section map.
		//
		for ( auto& [scn, section_va] : section_map )
		{
			if ( old_base != std::string::npos )
				section_va -= old_base;
			section_va += new_base;
		}

		// Iterate every section.
		//
		for ( auto& [scn, section_va] : section_map )
		{
			for ( auto& [off, reloc] : scn->relocations )
			{
				// Skip if dynamic.
				//
				if ( reloc.symbol && reloc.symbol->is_dynamic )
					continue;

				// Validate boundaries of the relocation.
				//
				uint8_t* reloc_site = raw_data.data() + ( section_va - new_base ) + off;
				if ( ( reloc_site + reloc.size() ) > ( raw_data.data() + raw_data.size() ) )
					return xstd::exception{ "Relocation out of bounds." };

				// Get the VA.
				//
				uint64_t target_va = 0;
				if ( reloc.symbol->section )
					target_va = section_map.at( reloc.symbol->section ) + reloc.symbol->section_offset;
				else if ( reloc.symbol->name == "__ImageBase" )
					target_va = new_base;
				if ( !target_va )
					return xstd::exception{ "Failed to resolve reloc.symbolbol %s for relocation.", reloc.symbol->name };

				// Try fixing up the relocation.
				//
				auto state = reloc.fixup(
					old_base,
					new_base,
					section_va + off,
					target_va,
					reloc_site
				);
				if ( !state ) return state;
			}
		}
		return std::monostate{};
	}

	// Linearly maps a given satella image at the specified base address.
	//
	inline xstd::result<std::pair<std::vector<uint8_t>, section_map_t>> linear_map( const image* img, uint64_t base_address, size_t header_size, section_placement sec_placement )
	{
		// Allocate the storage for the result and reserve an estimate size.
		//
		xstd::result<std::pair<std::vector<uint8_t>, section_map_t>> result = {};
		auto& [raw_data, section_map] = result.result.emplace();
		raw_data.reserve( 5_mb );

		// Decide the order sections are placed.
		//
		std::vector<size_t> order_idx( img->sections.size() );
		std::iota( order_idx.begin(), order_idx.end(), 0ull );
		if ( sec_placement == section_placement::grouped_by_type ) {
			std::stable_sort( order_idx.begin(), order_idx.end(), [ & ] ( size_t a, size_t b ) {
				return img->sections[ a ]->type < img->sections[ b ]->type;
			} );
		} else if ( sec_placement == section_placement::random ) {
			xstd::shuffle_random( order_idx );
		}

		// Copy all data into a linear buffer and initialize section map.
		//
		raw_data.resize( header_size );
		uint64_t rva = header_size;
		for ( size_t index : order_idx )
		{
			// Determine the ranges and resize the buffer.
			//
			auto& scn = img->sections[ index ];
			size_t prev = rva;
			size_t begin = xstd::align_up( prev, scn->alignment );
			size_t end = begin + scn->raw_data.size();
			raw_data.resize( end );
			rva = end;

			// Fill the padding and copy the data.
			//
			for ( size_t it = prev; it != begin; ++it )
				raw_data[ it ] = 0x00;
			std::copy_n( scn->raw_data.begin(), scn->raw_data.size(), raw_data.begin() + begin );

			// Initialize the section map entry.
			//
			section_map.emplace( scn.get(), begin );
		}

		// Fix relocations.
		//
		result.status = linear_relocate( raw_data, section_map, std::string::npos, base_address ).status;
		return result;
	}
};
