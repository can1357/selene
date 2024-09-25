#pragma once
#include <xstd/type_helpers.hpp>
#include <xstd/formatting.hpp>
#include <string>
#include <functional>

namespace xt
{
	// Event configuration.
	//
	inline constexpr size_t max_string_length = 126;
	inline constexpr size_t max_parameter_count = 7;

	// Buffer configuration.
	//
	inline constexpr size_t event_buffer_length = 16_mb; // TODO: remove

	// Address naming.
	//
	using fn_address_namer = std::string( * )( xstd::any_ptr );
	inline fn_address_namer name_address = [ ] ( xstd::any_ptr p ) { return xstd::fmt::str( "%p", p ); };
};