#pragma once
#include "integral_builtins.hpp"

// Type qualifiers.
//
namespace sdki
{
	template<typename T> using nop_t =    T;
	template<typename T> using add_c_t =  const T;
	template<typename T> using add_v_t =  volatile T;
	template<typename T> using add_cv_t = const volatile T;
};

// Declare the legacy builtin types used by the CV format.
//
namespace sdk
{
	// HRESULT.
	//
	using hresult = uint32_t;

	// BSTR | FSTR.
	//
	template<typename T>
	struct basic_string
	{
		uint32_t length;
		T        data[ 1 ];
	};
	using fstring = basic_string<wchar_t>*; // __far
	using bstring = basic_string<wchar_t>*;

	// Unknown specials.
	//
	struct segment;
	struct currency;

	// Bit type.
	//
	using bit = bool;
};