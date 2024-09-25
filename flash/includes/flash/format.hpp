#pragma once
#include <xstd/text.hpp>
#include <xstd/type_helpers.hpp>
#include <string_view>

// Self containing descriptors for flash formats.
//
namespace flash
{
#pragma pack(push, 1)
	// Import type.
	//
	enum class import_type : uint32_t
	{
		imm,      // [target] = imm
		ref_info, // [target] = &info[imm]
		ref_img,  // [target] = &img[imm]
	};

	// Single import instance.
	//
	struct import_entry
	{
		// Import details.
		//
		uint32_t    hash;
		uint32_t    rva  : 30;  // If 0, ignored.
		import_type type : 2;

		// Result.
		//
		int64_t     imm;
	};
	static_assert( sizeof( import_entry ) == 0x10, "Invalid import entry type." );

	// Import collection.
	//
	struct import_information
	{
		union
		{
			// Error/Log offset.
			// - If result data.
			//
			struct
			{
				uint32_t     log_offset : 31;
				uint32_t     is_error   : 1;
			};

			// Offset to package.
			// - If input data.
			//
			uint32_t     pkg_offset;
		};

		// Results.
		//
		uint16_t     num_imports;
		import_entry imports[];
		//uint8_t      raw_data_required[];
		//char         log_data[];

		// Getters. 
		//
		std::string_view get_log() const { if ( log_offset == 0 ) return {}; return { ( ( char* ) this ) + log_offset }; }
	};

	// Flash packages.
	//
	struct script_entry
	{
		uint32_t bytecode_length;
		char     data[]; // Bytecode.

		// Getters for each field.
		//
		std::string_view get_bytecode() const { return { &data[ 0 ], bytecode_length }; }
		
		// Iteration helper.
		//
		const script_entry* next() const { return ( script_entry* ) &data[ bytecode_length ]; }
		bool is_terminator() const { return bytecode_length == 0; }
	};
	struct package
	{
		script_entry first;

		template<typename F>
		void for_each( F&& fn ) const
		{
			for ( auto it = &first; !it->is_terminator(); it = it->next() )
				fn( it->get_bytecode() );
		}
	};
#pragma pack(pop)

	// Hashes an import name.
	//
	static constexpr uint32_t hash_import( std::string_view name )
	{
		uint64_t h = xstd::make_xhash( name );
		return uint32_t( h ^ ( h >> 32 ) );
	}
};

