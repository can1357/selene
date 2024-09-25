#pragma once
#include "common.hpp"

namespace wasm
{
	 // Describes a section class.
	 //
	 enum class section_type : uint8_t
	 {
		  custom =                           0x0,
		  type =                             0x1,
		  imports =                          0x2,
		  function =                         0x3,
		  table =                            0x4,
		  memory =                           0x5,
		  global =                           0x6,
		  exports =                          0x7,
		  start =                            0x8,
		  elem =                             0x9,
		  code =                             0xA,
		  data =                             0xB,
		  datacount =                        0xC,
		  event =                            0xD,
	 };

	 // Describes a type class.
	 //
	 enum class language_type : int8_t
	 {
		  i32 =                              -0x1,
		  i64 =                              -0x2,
		  f32 =                              -0x3,
		  f64 =                              -0x4,
		  anyfunc =                          -0x10,
		  func =                             -0x20,
		  empty_block =                      -0x40
	 };

	 // Describes an external class.
	 //
	 enum class external_kind : uint8_t
	 {
		  function =                         0,
		  table =                            1,
		  memory =                           2,
		  global =                           3,
	 };

	 // Flags for the memory descriptor.
	 //
	 enum limits_flags : uint32_t
	 {
		  limits_none =                      0,
		  limits_has_max =                   1 << 0,
		  limits_is_shared =                 1 << 1,
		  limits_memory64 =                  1 << 2,
	 };

	 // Constrained enumerators used in the bytecode encoded using LEB128.
	 //
	 using value_type =   var_enum_t<language_type>; // Can be: i32, i64 / f32, f64
	 using block_type =   var_enum_t<language_type>; // Can be: i32, i64 / f32, f64 / empty_block
	 using elem_type =    var_enum_t<language_type>; // Can be: anyfunc
};