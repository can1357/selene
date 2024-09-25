#pragma once
#include <xstd/intrinsics.hpp>
#include <xstd/type_helpers.hpp>

// Helper for escaping templates.
//
#define _SDK_ESCAPE(...) __VA_ARGS__

// Find out if we're being evaluted by a code-parser or a compiler.
//
#ifdef __INTELLISENSE__
	#define IN_PARSER 1
#else
	#define IN_PARSER 0
#endif

// Validate compiler.
//
#if !CLANG_COMPILER
	#ifndef IN_GENERATOR
		#error "SDK can only be used with Clang compatible compilers."
	#endif
#else
	#pragma GCC diagnostic ignored "-Wunused-function"
	#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
	#pragma GCC diagnostic ignored "-Wdeprecated-volatile"
	#pragma GCC diagnostic ignored "-Wignored-qualifiers"
	#pragma GCC diagnostic ignored "-Wgnu-string-literal-operator-template"
#endif

#ifndef IN_GENERATOR
	#include <apollo/attributes.hpp>
	#include <apollo/builtins.hpp>
#endif