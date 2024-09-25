#pragma once
#include <memory>
#include <string_view>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <string>
#include <future>
#include <vector>
#include <list>
#include <optional>
#include <array>
#include <map>
#include <filesystem>
#include <coff/image.hpp>
#include <coff/archive.hpp>
#include <coff/uleb128.hpp>
#include <nt/directories/dir_exceptions.hpp>
#include <xstd/assert.hpp>
#include <xstd/file_view.hpp>
#include <xstd/text.hpp>
#include <pdblib/cvconsts.h>
#include <apollo/satella.hpp>
#include "../utility/liblto.hpp"
#include "reference_counting.hpp"

namespace linker
{
	struct symbol;
	struct object;
	struct section;

	// Owned by: Section, object.
	// Owns:     Symbol.
	// Alloc:    Default
	//
	struct relocation
	{
		// Relocated offset.
		//
		size_t offset = 0;

		// Symbol we're relocating based on.
		//
		ref::strong_ptr<symbol> ref_symbol;

		// Type of the relocation.
		//
		coff::reloc_type type = coff::rel_amd64_absolute;

		// String conversion.
		//
		std::string to_string() const
		{
			return xstd::fmt::str( "+0x%x <= %s(%d)", offset, *ref_symbol, ( int ) type );
		}
	};

	// Object metadata.
	//
	struct object_metadata
	{
		// Initializers and terminators.
		// - _PIFV return value is ignored.
		//
		std::vector<ref::strong_ptr<symbol>> initializers;
		std::vector<ref::strong_ptr<symbol>> pre_initializers;
		std::vector<ref::strong_ptr<symbol>> terminators;
		std::vector<ref::strong_ptr<symbol>> pre_terminators;
		
		// CodeView string table.
		//
		std::vector<char> str_table;

		// File checksums.
		//
		struct file_checksum
		{
			std::string file_name;
			CV_SourceChksum_t type;
			std::vector<uint8_t> raw_data;
		};
		std::unordered_map<size_t, file_checksum> file_map;

		// Whether or not floating point is used.
		//
		bool uses_fp = false;

		// Compiler version.
		//
		std::string compiler_version;
	};

	// Section metdata.
	//
	struct section_metadata
	{
		// Symbol tables.
		//
		struct symbol_request
		{
			enum
			{
				symbol_information, // [name, hint]
				field_information,  // [name, field]
				type_information,   // [name, <>]
			} type;
			
			std::array<std::string, 2> id = {};
			uint64_t encryption_key = 0;
			ref::weak_ptr<symbol> target = {};
			uint32_t offset = 0;
		};
		std::vector<symbol_request> symbols = {};

		// Routine information.
		//
		struct line_information
		{
			size_t file_id = 0;
			size_t line = 0;
			size_t length = 0;
			size_t depth = 0;
			std::string inlinee_name = {};
		};
		struct basic_block_entry
		{
			size_t end_off;              // Offset pointing to the end of the basic block.
			ref::weak_ptr<section> scn; // If splitted, section pointing to the beginning of the basic block.
		};
		struct routine_entry
		{
			// Length of the code as reported by symbol information,
			// line information and by the unwind data itself.
			//
			size_t code_length_li = 0;
			size_t code_length_sy = 0;
			size_t code_length_uw = 0;

			size_t get_length() const
			{
				if ( code_length_sy ) return code_length_sy;
				if ( code_length_li ) return code_length_li;
				if ( code_length_uw ) return code_length_uw;
				return 0;
			}

			// Line information.
			// - Maps Code offset => [File:Line].
			//
			std::map<size_t, std::vector<line_information>> lines;

			// Unwind information.
			//
			uint8_t size_prologue = 0;
			uint8_t frame_offset = 0;
			win::unwind_register_id frame_register = {};
			ref::weak_ptr<symbol> chained_unwind = {};
			std::vector<win::unwind_code_t> unwind_codes;

			// Basic block information.
			//
			bool is_split = false;
			std::map<size_t, basic_block_entry> basic_blocks;
		};
		std::unordered_map<size_t, routine_entry> routines;
	};

	// Owned by: Object
	// Owns:     Relocs and symbols
	// Alloc:    ref::allocate
	//
	struct section
	{
		ref::weak_ptr<object> owner;

		// Name, characteristics.
		//
		std::string name;
		coff::section_characteristics_t characteristics = { 0 };

		// Raw data.
		//
		std::vector<uint8_t> raw_data;

		// COMDAT selection details.
		//
		uint32_t comdat_checksum = 0;
		coff::comdat_select_id comdat_select = coff::comdat_select_id::invalid;
		std::vector<ref::weak_ptr<section>> comdat_associatives;
		ref::weak_ptr<section> comdat_associative_root;

		// Relocations.
		//
		std::vector<relocation> relocs;

		// Symbols.
		//
		std::vector<ref::strong_ptr<symbol>> symbols;

		// Virtual address assigned at the final stage.
		//
		uint64_t virtual_address = 0;

		// Metadata associated with this section.
		//
		section_metadata meta = {};

		// Helper to find relocations/symbols.
		//
		const relocation* find_reloc( size_t offset ) const
		{
			for ( auto& reloc : relocs )
				if ( reloc.offset == offset )
					return &reloc;
			return nullptr;
		}
		const relocation* find_reloc( const void* ptr ) const
		{
			for ( auto& reloc : relocs )
				if ( ptr == ( raw_data.data() + reloc.offset ) )
					return &reloc;
			return nullptr;
		}

		// String conversion.
		//
		std::string to_string() const
		{
			return name;
		}

		// Properties.
		//
		bool is_comdat() const
		{
			if ( comdat_select == coff::comdat_select_id::invalid )
				return false;
			if ( comdat_select == coff::comdat_select_id::select_associative )
			{
				xstd::assert_that( comdat_associative_root != nullptr, "Invalid COMDAT section." );
				xstd::assert_that( comdat_associative_root.alive(), "Dangling COMDAT section." );
			}
			else
			{
				xstd::assert_that( !symbols.empty(), "Empty COMDAT section." );
			}
			return true;
		}

		// Global data management.
		//
		bool is_crt() const { return xstd::istarts_with( name, ".crt" ); }
		bool is_c_init() const { return xstd::istarts_with( name, ".crt$xi" ); }
		bool is_cpp_init() const { return xstd::istarts_with( name, ".crt$xc" ); }
		bool is_c_pre_term() const { return xstd::istarts_with( name, ".crt$xp" ); }
		bool is_c_term() const { return xstd::istarts_with( name, ".crt$xt" ); }

		bool is_tls() const { return xstd::istarts_with( name, ".tls" ); }
		bool is_tls_init() const { return xstd::istarts_with( name, ".crt$xu" ); }
		bool is_tls_callback() const { return xstd::istarts_with( name, ".crt$xl" ); }

		// C and C++ exceptions.
		//
		bool is_exception_info() const { return xstd::istarts_with( name, ".pdata" ); }
		bool is_exception_data() const { return xstd::istarts_with( name, ".xdata" ); }

		// Symbol tables.
		//
		bool is_symbol_table() const { return xstd::istarts_with( name, ".symtbl" ); }
		bool is_symbol_table_dummy() const { return xstd::istarts_with( name, ".symdsc" ); }

		// Debug information.
		//
		bool is_debug_info() const { return xstd::istarts_with( name, ".debug" ); }
		bool is_cv_type_stream() const { return xstd::iequals( name, ".debug$t" ); }
		bool is_cv_sym_stream() const { return xstd::iequals( name, ".debug$s" ); }

		// PE directories.
		//
		bool is_import_dir() const { return xstd::istarts_with( name, ".idata" ); }
		bool is_export_dir() const { return xstd::istarts_with( name, ".edata" ); }
		bool is_resource_dir() const { return xstd::istarts_with( name, ".rsrc" ); }
	};

	// Owned by: Section, object, relocation.
	// Owns:     None
	// Alloc:    ref::allocate
	//
	struct symbol
	{
		// Name of the symbol.
		//
		std::string name;

		// Storage class and the address signifiance state.
		//
		coff::storage_class_id storage_class = coff::storage_class_id::none;
		bool address_significant = true;

		// Section and the value.
		//
		uint64_t value = 0;
		bool debug = false;
		bool absolute = false;
		bool dyn_import = false;
		ref::weak_ptr<section> scn;

		// If weak external, aliasing entry and search type.
		//
		ref::strong_ptr<symbol> alias = nullptr;

		// Type of the value.
		//
		coff::base_type_id base_type = coff::base_type_id::none;
		coff::derived_type_id derived_type = coff::derived_type_id::none;

		// String conversion.
		//
		std::string to_string() const
		{
			return xstd::fmt::str( "%s=>%s:+0x%x", name, scn.alive() ? scn->name : "?", value );
		}

		// Properties.
		//
		bool is_weak() const { return storage_class == coff::storage_class_id::weak_external; }
		bool is_public() const { return storage_class == coff::storage_class_id::public_symbol; }
		bool is_private() const { return storage_class == coff::storage_class_id::private_symbol; }
		bool is_undefined() const { return !debug && !absolute && !scn.alive(); }
		bool is_defined() const { return !debug && !absolute && scn.alive(); }
		bool is_comdat() const { return !debug && !absolute && scn.alive() && scn->is_comdat(); }
		bool is_comdat_leader() const { return is_comdat() && scn->symbols.front() == this; }
		uint64_t get_virtual_address() const
		{
			if ( is_undefined() ) return 0;
			if ( absolute ) return value;
			xstd::assert_that( !debug, "Debug symbol being resolved." );

			uint64_t va = scn->virtual_address;
			if ( !va ) return 0;
			return va + value;
		}
	};

	// Describes a single object file.
	//
	struct object
	{
		// Name of the file, optional.
		//
		std::filesystem::path file_name = {};

		// If LTO object, a reference to the LTO module and the regular LLVM mod if relevant.
		//
		lto::object lto = {};
		LLVMModuleRef llvm = nullptr;

		// If LLVM object in memory, list of attributes for each reference.
		//
		satella::attribute_list<LLVMValueRef> attributes;

		// List of all sections.
		//
		std::vector<ref::strong_ptr<section>> sections = {};

		// List of symbols that do not belong to a section.
		//
		std::vector<ref::strong_ptr<symbol>> external_symbols = {};

		// Metadata associated with this section.
		//
		object_metadata meta = {};

		// Linker directives.
		//
		bool is_builtin_provider = false;
		std::unordered_set<std::string> force_includes = {}; // /INCLUDE:
		std::unordered_set<std::string> dllexported_symbols = {}; // /EXPORT:
		std::unordered_multimap<std::string, std::string> consistent_macros = {}; // /FAILIFMISMATCH:

		// Export details if import library.
		//
		std::string export_symbol = {};
		std::string export_library = {};

		// String conversion.
		//
		std::string to_string() const
		{
			return lto ? "<LTO>" : file_name.filename().string().c_str();
		}

		// Discards a section in the object file.
		//
		void discard_section( const ref::strong_ptr<section>& scn )
		{
			auto it = std::find( sections.begin(), sections.end(), scn );
			if ( it == sections.end() )
				return;
			std::exchange( *it, sections.back() );
			sections.pop_back();
			
			scn->relocs.clear();
			scn->raw_data = {};
			for ( auto& sym : scn->symbols )
				sym->scn = nullptr;
			if ( auto root = scn->comdat_associative_root.lock() )
				std::erase( root->comdat_associatives, scn );
			for ( auto& subscn : scn->comdat_associatives )
				if ( subscn.alive() )
					discard_section( subscn.lock() );
		}

		// Same wrapper above in erase if format.
		//
		template<typename Pr>
		void discard_section_if( Pr&& predicate )
		{
			std::vector<ref::strong_ptr<section>> list;
			list.reserve( sections.size() );

			for ( auto& scn : sections )
				if ( predicate( scn ) )
					list.emplace_back( scn );
			for ( auto& scn : list )
				discard_section( std::move( scn ) );
		}
	};

	// Describes a collection of object files.
	//
	struct library
	{
		xstd::file::view<> backing_file = {};

		// Public symbols mapped to object files.
		//
		std::vector<std::shared_future<ref::strong_ptr<object>>> objects;
		std::unordered_map<std::string, std::list<std::shared_future<ref::strong_ptr<object>>>> public_symbols;
	};

	// Loaders.
	//
	ref::strong_ptr<object> load_object( const uint8_t* data, size_t size, std::filesystem::path file_name = {} );
	ref::strong_ptr<object> load_slib( const uint8_t* data, size_t size, std::filesystem::path file_name = {} );
	library load_library( xstd::file::view<> mapping );

	// std::filesystem::path wrappers for the loaders.
	//
	static ref::strong_ptr<object> load_object( const xstd::file::view<>& mapping )
	{
		return load_object( mapping.data(), mapping.size(), mapping.path() );
	}
	static ref::strong_ptr<object> load_object( const std::filesystem::path& path )
	{
		auto file = xstd::file::map_view( path );
		if ( !file ) xstd::error( "File '%ls' not found.", path.c_str() );
		return load_object( *file );
	}
	static ref::strong_ptr<object> load_slib( const xstd::file::view<>& mapping )
	{
		return load_slib( mapping.data(), mapping.size(), mapping.path() );
	}
	static ref::strong_ptr<object> load_slib( const std::filesystem::path& path )
	{
		auto file = xstd::file::map_view( path );
		if ( !file ) xstd::error( "File '%ls' not found.", path.c_str() );
		return load_slib( *file );
	}
	static library load_library( const std::filesystem::path& path )
	{
		auto file = xstd::file::map_view( path );
		if ( !file ) xstd::error( "File '%ls' not found.", path.c_str() );
		return load_library( std::move( *file ) );
	}
};