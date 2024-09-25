#pragma once
#include <vector>
#include <algorithm>
#include <span>
#include <map>
#include <flash/section.hpp>
#include <nt/image.hpp>

namespace flash
{
	struct function_info
	{
		uint32_t rva_begin;
		uint32_t rva_end;
		xed::reg_t frame_reg = XED_REG_INVALID;
		int64_t  frame_offset = 0;
		int64_t  sp = 0;
		xstd::small_vector<std::pair<int64_t, xed::reg_t>, 32> slots;
	};

	struct image
	{
		// Image base address.
		//
		uint64_t base_address;

		// Relevant sections.
		//
		std::vector<section> section_list;

		// Remapped image.
		//
		std::span<uint8_t> data;

		// Cross reference map, RVA referenced -> RVA referencing.
		//
		std::map<uint32_t, std::vector<uint32_t>> xref_map_code_disp; // As memory operand.
		std::map<uint32_t, std::vector<uint32_t>> xref_map_code_call; // As branch target from call.
		std::map<uint32_t, std::vector<uint32_t>> xref_map_data;      // As virtual address.

		// Validation state.
		//
		bool validation_disabled = false;

		// Gets the unwind information given an RVA.
		//
		std::pair<const win::runtime_function_t*, const win::unwind_info_t*> get_unwind_info( uint32_t rva ) const;

		// Gets information about a function.
		//
		std::optional<function_info> query_function( uint32_t rva ) const;

		// Attempts to find function prologue.
		//
		std::optional<uint32_t> find_prologue( uint32_t rva ) const;

		// Finds section from RVA.
		//
		section* get_section( uint32_t rva )
		{
			auto it = std::upper_bound( section_list.begin(), section_list.end(), rva, [ & ] ( uint32_t rva, const section& s )
			{
				return rva < s.rva_limit;
			} );
			if ( it != section_list.end() )
			{
				if ( it->rva <= rva && rva < it->rva_limit )
					return &*it;
			}
			return nullptr;
		}

		// Helper to check pointer bounds.
		//
		template<typename T>
		inline bool can_read( const T* pointer ) const
		{
			return __builtin_expect( ( ( const void* ) ( pointer + 1 ) ) <= ( data.data() + data.size() ), true );
		}

		// Loads an image, input must have been remapped using flash::dump.
		//
		static image load( std::span<uint8_t> img_data, std::string_view deobfuscator );
	};
};
