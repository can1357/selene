#pragma once
#include <xstd/algorithm.hpp>
#include <xstd/formatting.hpp>
#include "common.hpp"
#include "enums.hpp"
#include "vm.hpp"
#include "descriptors.hpp"

namespace wasm
{
	 static constexpr uint32_t current_metadata_version = 2;

	 // LLVM subsection enums.
	 //
	 enum class subsection_type : uint8_t
	 {
		  segment_information =             5,
		  init_functions =                  6,
		  comdat_information =              7,
		  symbol_table =                    8,
	 };
	 enum class symbol_kind : uint8_t
	 {
		  function =                        0,
		  data =                            1,
		  global =                          2,
		  section =                         3,
		  event =                           4,
		  table =                           5,
	 };
	 enum symbol_flags : uint32_t
	 {
		  sym_weak_binding =                0x01,
		  sym_local_binding =               0x02,
		  sym_visibility_hidden =           0x04,
		  sym_undefined =                   0x10,
		  sym_exported =                    0x20,
		  sym_explicit_name =               0x40,
		  sym_no_strip =                    0x80,
	 };

	 // Segment information subsection.
	 //
	 struct segment_information
	 {
		  var_string                        name;
		  var_size_t                        alignment;
		  var_uint_t<32>                    flags;

		  // Auto-serialized.
		  //
		  auto tie() { return std::tie( name, alignment, flags ); }
	 };

	 // Init functions subsection.
	 //
	 struct init_function
	 {
		  var_index_t                       index;

		  // Auto-serialized.
		  //
		  auto tie() { return std::tie( index ); }
	 };

	 // Symbol table subsection.
	 //
	 struct object_symbol
	 {
		  var_index_t                       index;
		  var_string                        name;

		  // Auto-serialized.
		  //
		  auto tie() { return std::tie( index, name ); }
	 };
	 struct object_symbol_imp
	 {
		  var_index_t                       index;

		  // Auto-serialized.
		  //
		  auto tie() { return std::tie( index ); }
	 };
	 struct data_symbol
	 {
		  var_string                        name;
		  var_index_t                       seg_index;
		  var_size_t                        seg_offset;
		  var_uint_t<32>                    size;

		  // Auto-serialized.
		  //
		  auto tie() { return std::tie( name, seg_index, seg_offset, size ); }
	 };
	 struct data_symbol_undef
	 {
		  var_string                        name;

		  // Auto-serialized.
		  //
		  auto tie() { return std::tie( name ); }
	 };
	 struct section_symbol
	 {
		  var_index_t                       index;

		  // Auto-serialized.
		  //
		  auto tie() { return std::tie( index ); }
	 };
	 struct symbol_information
	 {
		  symbol_kind                       kind;
		  var_uint_t<32>                    flags;
		  std::variant<
				section_symbol, 
				object_symbol,
				object_symbol_imp,
				data_symbol,
				data_symbol_undef
		  >                                 sym;
		  
		  // Finds the associated import entry.
		  //
		  template<xstd::Iterable C>
		  const import_entry* find_import_entry( C&& container ) const
		  {
				if ( auto p = std::get_if<object_symbol_imp>( &sym ) )
				{
					 // Convert the kind.
					 //
					 wasm::external_kind cvt = {};
					 switch ( kind )
					 {
						  case wasm::symbol_kind::function: cvt = wasm::external_kind::function; break;
						  case wasm::symbol_kind::global:   cvt = wasm::external_kind::global;   break;
						  case wasm::symbol_kind::table:    cvt = wasm::external_kind::table;    break;
						  default:                          return nullptr;
					 }
					 size_t n = p->index;
					 for ( const import_entry& ie : container )
						  if ( ie.kind == cvt && !n-- )
								return &ie;
				}
				return nullptr;
		  }

		  // String conversion.
		  //
		  std::string to_string() const
		  {
				return std::visit( [ & ] <typename T> ( const T & sym )
				{
					 if constexpr ( xstd::Same<T, wasm::section_symbol> )
						  return xstd::fmt::str( "section: %d", sym.index.value );
					 if constexpr ( xstd::Same<T, wasm::object_symbol> )
						  return xstd::fmt::str( "%s: %d => %s", xstd::fmt::as_string( kind ), sym.index.value, sym.name );
					 if constexpr ( xstd::Same<T, wasm::object_symbol_imp> )
						  return xstd::fmt::str( "%s: %d => <import>", xstd::fmt::as_string( kind ), sym.index.value );
					 if constexpr ( xstd::Same<T, wasm::data_symbol> )
						  return xstd::fmt::str( "data: %s @ [%x:%x of size 0x%x]", sym.name, sym.seg_index.value, sym.seg_offset.value, sym.size.value );
					 if constexpr ( xstd::Same<T, wasm::data_symbol_undef> )
						  return xstd::fmt::str( "data: %s => import", sym.name );
				}, sym );
		  }

		  // Manually serialized according to the RFC.
		  //
		  static symbol_information deserialize( xstd::serialization& stream )
		  {
				symbol_information sym;
				stream >> sym.kind >> sym.flags;
				switch ( sym.kind )
				{
					 case symbol_kind::section: 
						  stream >> sym.sym.emplace<section_symbol>();
						  break;

					 case symbol_kind::data:
						  if ( sym.flags & sym_undefined )
								stream >> sym.sym.emplace<data_symbol_undef>();
						  else
								stream >> sym.sym.emplace<data_symbol>();
						  break;

					 default:
						  if ( sym.flags & sym_undefined )
								stream >> sym.sym.emplace<object_symbol_imp>();
						  else
								stream >> sym.sym.emplace<object_symbol>();
						  break;
				}
				return sym;
		  }
		  void serialize( xstd::serialization& stream ) const
		  {
				stream << kind << flags;
				switch ( kind )
				{
					 case symbol_kind::section: 
						  stream << std::get<section_symbol>( sym );
						  break;

					 case symbol_kind::data:
						  if ( flags.value & sym_undefined )
								stream << std::get<data_symbol_undef>( sym );
						  else
								stream << std::get<data_symbol>( sym );
						  break;

					 default:
						  if ( flags.value & sym_undefined )
								stream << std::get<object_symbol_imp>( sym );
						  else
								stream << std::get<object_symbol>( sym );
						  break;
				}
		  }
	 };

	 // COMDAT information subsection.
	 //
	 struct comdat_symbol
	 {
		  symbol_kind                       kind;
		  var_index_t                       index; // If not segment, should not be an import.

		  // Auto-serialized.
		  //
		  auto tie() { return std::tie( kind, index ); }

	 };
	 struct comdat_information
	 {
		  var_string                        name;
		  var_uint_t<32>                    flags;
		  var_container<comdat_symbol>      comdat_symbols;

		  // Auto-serialized.
		  //
		  auto tie() { return std::tie( name, flags, comdat_symbols ); }
	 };

	 // Descriptor for the custom linking section inserted by LLVM.
	 //
	 struct linking_section
	 {
		  var_uint_t<32>                     version;
		  var_container<init_function>       init_funcs;
		  var_container<segment_information> segment_info;
		  var_container<comdat_information>  comdat_info;
		  var_container<symbol_information>  symbol_table;

		  // Manually serialized according to the RFC.
		  //
		  static linking_section deserialize( xstd::serialization& stream )
		  {
				linking_section scn;
				stream >> scn.version;

				// Until stream is finished, read sections.
				//
				while ( !stream.empty() )
				{
					 subsection_type type;
					 stream >> type;

					 var_container<uint8_t> raw_data;
					 stream >> raw_data;
					 xstd::serialization substream = { raw_data.data(), raw_data.size(), true };

					 switch ( type )
					 {
						  case subsection_type::segment_information:
								substream >> scn.segment_info;
								break;
						  case subsection_type::init_functions:
								substream >> scn.init_funcs;
								break;
						  case subsection_type::comdat_information:
								substream >> scn.comdat_info;
								break;
						  case subsection_type::symbol_table:
								substream >> scn.symbol_table;
								break;
						  default:
								break;
					 }
				}
				return scn;
		  }
	 };

	 // LLVM relocation section and the types.
	 //
	 enum class relocation_type : uint8_t
	 {
		  function_index_leb =      0,
		  table_index_sleb =        1,
		  table_index_i32 =         2,
		  memory_addr_leb =         3,
		  memory_addr_sleb =        4,
		  memory_addr_i32 =         5,
		  type_index_leb =          6,
		  global_index_leb =        7,
		  function_offset_i32 =     8,
		  section_offset_i32 =      9,
		  event_index_leb =         10,
		  global_index_i32 =        13,
		  memory_addr_leb64 =       14,
		  memory_addr_sleb64 =      15,
		  memory_addr_i64 =         16,
		  memory_addr_rel_sleb64 =  17,
		  table_index_sleb64 =      18,
		  table_index_i64 =         19,
		  table_number_leb =        20,
	 };
	 struct relocation_entry
	 {
		  relocation_type                   type;
		  var_size_t                        offset;
		  var_index_t                       index;
		  var_size_t                        addend = { 0 };

		  // Manually serialized according to the RFC.
		  //
		  static relocation_entry deserialize( xstd::serialization& stream )
		  {
				relocation_entry rel;
				stream >> rel.type >> rel.offset >> rel.index;
				if ( ( relocation_type::memory_addr_leb64 <= rel.type && rel.type <= relocation_type::memory_addr_rel_sleb64 ) ||
					  ( relocation_type::memory_addr_leb <= rel.type && rel.type <= relocation_type::memory_addr_i32 ) ||
					  rel.type == relocation_type::function_offset_i32 || rel.type == relocation_type::section_offset_i32 )
				{
					 stream >> rel.addend;
				}
				return rel;
		  }
		  void serialize( xstd::serialization& stream ) const
		  {
				stream << type << offset << index;
				if ( ( relocation_type::memory_addr_leb64 <= type && type <= relocation_type::memory_addr_sleb64 ) ||
					  ( relocation_type::memory_addr_leb <= type && type <= relocation_type::memory_addr_i32 ) ||
					  type == relocation_type::function_offset_i32 || type == relocation_type::section_offset_i32 )
				{
					 stream << addend;
				}
		  }
	 };
	 struct relocations_section
	 {
		  var_index_t                       index;
		  var_container<relocation_entry>   relocs;

		  // Auto-serialized.
		  //
		  auto tie() { return std::tie( index, relocs ); }
	 };
};