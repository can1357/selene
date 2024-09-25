#pragma once
#include <list>
#include <unordered_set>
#include <unordered_map>
#include <functional>
#include <filesystem>
#include <vector>
#include <apollo/satella.hpp>
#include "primitives.hpp"
#include "reference_counting.hpp"
#include "../utility/liblto.hpp"

namespace linker
{
	// Collection of object files from various sources representing the current linker context.
	//
	struct collection
	{
		// Type of the module and the build.
		//
		satella::build_type build_type = {};
		satella::module_type module_type = {};

		// Set of libraries that we can import from and the search paths.
		//
		std::list<library> libraries;
		std::vector<std::filesystem::path> library_search_paths = { "" };

		// Set of object files that are loaded.
		//
		std::vector<ref::strong_ptr<object>> working_set;

		// A weakly maintained list of all public symbols.
		//
		std::unordered_map<std::string, ref::weak_ptr<symbol>> public_symbols;

		// Import lists mapping imported symbol to the dynamic library.
		//
		std::unordered_map<std::string, std::pair<std::string, std::string>> imports;

		// A list of all linker directive specified values that should not mismatch.
		//
		std::unordered_map<std::string, std::pair<std::string, std::filesystem::path>> consistent_macros;

		// List of attributes for each global declared in an LLVM object.
		//
		satella::attribute_list<std::string> attributes;

		// If set new objects will not be automatically added from libaries.
		//
		bool loader_lock = false;

		// Enables macro value mismatch checks.
		//
		bool enforce_macro_consistency = true;
		
		// Linker/LLVM options:
		//
		bool is_library = false;
		bool instrument = false;
		bool lto_save = false;
		bool llvm_save = false;
		bool llvm_verify = true;

		// Simple properties.
		//
		bool is_debug() const { return build_type == satella::build_type::development; }

		// Enumerates each symbol/section.
		//
		template<typename T>
		void enum_sections( T&& fn ) const
		{
			for ( auto& obj : working_set )
				for ( auto& scn : obj->sections )
					fn( scn );
		}
		template<typename T>
		void enum_symbols( T&& fn ) const
		{
			for ( auto& obj : working_set )
			{
				for ( auto& scn : obj->sections )
					for ( auto& sym : scn->symbols )
						fn( sym );
				for ( auto& sym : obj->external_symbols )
					fn( sym );
			}
		}

		// Attempts to resolve a symbol.
		//
		uint64_t resolve( const ref::strong_ptr<symbol>& sym ) const;

		// Imports a public symbol by its name.
		//
		ref::strong_ptr<symbol> require( const std::string& name );

		// Includes a single object file, skips if already included, if the context
		// has any unresolved public symbols, tries to import them from the library cache.
		//
		void include( const ref::strong_ptr<object>& obj );

		// Lifts metadata sections into the proper structures.
		//
		void lift_metadata();

		// Eliminates contents of the objects that are not referenced.
		//
		void opt_ref( const std::vector<std::string>& required, bool builtin_use_known, bool ignore_forced_includes = false );

		// Generates code for the LTO sections.
		//
		void code_gen( const std::vector<std::string>& required );

		// Attempts to resolve every external symbol, returns a list of undefined names.
		//
		std::unordered_set<std::string> resolve_all();
	};
};