#pragma once
#include <stdint.h>
#include <string>
#include <string_view>
#include <memory>
#include <tuple>
#include <vector>
#include <list>
#include <array>
#include <random>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <filesystem>
#include <xstd/assert.hpp>
#include <xstd/leb128.hpp>
#include <xstd/random.hpp>
#include <xstd/file.hpp>
#include <xstd/formatting.hpp>
#include <xstd/serialization.hpp>
#include <xstd/text.hpp>
#include <xstd/time.hpp>
#include <xstd/hashable.hpp>
#include <nt/directories/dir_exceptions.hpp>

namespace satella
{
	static constexpr uint64_t object_identifier_key = 0xf4a9f6392456f045;
	static constexpr uint64_t import_library_magic =  0xeeae0123eeae456;

	// Attribute list helper.
	//
	template<typename K>
	struct attribute_list
	{
		using set_type = std::unordered_set<K, xstd::hasher<>>;
		using map_type = std::map<std::string, set_type>;
		using iterator_type = typename map_type::iterator;
		using const_iterator_type = typename map_type::const_iterator;
		map_type map = {};

		// Iteration.
		//
		iterator_type begin() { return map.begin(); }
		iterator_type end() { return map.end(); }
		const_iterator_type begin() const { return map.begin(); }
		const_iterator_type end() const { return map.end(); }

		// Appends a new attribute.
		//
		template<typename T>
		void add( T&& owner, std::string attribute )
		{
			map[ std::move( attribute ) ].emplace( owner );
		}

		// Lookup helpers.
		//
		const set_type& find( std::string_view str ) const
		{
			const_iterator_type it = std::find_if( map.begin(), map.end(), [ & ] ( auto&& pair ) { return pair.first == str; } );
			if ( it == map.end() )
				return xstd::static_default{};
			else
				return it->second;
		}
		std::pair<iterator_type, iterator_type> find_prefixed( std::string_view str )
		{
			auto prefixed = [ & ] ( auto&& pair ) { return xstd::istarts_with( pair.first, str ); };
			auto it1 = std::find_if( begin(), end(), prefixed );
			auto it2 = std::find_if_not( it1, end(), prefixed );
			return { it1, it2 };
		}
		std::pair<const_iterator_type, const_iterator_type> find_prefixed( std::string_view str ) const
		{
			auto [it1, it2] = const_cast< attribute_list<K>* >( this )->find_prefixed( str );
			return { const_iterator_type( it1 ), const_iterator_type( it2 ) };
		}

		// Moving lookup helpers.
		//
		set_type move( std::string_view str ) const
		{
			auto& set = find( str );
			if ( !set.empty() )
				return std::move( const_cast< set_type& >( set ) );
			return {};
		}
		std::vector<std::pair<K, std::string_view>> move_prefixed( std::string_view str ) const
		{
			auto [beg, end] = find_prefixed( str );
			std::vector<std::pair<K, std::string_view>> entries;
			for ( auto it = beg; it != end; ++it )
			{
				for ( auto& entry : it->second )
				{
					auto& res = entries.emplace_back( entry, it->first );
					res.second.remove_prefix( str.length() );
				}
			}
			return entries;
		}

		// Auto serialize.
		//
		auto tie() { return std::tie( map ); }
	};

	// Forward declarations.
	//
	struct line_info;
	struct symbol;
	struct relocation;
	struct section;
	struct basic_block;
	struct function;
	struct image;

	// Enumerators.
	//
	enum class module_type : uint8_t
	{
		invalid = 0,
		loader,
		kernel,
		dynamic,
		max,
	};
	enum class build_type : uint8_t
	{
		invalid = 0,
		development,
		production,
		max,
	};
	enum class relocation_type : uint8_t
	{
		invalid = 0,
		va,     // u64
		rva,    // u32
		rel8,   // i8
		rel32,  // i32
		max,
	};
	enum class section_type : uint8_t
	{
		invalid = 0,
		code,
		rdata,
		data,
		mixed,
		max,
	};
	enum class imported_symbol_type : uint8_t
	{
		invalid = 0,
		global, // [name, hint]
		field,  // [name, field]
		type,   // [name, <>]
		max,
	};

	// Types for import libraries.
	//
	struct import_library final
	{
		std::unordered_set<std::string> symbols;

		// Auto-serialization.
		//
		auto tie() { return std::tie( symbols ); }
	};

	// Types for image files.
	//
	struct line_info final
	{
		// Pointer to the name of the file.
		//
		std::string file_name;

		// Name of the inlined function.
		//
		std::string inlinee_name = {};

		// Line in the file, length of the code, and inlining depth.
		//
		size_t line = 0;
		size_t length = 0;
		size_t depth = 0;

		// Auto-serialization / String conversion.
		//
		auto tie() { return std::tie( file_name, inlinee_name, line, length, depth ); }
	};
	struct symbol final
	{
		// Name of the symbol.
		//
		std::string name;

		// The section it belongs to and the offset into it.
		//
		section* section = nullptr;
		uint32_t section_offset = 0;
		bool is_dynamic = false;

		// Auto-serialization / String conversion.
		//
		std::string to_string() const { return name; }
		auto tie() { return std::tie( name, section, section_offset, is_dynamic ); }
	};
	struct relocation final
	{
		// Type of the relocation and the relocation type specific data:
		// - Data field is currently only used if == rel, interpreted as offset to RIP.
		//
		relocation_type type = {};
		int8_t type_data = 0;

		// Targetted symbol.
		//
		symbol* symbol = nullptr;

		// Returns the relocation size.
		//
		inline constexpr size_t size() const
		{
			switch ( type )
			{
				case relocation_type::va:
					return 8;
				case relocation_type::rva:
					return 4;
				case relocation_type::rel8:
					return 1;
				case relocation_type::rel32:
					return 4;
				default:
					return 0;
			}
		}

		// Checks whether or not relocation is in bounds for the given type.
		//
		inline constexpr bool within_bounds( uint64_t source_va, uint64_t target_va, uint64_t img_base = 0 ) const
		{
			switch ( type )
			{
				case relocation_type::rva:
					return xstd::narrow_viable<uint32_t, int64_t>( target_va - img_base );
				case relocation_type::rel8:
					return xstd::narrow_viable<int8_t, int64_t>( target_va - ( source_va + type_data + 1 ) );
				case relocation_type::rel32:
					return xstd::narrow_viable<int32_t, int64_t>( target_va - ( source_va + type_data + 4 ) );
				default:
					return true;
			}
		}

		// Fixes a given relocation target.
		// - If first time relocation, old base can be skipped.
		//
		inline xstd::result<> fixup( uint64_t old_base, uint64_t new_base, uint64_t source_va, uint64_t target_va, void* at ) const
		{
			union
			{
				uint64_t* u64;
				uint32_t* u32;
				int32_t* i32;
				int8_t* i8;
				uint8_t* u8;
				void* p;
			};
			p = at;

			switch ( type )
			{
				case relocation_type::va:
				{
					if ( old_base != std::string::npos )
					{
						*u64 -= old_base;
						*u64 += new_base;
					}
					else
					{
						*u64 += target_va;
					}
					break;
				}
				case relocation_type::rva:
				{
					if ( old_base == std::string::npos )
					{
						if ( auto u32v = xstd::narrow_cast_s<uint32_t>( target_va - new_base ) )
							*u32 += *u32v;
						else
							return xstd::exception{ "Relocation out of u32 bounds." };
					}
					break;
				}
				case relocation_type::rel8:
				{
					if ( old_base == std::string::npos )
					{
						uint64_t va_end = source_va + type_data + 1;
						ptrdiff_t rel = target_va - va_end;
						if ( auto i8v = xstd::narrow_cast_s<int8_t>( rel ) )
							*i8 += *i8v;
						else
							return xstd::exception{ "Relocation out of i8 bounds." };
					}
					break;
				}
				case relocation_type::rel32:
				{
					if ( old_base == std::string::npos )
					{
						uint64_t va_end = source_va + type_data + 4;
						ptrdiff_t rel = target_va - va_end;
						if ( auto i32v = xstd::narrow_cast_s<int32_t>( rel ) )
							*i32 += *i32v;
						else
							return xstd::exception{ "Relocation out of i32 bounds." };
					}
					break;
				}
				default:
					return xstd::exception{ "Unknown relocation type %u.", type };
			}
			return std::monostate{};
		}
		inline xstd::result<> fixup( uint64_t new_base, uint64_t source_va, uint64_t target_va, void* at ) const { return fixup( std::string::npos, new_base, source_va, target_va, at ); }

		// Auto-serialization / String conversion.
		//
		std::string to_string() const
		{
			switch ( type )
			{
				case satella::relocation_type::va:    return xstd::fmt::str( "va => %s", *symbol );
				case satella::relocation_type::rva:   return xstd::fmt::str( "rva => %s", *symbol );
				case satella::relocation_type::rel8:  return xstd::fmt::str( "rel8 (%d) => %s", type_data, *symbol );
				case satella::relocation_type::rel32: return xstd::fmt::str( "rel32 (%d) => %s", type_data, *symbol );
				default:                              return xstd::fmt::str( "[?%d] (%d) => %s", type, type_data, *symbol );
			}
		}
		auto tie() { return std::tie( type, type_data, symbol ); }
	};
	struct section final
	{
		// Alignment in bytes.
		//
		size_t alignment = 1;

		// Name of the section and the object file it came from.
		//
		std::string object_name;
		std::string name;

		// Type of the data section contains and the raw data.
		//
		section_type type = {};
		std::vector<uint8_t> raw_data;

		// Relocations ordered by the offset.
		//
		std::map<size_t, relocation> relocations;

		// Symbols ordered by the offset.
		//
		std::multimap<size_t, std::shared_ptr<symbol>> symbols;

		// Owning function if this is a basic block // single function.
		//
		function* function = nullptr;

		// -- Temporary, used for grouping.
		//
		void* temporary = 0;

		// Auto-serialization / String conversion.
		//
		std::string to_string() const { return xstd::fmt::str( "%s:%s [0x%llx bytes]", object_name, name, raw_data.size() ); }
		auto tie() { return std::tie( alignment, object_name, name, type, raw_data, relocations, symbols, function ); }
	};
	struct basic_block final
	{
		// Symbol this basic block resides at.
		//
		symbol* symbol = nullptr;

		// Length of the code.
		//
		size_t length = 0;

		// Auto-serialization / String conversion.
		//
		std::string to_string() const { return xstd::fmt::str( "bblock{ %s }", *symbol ); }
		auto tie() { return std::tie( symbol, length ); }
	};
	struct function final
	{
		// Unwind information.
		//
		size_t length_prolog = 0;
		uint8_t frame_offset = 0;
		win::unwind_register_id frame_register = {};
		std::vector<win::unwind_code_t> unwind_codes;

		// List of basic blocks or the starting symbol, depending on whether it was splitted or not.
		//
		std::shared_ptr<symbol> start_point;
		std::map<size_t, basic_block> basic_blocks;

		// Line information.
		//
		std::map<size_t, std::vector<line_info>> lines;

		// Returns the function name.
		//
		std::string_view get_name() const
		{
			if ( basic_blocks.empty() )
				return start_point->name;
			if ( auto sym = basic_blocks.begin()->second.symbol )
				return sym->name;
			return "__unnamed"; // Matches LLVM convention.
		}

		// Auto-serialization / String conversion.
		//
		std::string to_string() const { return xstd::fmt::str( "function '%s'", get_name() ); }
		auto tie() { return std::tie( length_prolog, frame_offset, frame_register, unwind_codes, start_point, basic_blocks, lines ); }
	};
	struct imported_symbol final
	{
		// The type.
		//
		imported_symbol_type type = {};

		// The identifiers.
		//
		std::array<std::string, 2> id = {};

		// Encryption key.
		//
		uint64_t encryption_key = 0;

		// Target symbol and the offset from it where the data should be placed.
		//
		symbol* target = {};
		uint32_t offset = 0;

		// Auto-serialization / String conversion.
		//
		std::string to_string() const { return xstd::fmt::str( "symbolic import '%s':'%s'", id[ 0 ], id[ 1 ] ); }
		auto tie() { return std::tie( type, id, encryption_key, target, offset ); }
	};
#pragma pack(push, 1)
	struct metadata_header final
	{
		uint64_t    object_identifier;
		build_type  type_build;
		module_type type_module;
	};
	static_assert( sizeof( metadata_header ) == ( 8 + 2 ), "Invalid packing." );
#pragma pack(pop)

	struct image final
	{
		// Type of the image.
		//
		build_type type_build = {};
		module_type type_module = {};

		// Identifier of image.
		//
		uint64_t object_identifier = 0;

		// The list of all sections.
		//
		std::vector<std::shared_ptr<section>> sections;

		// List of functions.
		//
		std::list<std::shared_ptr<function>> functions;

		// List of attributes.
		//
		attribute_list<std::shared_ptr<symbol>> attributes;

		// Symbolic imports and special intrinsic symbols.
		//
		std::list<imported_symbol> imported_symbols;
		std::unordered_map<std::string, std::shared_ptr<symbol>> intrinsic_symbols;

		// Entry point if relevant.
		//
		std::shared_ptr<symbol> entry_point;

		// Hinted groups for the scatter mapper.
		//
		std::vector<std::vector<section*>> hinted_groups;

		// Exported symbols if library.
		//
		std::unordered_map<std::string, std::shared_ptr<symbol>> exported_symbols;

		// Dynamically imported symbols if dynamic component.
		//
		std::unordered_map<std::string, std::shared_ptr<symbol>> dynamic_symbols;

		// Merges two sections.
		//
		std::shared_ptr<section> merge_sections( std::shared_ptr<section> src, std::shared_ptr<section> dst )
		{
			// If src has stricter alignment requirements, merge dst to src instead.
			//
			if ( src->alignment > dst->alignment )
				std::swap( src, dst );

			// Remove the src sectionfrom the image.
			//
			auto it = std::find( sections.begin(), sections.end(), src );
			sections.erase( it );
			fassert( src.use_count() == 1 );

			// Remove the name of dst, it's no longer relevant.
			//
			dst->name.clear();
			dst->object_name.clear();

			// If types mismatch, mark it as mixed.
			//
			if ( dst->type != src->type )
				dst->type = section_type::mixed;

			// Calculate the new boundaries.
			//
			size_t src_start = xstd::align_up( dst->raw_data.size(), src->alignment );
			dst->raw_data.resize( src_start + src->raw_data.size() );
			std::copy( dst->raw_data.begin(), dst->raw_data.end(), dst->raw_data.begin() + src_start );

			// Relocate symbol entries.
			//
			for ( auto& [off, symbol] : src->symbols )
			{
				symbol->section = dst.get();
				symbol->section_offset += src_start;
				dst->symbols.insert( { symbol->section_offset, std::move( symbol ) } );
			}

			// Relocate the relocation entries.
			//
			for ( auto& [off, reloc] : src->relocations )
				dst->relocations.insert( { off + src_start, std::move( reloc ) } );
			return dst;
		}

		// Writes the grouping hints based on the short relocations.
		//
		void hint_groups()
		{
			hinted_groups.clear();

			// Declare the helper function to check whether or not the relocation is x-reloc eligable.
			//
			auto is_xreloc_eliable = [ & ] ( const relocation& reloc ) -> bool
			{
				// If relocated against an intrinsic symbol, not eligble.
				//
				if ( !reloc.symbol->section )
					return false;

				// If relocated as RVA, not eligable.
				//
				if ( reloc.type == satella::relocation_type::rva )
					return false;

				// If type is not VA:
				//
				if ( reloc.type != satella::relocation_type::va )
				{
					// If non-code section, not eligable.
					//
					if ( reloc.symbol->section->type != satella::section_type::code )
						return false;
				}
				return true;
			};

			// Start the list with every section being in its own group.
			//
			std::vector<std::vector<section*>> group_vec( sections.size() );
			for ( size_t n = 0; n != sections.size(); n++ )
			{
				auto& sec = sections[ n ];
				group_vec[ n ].emplace_back( sec.get() );
				sec->temporary = &group_vec[ n ];
			}
			auto sec_to_group = [ & ] ( auto scn ) -> std::vector<section*>*& { return ( std::vector<section*>*& ) scn->temporary; };
			
			// Iterate every section:
			//
			section* first_imgbase_section = nullptr;
			for ( auto& scn : sections )
			{
				// Lookup the real index for the current group.
				//
				auto& group = sec_to_group( scn );

				// For each relocation in the section:
				//
				for ( auto& [off, reloc] : scn->relocations )
				{
					// If x-reloc eligable, skip.
					//
					if ( is_xreloc_eliable( reloc ) )
						continue;

					// Otherwise join the groups.
					//
					section* scn2 = reloc.symbol->section;
					if ( !scn2 )
					{
						if ( first_imgbase_section )
						{
							scn2 = first_imgbase_section;
						}
						else
						{
							first_imgbase_section = scn.get();
							continue;
						}
					}

					std::vector<section*>* gr_big = group;
					std::vector<section*>* gr_small = sec_to_group( scn2 );
					if ( gr_big == gr_small )
						continue;

					if ( gr_small->size() > gr_big->size() )
						std::swap( gr_small, gr_big );

					for ( auto& entry : *gr_small )
					{
						sec_to_group( entry ) = gr_big;
						gr_big->emplace_back( entry );
					}
					gr_small->clear();
				}
			}

			// Determine the group map.
			//
			for ( auto& list : group_vec )
			{
				if ( list.empty() )
					continue;
				auto& gr = hinted_groups.emplace_back();
				for ( auto& member : list )
					gr.emplace_back( member );
			}
		}

		// Generates an import library.
		//
		import_library generate_slib() const
		{
			import_library result = {};
			for ( auto& [k, v] : exported_symbols )
				result.symbols.emplace( k );
			return result;
		}

		// Auto-serialization.
		//
		auto tie() { return std::tie( /*type_build, type_module, object_identifier,*/ sections, functions, attributes, imported_symbols, intrinsic_symbols, entry_point, hinted_groups, exported_symbols, dynamic_symbols); }

		// Metadata wrapper.
		//
		metadata_header get_metadata() const
		{
			return { object_identifier, type_build, type_module };
		}
		void set_metadata( const metadata_header& header )
		{
			object_identifier = header.object_identifier;
			type_build = header.type_build;
			type_module = header.type_module;
		}
	};

	// Serialization interface.
	//
	inline std::vector<uint8_t> serialize_image( const image& img )
	{
		auto buffer = xstd::serialize( img );
		auto md = img.get_metadata();
		auto& mdb = xstd::as_bytes( md );
		buffer.insert( buffer.begin(), mdb.begin(), mdb.end() );
		return buffer;
	}
	inline image deserialize_image( std::span<const uint8_t> data )
	{
		if ( data.size() < sizeof( metadata_header ) )
			xstd::throw_fmt( XSTD_ESTR( "Invalid satella image." ) );
		auto md = *( metadata_header* ) data.data();
		data = data.subspan( sizeof( metadata_header ) );

		auto img = xstd::deserialize<image>( data );
		img.set_metadata( md );
		return img;
	}

	inline void write_image( const std::filesystem::path& path, const image& img )
	{
		xstd::file::write_raw( path, serialize_image( img ) );
	}
	inline image read_image( const std::filesystem::path& path )
	{
		return deserialize_image( *xstd::file::read_raw( path ) );
	}

	inline std::vector<uint8_t> serialize_import_library( const import_library& img )
	{
		std::vector vec = xstd::serialize( img );
		vec.insert( vec.begin(), ( uint8_t* ) &import_library_magic, ( uint8_t* ) std::next( &import_library_magic ) );
		return vec;
	}
	inline import_library deserialize_import_library( std::span<const uint8_t> data )
	{
		if ( data.size() <= sizeof( import_library_magic ) )
			return {};
		if ( *( uint64_t* ) data.data() != import_library_magic )
			return {};
		return xstd::deserialize<import_library>( data.subspan( 8 ) );
	}

	inline void write_import_library( const std::filesystem::path& path, const import_library& img )
	{
		xstd::file::write_raw( path, serialize_import_library( img ) );
	}
	inline import_library read_import_library( const std::filesystem::path& path )
	{
		return deserialize_import_library( *xstd::file::read_raw( path ) );
	}
};
