#pragma once
#include <filesystem>
#include <xstd/logger.hpp>
#include <xstd/file_view.hpp>
#include <llvm-c/lto.h>
#include <llvm-c/Core.h>
#include <llvm-c/BitWriter.h>
#include <llvm-c/BitReader.h>
#include <ranges>

namespace lto
{
	// Sets LTO options, must be invoked before use of any other types.
	//
	inline bool options_initialized = false;

	template<xstd::Iterable T = std::initializer_list<const char*>>
	inline void set_options( T&& options )
	{
		std::vector<const char*> arr{ std::begin( options ), std::end( options ) };
		fassert( !options_initialized );
		thinlto_debug_options( arr.data(), arr.size() );
	}

	// Generic managed LLVM object.
	//
	template<typename T, auto Del>
	struct llvm_managed
	{
		// The raw pointer.
		//
		T ptr = nullptr;

		// Constructed by pointer or none implying nullptr.
		//
		llvm_managed() {}
		llvm_managed( std::nullptr_t ) {}
		
		llvm_managed( T p ) : ptr( p ) 
		{
			options_initialized = true; // ltoLib will initialize options itself by this time.
		}

		// No copy, move swaps.
		//
		llvm_managed( const llvm_managed& ) = delete;
		llvm_managed& operator=( const llvm_managed& ) = delete;
		llvm_managed( llvm_managed&& o ) noexcept : ptr( std::exchange( o.ptr, nullptr ) ) {}
		llvm_managed& operator=( llvm_managed&& o ) noexcept { std::swap( ptr, o.ptr ); return *this; }

		// Invoke deleter on destruction.
		//
		~llvm_managed() { if ( ptr ) Del( ptr ); }

		// Freely casts to pointer type.
		//
		operator T() const { return ptr; }
		explicit operator bool() const { return ptr != nullptr; }
	};

	// Module wrapper with easy symbol enumeration.
	//
	struct object : llvm_managed<lto_module_t, &lto_module_dispose>
	{
		std::string path;
		xstd::file::view<> file_ref = {};
		std::vector<uint8_t> raw_data;

		using llvm_managed::llvm_managed;
		object( const void* buffer, size_t length, const std::filesystem::path& path ) : path( path.string() ), raw_data( ( const uint8_t* ) buffer, ( const uint8_t* ) buffer + length )
		{
			ptr = lto_module_create_from_memory_with_path( raw_data.data(), raw_data.size(), this->path.c_str() );
			if ( !ptr ) xstd::error( "Failed loading '%s': %s\n", path, lto_get_error_message() );
		}
		object( xstd::file::view<> view ) : object( view.data(), view.size(), view.path() ) { file_ref = std::move( view ); }

		static bool is( const void* data, size_t len ) { return lto_module_is_object_file_in_memory( data, len ); }

		auto symbols() const
		{
			return
				std::views::iota( 0u, lto_module_get_num_symbols( ptr ) ) |
				std::views::transform( [ ptr = this->ptr ] ( size_t n ) { return std::pair{ lto_module_get_symbol_name( ptr, n ), lto_module_get_symbol_attribute( ptr, n ) }; } );
		}

		const char* get_directives() const { return lto_module_get_linkeropts( ptr ); }
		const char* get_triple() const { return lto_module_get_target_triple( ptr ); }
	};

	// Code generator wrapper with a helper to set options.
	//
	struct code_generator : llvm_managed<lto_code_gen_t, &lto_codegen_dispose>
	{
		code_generator() : llvm_managed( lto_codegen_create() )
		{
			lto_codegen_set_diagnostic_handler( ptr, [ ] ( lto_codegen_diagnostic_severity_t severity, const char* diag, void* ) -> void
			{
				switch ( severity )
				{
					case LTO_DS_ERROR:   xstd::log<CON_RED>( "%s\n", diag ); break;
					case LTO_DS_WARNING: xstd::log<CON_YLW>( "%s\n", diag ); break;
					case LTO_DS_REMARK:  xstd::log<CON_BRG>( "%s\n", diag ); break;
					case LTO_DS_NOTE:
					default:             xstd::log( "%s\n", diag ); break;
				}
			}, nullptr );
		}

		std::vector<uint8_t> compile() const
		{
			size_t len = 0;
			auto obj = ( const uint8_t* ) lto_codegen_compile( ptr, &len );
			return { obj, obj + len };
		}
		void preserve_symbol( const char* sym ) { lto_codegen_add_must_preserve_symbol( ptr, sym ); }
		void mark_xref( const char* sym ) { preserve_symbol( sym ); }
		bool add_object( const object& o ) { return !lto_codegen_add_module( ptr, o ); }
	};
};