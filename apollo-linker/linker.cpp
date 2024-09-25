#define _CRT_SECURE_NO_WARNINGS
#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
#define NOMINMAX

#include <xstd/intrinsics.hpp>
#if GNU_COMPILER
#pragma clang diagnostic ignored "-Wbraced-scalar-init"
#endif

#include <iostream>
#include <string>
#include <vector>
#include <filesystem>
#include <llvm-c/DebugInfo.h>
#include <xstd/file.hpp>
#include <xstd/random.hpp>
#include <xstd/algorithm.hpp>
#include <xstd/formatting.hpp>
#include <xstd/serialization.hpp>
#include <xstd/bitwise.hpp>
#include <xstd/leb128.hpp>
#include <xstd/environment.hpp>
#include <xstd/text.hpp>
#include <pdblib/cvconsts.h>
#include <pdblib/cvinfo.h>
#include <pdblib/dbi.hpp>
#include <xstd/zstd.hpp>
#include <xstd/utf.hpp>
#include <nt/image.hpp>
#include <xedpp.hpp>
#include <apollo/satella.hpp>
#include <apollo/details/satella_pe.hpp>
#include "object/collection.hpp"
#include "utility/liblto.hpp"
#include "utility/argparse.hpp"
#include "utility/undname.hpp"
#include "transform/lazy_import.hpp"
#include "transform/string_conversion.hpp"
#include "transform/mixed_bool_arith.hpp"
#include "transform/attribute_discovery.hpp"
#include "transform/attribute_normalization.hpp"
#include "transform/split_basic_blocks.hpp"
#include "transform/virtualization.hpp"
#include "transform/syscall_lifter.hpp"
#include "transform/lower_xrefs.hpp"
#include "transform/logo.hpp"
#include "transform/profiler.hpp"
#include "transform/shadow_return.hpp"
#include "transform/cleanup.hpp"
#include "transform/auto_mode_switch.hpp"
#include "transform/dyn_relocs.hpp"
#include <llvm-c/ErrorHandling.h>
#include <d3dcompiler.h>
#include <Windows.h>
#pragma comment(lib, "dbghelp.lib")
#pragma comment(lib, "d3dcompiler.lib")

namespace satella
{
	// Converts the given collection into a satella image.
	//
	std::unique_ptr<image> convert( const linker::collection& col,
											  const ref::strong_ptr<linker::symbol>& entry_point,
											  const std::vector<std::string>& intrinsic_symbols )
	{
		// Allocate the image.
		//
		auto img = std::make_unique<image>();
		img->type_build = col.build_type;
		img->type_module = col.module_type;

		// Collect all sections into a single set.
		//
		std::unordered_map<ref::strong_ptr<linker::section>, std::shared_ptr<section>> sections = {};
		for ( auto& obj : col.working_set )
			for ( auto& scn : obj->sections )
				sections.emplace( scn, nullptr );

		// Map every non-empty section and their symbols.
		//
		std::unordered_map<ref::strong_ptr<linker::symbol>, std::shared_ptr<symbol>> symbol_mappings = {};
		for ( auto& [scn, nscn] : sections )
		{
			if ( scn->raw_data.empty() )
				continue;

			nscn = img->sections.emplace_back( std::make_shared<section>() );
			nscn->name = scn->name;
			nscn->raw_data = scn->raw_data;
			nscn->alignment = scn->characteristics.get_alignment();

			if ( scn->characteristics.mem_preload )
				nscn->type = section_type::mixed; // no_stub
			else if ( scn->characteristics.cnt_code )
				nscn->type = section_type::code;
			else if ( scn->characteristics.mem_write )
				nscn->type = section_type::data;
			else
				nscn->type = section_type::rdata;

			for ( auto& sym : scn->symbols )
			{
				auto& nsym = nscn->symbols.emplace( sym->value, std::make_shared<symbol>() )->second;
				symbol_mappings.emplace( sym, nsym );
				nsym->name = sym->name;
				nsym->section = nscn.get();
				nsym->section_offset = sym->value;
			}
		}

		// Map intrinsic symbols.
		//
		for ( auto& name : intrinsic_symbols )
		{
			auto& sym = img->intrinsic_symbols.emplace( name, std::make_shared<symbol>() ).first->second;
			sym->name = name;
			for ( auto& obj : col.working_set )
				for ( auto& ext : obj->external_symbols )
					if ( ext->name == name )
						symbol_mappings.emplace( ext, sym );
		}

		// Map the attributes.
		//
		for ( auto& [attribute, target_set] : col.attributes )
			for ( auto& target_name : target_set )
				for ( auto& [so, snew] : symbol_mappings )
					if ( snew && snew->name == target_name )
						img->attributes.add( snew, attribute );

		// Map the exports.
		//
		for ( auto& obj : col.working_set )
		{
			for ( auto& exp : obj->dllexported_symbols )
			{
				auto sym = col.public_symbols.find( exp );
				if ( sym == col.public_symbols.end() )
					xstd::error( "Dllexported symbol '%s' has no public definition.", exp );
				auto map = symbol_mappings.find( sym->second.lock() );
				if ( map == symbol_mappings.end() )
					xstd::error( "Dllexported symbol '%s' has no mapping.", exp );
				img->exported_symbols.emplace( exp, map->second );
			}
		}

		// Map the imports.
		//
		for ( auto& obj : col.working_set )
		{
			for ( auto& scn : obj->sections )
			{
				if ( scn->name == ".dyn" )
				{
					for ( auto& sym : scn->symbols )
					{
						if ( sym->dyn_import )
						{
							auto& nsym = img->dynamic_symbols.emplace( sym->name, std::make_shared<symbol>() ).first->second;
							nsym->name = sym->name;
							nsym->is_dynamic = true;
							symbol_mappings.emplace( sym, nsym );
						}
					}
				}
			}
		}

		// Map the relocations.
		//
		for ( auto& [scn, nscn] : sections )
		{
			if ( !nscn ) continue;

			for ( auto& reloc : scn->relocs )
			{
				if ( reloc.type == coff::rel_amd64_absolute )
					continue;

				auto& nsym = symbol_mappings[ reloc.ref_symbol ];
				if ( !nsym )
					xstd::error( "Symbol has no mapping: %s.", reloc.ref_symbol->name );

				relocation nreloc{ .symbol = nsym.get() };
				switch ( reloc.type )
				{
					case coff::rel_amd64_addr64:
						nreloc.type = relocation_type::va;
						break;
					case coff::rel_amd64_addr32nb:
						nreloc.type = relocation_type::rva;
						break;
					case coff::rel_amd64_secrel7:
						nreloc.type = relocation_type::rel8;
						break;
					case coff::rel_amd64_rel32:
					case coff::rel_amd64_rel32_1:
					case coff::rel_amd64_rel32_2:
					case coff::rel_amd64_rel32_3:
					case coff::rel_amd64_rel32_4:
					case coff::rel_amd64_rel32_5:
						nreloc.type = relocation_type::rel32;
						nreloc.type_data = reloc.type - coff::rel_amd64_rel32;
						break;
					default:
						xstd::error( "Unknown relocation type: %d [Referencing: %s]\n", reloc.type, nsym->name.c_str() );
						break;
				}

				if ( !nscn->relocations.emplace( reloc.offset, std::move( nreloc ) ).second )
					xstd::error( "Duplicate relocations at the same offset." );
			}
		}

		// Map the special symbols.
		//
		if ( entry_point )
		{
			auto& nsym = symbol_mappings[ entry_point ];
			if ( !nsym )
				xstd::error( "Entry point symbol has no mapping: %s.", entry_point->name );
			img->entry_point = nsym;
		}

		// Map the symbol and routine information, iterating sections this time allowing null ones.
		//
		for ( auto& [scn, nscn] : sections )
		{
			// For each routine entry:
			//
			for ( auto& [off, rtn] : scn->meta.routines )
			{
				// Copy basic information.
				//
				auto& fn = img->functions.emplace_back( std::make_shared<function>() );
				fn->frame_offset = rtn.frame_offset;
				fn->frame_register = rtn.frame_register;
				fn->unwind_codes = rtn.unwind_codes;
				fn->length_prolog = rtn.size_prologue;
				fassert( !rtn.chained_unwind.alive() );

				for ( auto& [off, lines] : rtn.lines )
				{
					for ( auto& line : lines )
					{
						line_info inf =
						{
							 .file_name = scn->owner->meta.file_map.at( line.file_id ).file_name,
							 .inlinee_name = line.inlinee_name,
							 .line = line.line,
							 .length = line.length,
							 .depth = line.depth
						};
						fn->lines[ off ].emplace_back( std::move( inf ) );
					}
				}

				// If the original symbol is still there, use as is.
				//
				if ( !rtn.is_split )
				{
					auto sym = xstd::find_if( scn->symbols, [ &, off = off ] ( auto& sym ) { return sym->value == off; } );
					fassert( sym );
					auto nsym = symbol_mappings[ *sym ];
					fassert( nsym );
					fn->start_point = nsym;
					if ( scn->meta.routines.size() == 1 )
						nscn->function = fn.get();
				}
				// Otherwise basic blocks must be set.
				//
				else
				{
					fassert( !rtn.basic_blocks.empty() );

					for ( auto& [off, bb] : rtn.basic_blocks )
					{
						basic_block nbb = {};
						nbb.length = bb.end_off - off;
						auto nscn = sections[ bb.scn.lock() ];
						nscn->function = fn.get();
						fassert( nscn );
						auto it = nscn->symbols.find( 0 );
						if ( it == nscn->symbols.end() )
							it = nscn->symbols.emplace( 0, std::make_shared<satella::symbol>( satella::symbol{ nscn->name, nscn.get(), 0 } ) );
						nbb.symbol = it->second.get();
						fassert( fn->basic_blocks.emplace( off, std::move( nbb ) ).second );
					}
				}

			}

			// For each symbol request entry that is alive:
			//
			for ( auto& isym : scn->meta.symbols )
			{
				if ( isym.target.alive() )
				{
					auto nsym = symbol_mappings[ isym.target.lock() ].get();
					fassert( nsym );

					imported_symbol nisym = {
						 .id = isym.id,
						 .encryption_key = isym.encryption_key,
						 .target = nsym,
						 .offset = isym.offset
					};

					switch ( isym.type )
					{
						case linker::section_metadata::symbol_request::symbol_information:
							nisym.type = imported_symbol_type::global;
							break;
						case linker::section_metadata::symbol_request::field_information:
							nisym.type = imported_symbol_type::field;
							break;
						case linker::section_metadata::symbol_request::type_information:
							nisym.type = imported_symbol_type::type;
							break;
					}
					img->imported_symbols.emplace_back( std::move( nisym ) );
				}
			}
		}

		return img;
	}

};

static std::string read_file_bom( const std::filesystem::path& path )
{
	auto res = xstd::file::read_raw( path );
	if ( res ) return xstd::utf_convert<char>( *res );
	else       return {};
}

int main( int argc, const char** argv )
{
	// Lazily load the DLLs needed.
	//
#if WINDOWS_TARGET
	auto bin_fs = xstd::getenvf( "LLVM_PATH" ) / "bin";
	LoadLibraryW( ( bin_fs / "llvm-c.dll" ).c_str() );
	LoadLibraryW( ( bin_fs / "lto.dll" ).c_str() );
#endif

	// Enable stack trace and display the logo.
	//
	LLVMEnablePrettyStackTrace();

	xstd::log( R"(
	_____                .__  .__
  /  _  \ ______   ____ |  | |  |   ____
 /  /_\  \\____ \ /  _ \|  | |  |  /  _ \
/    |    \  |_> >  <_> )  |_|  |_(  <_> )
\____|__  /   __/ \____/|____/____/\____/
		  \/|__|
=============================================
)" );

	// Begin the context.
	//
	linker::collection ctx = {};

	// Gather all arguments into one large string.
	//
	std::string arguments = {};
	for ( size_t n = 1; n != argc; n++ )
	{
		arguments += " ";
		if ( argv[ n ][ 0 ] == '@' )
			arguments += read_file_bom( argv[ n ] + 1 );
		else if ( argv[ n ][ 0 ] == '!' )
			std::filesystem::current_path( argv[ n ] + 1 );
		else
			arguments += argv[ n ];
	}
	for ( auto cc : { "LINK", "_LINK_" } )
	{
		if ( auto env = xstd::getenv( cc ); !env.empty() )
			arguments += " ", arguments += env;
	}
	if ( auto lib = xstd::getenv( "LIB" ); !lib.empty() )
		for ( auto& s : xstd::split_string<char>( lib, ';' ) )
			( ( arguments += " /libpath:\"" ) += s ) += "\"";

	// Save the arguments to the temp directory for reproduction.
	//
	auto repro = std::filesystem::temp_directory_path() / ( xstd::fmt::as_string( xstd::time::now().time_since_epoch().count() ) += ".rsp" );
	xstd::file::write_string( repro, arguments );
	xstd::log( "Reproduction arguments: !\"%s\" @\"%s\"\n", std::filesystem::current_path(), repro );

	// Parse the arguments.
	//
	auto args = linker::split_arguments( std::string_view{ arguments } );

	// Declare base LLVM options.
	//
	std::vector<const char*> llvm_arguments = {
		// Split all used data and code into sections.
		//
		{ "--data-sections" },
		{ "--function-sections" },
		{ "--relocation-model=static" },
		{ "--code-model=large" },

		// Optimization / Codegen options.
		//
		{ "--whole-program-visibility" },
		{ "--x86-align-branch-boundary=0" },
		{ "--enable-partial-inlining" },
		//{ "--tailcallopt" },
		//{ "--optimize-regalloc" },
		//{ "--cold-callsite-rel-freq=0" },
	};

	// Parse all flags.
	//
	std::filesystem::path output_path;
	std::string entry_point = "";

	bool mode_guard = true;
	bool is_component_host = false;
	bool forceinit = false;
	int obf_level = -1;
	std::string uploader_product;
	std::string uploader_group;
	std::string uploader_target;
	std::unordered_set<std::string> strip_list = {};
	for ( auto& [k, v] : args.flags )
	{
		// Skipped flags.
		//
		if ( k == "incremental" ) continue;
		else if ( k == "manifest" ) continue;
		else if ( k == "manifestuac" ) continue;
		else if ( k == "debug" ) continue;
		else if ( k == "pdb" ) continue;
		else if ( k == "dynamicbase" ) continue;
		else if ( k == "nxcompat" ) continue;
		else if ( k == "implib" ) continue;
		else if ( k == "nodefaultlib" ) continue;
		else if ( k == "subsystem" ) continue;
		else if ( k == "opt" ) continue;
		else if ( k == "dll" ) continue;

		// Replicating link.exe interface:
		//
		if ( k == "out" )
		{
			output_path = v;
		}
		else if ( k == "entry" )
		{
			entry_point = v;
		}
		else if ( k == "libpath" )
		{
			ctx.library_search_paths.emplace_back( v );
		}
		// Replicating lld-link.exe interface:
		//
		else if ( k == "mllvm" )
		{
			llvm_arguments.emplace_back( v.c_str() );
		}
		// Custom arguments:
		//
		else if ( k == "obf" )
		{
			obf_level = std::atoi( v.c_str() );
		}
		else if ( k == "strip" )
		{
			strip_list.emplace( v );
		}
		else if ( k == "type" )
		{
			for ( auto& c : v ) c = tolower( c );
			if ( v == "loader" ) ctx.module_type = satella::module_type::loader;
			else if ( v == "kernel" ) ctx.module_type = satella::module_type::kernel;
			else if ( v == "dynamic" ) ctx.module_type = satella::module_type::dynamic;
			else if ( v == "host" ) is_component_host = true, ctx.is_library = true, ctx.module_type = satella::module_type::dynamic;
			else xstd::error( "Unrecognized module type '%s'.", v );
		}
		else if ( k == "modeguard" )
		{
			mode_guard = xstd::iequals( v, "yes" );
		}
		else if ( k == "forceinit" )
		{
			forceinit = xstd::iequals( v, "yes" );
		}
		else if ( k == "build" )
		{
			for ( auto& c : v ) c = tolower( c );
			if ( v == "dev" ) ctx.build_type = satella::build_type::development;
			else if ( v == "prod" ) ctx.build_type = satella::build_type::production;
			else xstd::error( "Unrecognized build type '%s'.", v );
		}
		else if ( k == "llvmvf" )
		{
			ctx.llvm_verify = xstd::iequals( v, "yes" );
		}
		else if ( k == "llvmsv" )
		{
			ctx.llvm_save = xstd::iequals( v, "yes" );
		}
		else if ( k == "instr" )
		{
			ctx.instrument = xstd::iequals( v, "yes" );
		}
		else if ( k == "ltotmp" )
		{
			ctx.lto_save = xstd::iequals( v, "yes" );
		}
		else if ( k == "uproduct" )
		{
			uploader_product = v;
		}
		else if ( k == "utarget" )
		{
			uploader_target = v;
		}
		else if ( k == "ugroup" )
		{
			uploader_group = v;
		}
		else
		{
			xstd::warning( "Unrecognized switch '%s' => '%s'.", k, v );
		}
	}

	// Set to default obfuscation level if not set:
	//
	if ( obf_level == -1 )
	{
		if ( ctx.module_type == satella::module_type::dynamic )
			obf_level = 1;
		else
			obf_level = 2;
	}
	else
	{
		fassert( 0 <= obf_level && obf_level <= 2 );
	}

	// Append the search path for Apollo VM and CRT supplement.
	//
	if ( auto intrin_path = xstd::getenvf( "SeleneRoot", "X:\\" ); std::filesystem::exists(intrin_path) )
		ctx.library_search_paths.insert( ctx.library_search_paths.begin(), intrin_path / "resources/libs" );
	args.free_standing.emplace_back( "apollo-vm.lib" );
	args.free_standing.emplace_back( "apollo-crt.lib" );

	// Set the LTO options and initialize everything.
	//
	if ( ctx.build_type == satella::build_type::production )
	{
		llvm_arguments.insert( llvm_arguments.begin(), {
			 { "-inline-threshold=750" },         // printf = ~1k
			 { "-inlinedefault-threshold=750" },  // ntoa_format = ~500
			 { "-inlinehint-threshold=1500" },
			 { "-hot-callsite-threshold=1500" },
			 { "-locally-hot-callsite-threshold=1500" },
			 { "-inlinecold-threshold=750" },
			 { "-inline-cold-callsite-threshold=750" },
		} );
	}
	if ( std::find_if( llvm_arguments.begin(), llvm_arguments.end(), [ ] ( std::string_view s ) { return s.starts_with( "--O=" ); } ) == llvm_arguments.end() )
		llvm_arguments.push_back( "--O=3" );
	lto::set_options( llvm_arguments );

	// Make sure the required options are set.
	//
	if ( output_path.empty() )
		xstd::error( "Output path not set!" );
	if ( ctx.module_type == satella::module_type::invalid )
		xstd::error( "Module type not set!" );
	if ( ctx.build_type == satella::build_type::invalid )
		xstd::error( "Build type not set!" );

	// Pick an object identifier.
	//
	uint64_t object_id = ( xstd::make_random<uint64_t>() - xstd::time::now().time_since_epoch().count() ) ^ __rdtsc();
	if ( object_id == 0 ) object_id = xstd::make_random<uint64_t>( 1 );
	xstd::log( "Object identifier: %p\n", object_id );

	// Load all files.
	//
	std::vector<ref::strong_ptr<linker::object>> objects;


	for ( std::string_view target : xstd::unique( args.free_standing | std::views::reverse ) )
	{
		if ( target.starts_with( '"' ) )
			target = target.substr( 1, target.size() - 2 );

		// Locate the file.
		//
		auto it = std::find_if( ctx.library_search_paths.begin(), ctx.library_search_paths.end(), [ & ] ( auto& path )
		{
			return std::filesystem::exists( path / target );
		} );
		if ( it == ctx.library_search_paths.end() ) xstd::error( "File not found '%s'\n", target );

		// Load it into the collection.
		//
		std::filesystem::path path = *it / target;
		auto r = xstd::file::read_raw<uint64_t>( path, 1 );
		if ( r && r.value().front() == satella::import_library_magic )
			objects.emplace_back( linker::load_slib( path ) );
		else if ( r && r.value().front() == ar::format_magic )
			ctx.libraries.emplace_back( linker::load_library( path ) );
		else
			objects.emplace_back( linker::load_object( path ) );
	}
	for ( auto& obj : objects )
		ctx.include( std::move( obj ) );

	// Include all builtin providers and mark them as so.
	//
	for ( auto& lib : ctx.libraries )
	{
		auto fname = lib.backing_file.path().filename().string();
		if ( xstd::iequals( fname, "minicrt.lib" ) ||
			  xstd::iequals( fname, "fp.lib" ) ||
			  xstd::iequals( fname, "apollo-vm.lib" ) ||
			  xstd::iequals( fname, "apollo-crt.lib" ) )
		{
			for ( auto& obj : lib.objects )
			{
				ctx.include( obj.get() );
				obj.get()->is_builtin_provider = true;
			}
		}
	}

	// If we're building the component host, include every dependency to re-export.
	//
	if ( ctx.is_library )
	{
		for ( auto& lib : ctx.libraries )
		{
			// Skip if import library.
			//
			size_t imp_stubs = 0;
			for ( auto& [k, v] : lib.public_symbols )
				imp_stubs += k.starts_with( "__imp_" );
			if ( imp_stubs > 2 )
				continue;

			for ( auto& obj : lib.objects )
				ctx.include( obj.get() );
		}
	}

	// Referenece the entry point.
	//
	if ( !ctx.require( entry_point ) )
		xstd::error( "Entry point '%s' not found.", entry_point );

	// Transform all LTO objects.
	//
	xstd::log( "Transforming bitcode...\n" );
	auto bc_transform_time = xstd::profile( [ & ] ()
	{
		// Unpack every LTO object into an LLVM one.
		//
		for ( auto& obj : ctx.working_set )
		{
			if ( !obj->lto )
				continue;
			LLVMMemoryBufferRef module_buffer = LLVMCreateMemoryBufferWithMemoryRange( ( char* ) obj->lto.raw_data.data(), obj->lto.raw_data.size(), obj->lto.path.c_str(), false );
			fassert( !LLVMParseBitcode2( module_buffer, &obj->llvm ) );
			LLVMDisposeMemoryBuffer( module_buffer );
		}

		// Strip symbols for the specified objects.
		//
		for ( auto& obj : ctx.working_set )
		{
			if ( obj->llvm )
			{
				std::string file_name = obj->file_name.filename().string();
				if ( strip_list.contains( file_name ) )
					LLVMStripModuleDebugInfo( obj->llvm );
			}
		}

		// Cleanup.
		//
		xstd::log( "Cleaning up...\n" );
		linker::transform::cleanup( ctx );

		// Lift dynamic relocations.
		//
		xstd::log( "Lifting dynamic relocations...\n" );
		linker::transform::lift_dynrelocs( ctx );

		// Discover and normalize attributes.
		//
		xstd::log( "Discovering attributes...\n" );
		linker::transform::discover_attributes( ctx );
		linker::transform::normalize_attributes( ctx );

		// If usermode, lift syscalls.
		//
		if ( ctx.module_type == satella::module_type::loader )
		{
			xstd::log( "Lifting syscalls...\n" );
			linker::transform::lift_syscalls( ctx );
		}

		// Insert instrumentation.
		//
		if ( ctx.instrument )
		{
			xstd::log( "Inserting instrumentation...\n" );
			linker::transform::insert_instrumentation( ctx );
		}

		// Transform strings.
		//
		xstd::log( "Transforming strings...\n" );
		linker::transform::string_conversion( ctx, obf_level >= 1 );

		// Insert lazy imports.
		//
		xstd::log( "Inserting lazy imports...\n" );
		linker::transform::lazy_import( ctx );

		// Insert mode-switch stubs.
		//
		if ( mode_guard && ctx.module_type == satella::module_type::dynamic )
		{
			xstd::log( "Inserting mode-switch stubs...\n" );
			linker::transform::auto_mode_switch( ctx );
		}

		// obf2: Extreme MBA obfuscation, virtualization, all xrefs lowered.
		//
		if ( obf_level == 2 )
		{
			xstd::log( "Virtualizing targets...\n" );
			linker::transform::convert_virtual_routines( ctx );
			xstd::log( "Applying MBA obfuscation...\n" );
			linker::transform::apply_mba( ctx, true );
			xstd::log( "Lowering xrefs...\n" );
			linker::transform::lower_xrefs( ctx );
		}
		// obf1: Normal MBA obfuscation, virtualization, all xrefs lowered.
		//
		else if ( obf_level == 1 )
		{
			xstd::log( "Virtualizing targets...\n" );
			linker::transform::convert_virtual_routines( ctx );
			xstd::log( "Applying MBA obfuscation...\n" );
			linker::transform::apply_mba( ctx, false );
			xstd::log( "Lowering xrefs...\n" );
			linker::transform::lower_xrefs( ctx );
		}
		// obf0: No MBA obfuscation and no virtualization if development mode.
		//
		else if ( ctx.build_type != satella::build_type::development )
		{
			xstd::log( "Virtualizing targets...\n" );
			linker::transform::convert_virtual_routines( ctx );
		}

		// Repack them into LTO objects.
		//
		xstd::log( "Repacking LTO objects...\n" );
		int bc_obj_cntr = 0;
		for ( auto& obj : ctx.working_set )
		{
			if ( !obj->llvm )
				continue;

			// If flag to save LLVM temporaries is set, print each object file into a temporary.
			//
			if ( ctx.llvm_save )
			{
				std::filesystem::path temp = "llvm_tmp";
				std::filesystem::create_directory( temp );
				std::string path = ( temp / std::filesystem::path{ obj->lto.path }.filename() ).string() + xstd::fmt::str("%d.ll", bc_obj_cntr++);

				char* err_msg = nullptr;
				LLVMPrintModuleToFile(
					obj->llvm,
					path.c_str(),
					&err_msg
				);

				xstd::log( "Written LLVM output at %s\n", path );
				if ( err_msg ) LLVMDisposeMessage( err_msg );
			}

			LLVMMemoryBufferRef mem_buff = LLVMWriteBitcodeToMemoryBuffer( obj->llvm );
			obj->lto = lto::object{ LLVMGetBufferStart( mem_buff ), LLVMGetBufferSize( mem_buff ), obj->file_name };
			LLVMDisposeMemoryBuffer( mem_buff );
			LLVMDisposeModule( std::exchange( obj->llvm, nullptr ) );
		}
	} );
	xstd::log( "Bitcode transformation complete, took: %s\n", bc_transform_time );

	// Determine the required symbols.
	//
	std::vector<std::string> req_symbols = { entry_point, "atexit" };
	if ( ctx.instrument )
		req_symbols.push_back( "__crt_instrument_begin" ), req_symbols.push_back( "__crt_instrument_end" );

	// If library, export every public symbol.
	//
	if ( ctx.is_library )
	{
		for ( auto& obj : ctx.working_set )
		{
			constexpr std::string_view discard_list[] = {
				"xed_encode_",
				"xed_lookup_",
				"xed_enc_",
				"xed_dec_",
				"xed3_",
				"lj_",
				"srbi_",
				"srbir_",
				"_",
			};
			constexpr std::string_view exclusion_list[] = {
				"__lj_mcode_alloc",
				"__lj_mcode_free",
				"__lj_fopen_usr",
				"lj_err_unwind_win",
				"lj_state_growstack1",
				"lj_mem_newgco",
				"lj_debug_getinfo",
				"lj_debug_frame",
				"lj_str_new",
				"lj_ctype",
				"_crt",
				"__acrt",
				"_handle",
				"_errno",
				"__report",
				"_guard",
				"__security",
				"__GS",
				"_callnewh",
				"_aligned_",
				"_Throw",
				"_X",
				"_Raise",
				"_Syserror",
				"_invalid",
				"_Xtime",
				"_popen",
				"_pclose",
				"_ftell",
				"_fseek",
				"__crt",
				"__std",
				"_Query_perf",
				"_purecall",
				"_Thrd",
				"_Mtx",
				"_Smtx",
				"_beginthreadex",
				"_Cnd",
				"_Random"
			};

			if ( xstd::ifind( obj->file_name.native(), "apollo-vm" ) != std::string::npos || xstd::ifind( obj->file_name.native(), "apollo-crt" ) != std::string::npos )
				continue;
			for ( auto& scn : obj->sections )
			{
				for ( auto& sym : scn->symbols )
				{
					if ( !sym->dyn_import && sym->is_public() && sym->scn->comdat_select != coff::comdat_select_id::select_any && sym->name != entry_point )
					{
						bool should_export = true;
						for ( auto& e : discard_list )
						{
							if ( sym->name.starts_with( e ) )
							{
								should_export = false;
								for ( auto& e2 : exclusion_list )
								{
									if ( sym->name.starts_with( e2 ) )
									{
										should_export = true;
										break;
									}
								}
								break;
							}
						}
						if ( should_export )
							obj->dllexported_symbols.emplace( sym->name );
					}
				}
			}
		}
	}
	for ( auto& obj : ctx.working_set )
	{
		for ( auto& exp : obj->dllexported_symbols )
		{
			xstd::log( "Exported symbol: %s\n", exp );
			req_symbols.emplace_back( exp );
		}
	}

	// Lift the metadata sections, apply primary /OPT:REF and prevent new files from being loaded.
	//
	ctx.lift_metadata();
	ctx.opt_ref( req_symbols, false );
	ctx.loader_lock = true;

	// Generate code, lift metadata again.
	//
	ctx.code_gen( req_symbols );
	ctx.lift_metadata();

	// Re-evaluate the need for atexit and apply secondary /OPT:REF.
	//
	if ( !is_component_host )
	{
		req_symbols.erase( std::find( req_symbols.begin(), req_symbols.end(), "atexit" ) );
		for ( auto& obj : ctx.working_set )
		{
			if ( !obj->meta.pre_terminators.empty() || !obj->meta.terminators.empty() )
			{
				req_symbols.emplace_back( "atexit" );
				break;
			}
		}
	}
	ctx.opt_ref( req_symbols, true );

	// Transform native code.
	//
	xstd::log( "Transforming native code...\n" );
	auto nat_transform_time = xstd::profile( [ & ] ()
	{
		// Split basic blocks and create self-relocating sections.
		//
		xstd::log( "Splitting basic blocks...\n" );
		if ( obf_level > 1 )
			linker::transform::split_basic_blocks( ctx, 1 );

		// Finalize dynamic relocations.
		//
		xstd::log( "Finalizing dynamic relocations...\n" );
		linker::transform::finalize_dynrelocs( ctx );

		// If kernel binary, clear retptr on return.
		//
		//if ( ctx.module_type == satella::module_type::kernel )
		//{
		//	xstd::log( "Shadowing returns...\n" );
		//	linker::transform::shadow_return( ctx );
		//}

		// Make entry point discardable.
		//
		ctx.attributes.add( entry_point, "init_discardable" );

		// Emulate CRT initialization and termination, create an object, symbol and a section.
		//
		auto& ep_obj = ctx.working_set.emplace_back( ref::allocate<linker::object>() );
		ep_obj->force_includes = { "$linker_injected_entry_point$" };
		ep_obj->file_name = "$linker_injected_entry_point$";

		auto& ep_scn = ep_obj->sections.emplace_back( ref::allocate<linker::section>() );
		ep_scn->owner = ep_obj;
		ep_scn->name = ".text";
		ep_scn->characteristics.cnt_code = true;
		ep_scn->characteristics.mem_read = true;
		ep_scn->characteristics.mem_execute = true;

		auto ep_sym = ref::allocate<linker::symbol>();
		ep_sym->scn = ep_scn;
		ep_sym->name = "linker_injected_entry_point";
		ep_sym->storage_class = coff::storage_class_id::public_symbol;
		ep_sym->derived_type = coff::derived_type_id::function;
		ep_scn->symbols = { ep_sym };
		ctx.attributes.add( ep_sym->name, "init_discardable" );
		fassert( ctx.public_symbols.emplace( ep_sym->name, ep_sym ).second );

		// Create a list of <function, argument> containing initializers, atexit entries and finally the entry point.
		//
		std::vector<std::pair<ref::strong_ptr<linker::symbol>, ref::strong_ptr<linker::symbol>>> invocations;
		for ( auto list : { &linker::object_metadata::pre_initializers,
								  &linker::object_metadata::initializers } )
		{
			for ( auto& obj : ctx.working_set )
			{
				for ( auto& x : obj->meta.*list )
				{
					auto it = std::find_if( invocations.begin(), invocations.end(), [ & ] ( auto& pair ) { return pair.first == x; } );
					if ( it != invocations.end() )
						continue;

					invocations.emplace_back( x, nullptr );

					// Add the discardable attribute for every initializer.
					ctx.attributes.add( x->name, "init_discardable" );
				}
			}
		}
		for ( auto list : { &linker::object_metadata::pre_terminators,
								  &linker::object_metadata::terminators } )
		{
			for ( auto& obj : ctx.working_set )
			{
				for ( auto& x : obj->meta.*list )
				{
					auto it = std::find_if( invocations.begin(), invocations.end(), [ & ] ( auto& pair ) { return pair.second == x; } );
					if ( it != invocations.end() )
						continue;
					invocations.emplace_back( ctx.require( "atexit" ), x );
				}
			}
		}
		auto ep_fn = ctx.require( entry_point );
		invocations.emplace_back( ep_fn, nullptr );

		// If dynamic component, build the initialization array but do not invoke it.
		//
		if ( !is_component_host && !forceinit && ctx.module_type == satella::module_type::dynamic )
		{
			// Place entry point at the beginning as a jump.
			//
			ep_scn->raw_data = {
				0xE9, 0x00, 0x00, 0x00, 0x00, // jmp framework entrypoint
			};
			ep_scn->relocs.push_back( { 1, invocations.back().first, coff::rel_amd64_rel32 } );

			// Place the null-terminated invocation array as is afterwards.
			//
			invocations.back() = { nullptr, nullptr };
			for ( auto& [fn, arg] : invocations )
			{
				ep_scn->raw_data.insert( ep_scn->raw_data.end(), 16, 0 );
				if ( fn )
					ep_scn->relocs.push_back( { ( uint32_t ) ( ep_scn->raw_data.size() - 16 ), fn, coff::rel_amd64_addr64 } );
				if ( arg )
					ep_scn->relocs.push_back( { ( uint32_t ) ( ep_scn->raw_data.size() - 8 ), arg, coff::rel_amd64_addr64 } );
			}
		}
		// If debug module, make a simple array of calls.
		//
		else if ( ctx.build_type == satella::build_type::development )
		{
			ep_scn->raw_data = { 0x48, 0x83, 0xEC, 0x28 }; // sub rsp, 0x28
			for ( auto& [fn, arg] : invocations )
			{
				if ( arg ) {
					ep_scn->raw_data.insert( ep_scn->raw_data.end(), { 0x48, 0x8D, 0x0D, 0x00, 0x00, 0x00, 0x00 } ); // lea rcx, [arg]
					ep_scn->relocs.push_back( { ( uint32_t ) ( ep_scn->raw_data.size() - 4 ), arg, coff::rel_amd64_rel32 } );
				}
				if ( fn == ep_fn ) {
					ep_scn->raw_data.insert( ep_scn->raw_data.end(), { 0x48, 0x8D, 0x54, 0x24, 0x28 } ); // lea rdx, [rsp+0x28]
				}
				ep_scn->raw_data.insert( ep_scn->raw_data.end(), { 0xE8, 0x00, 0x00, 0x00, 0x00 } ); // call fn
				ep_scn->relocs.push_back( { ( uint32_t ) ( ep_scn->raw_data.size() - 4 ), fn, coff::rel_amd64_rel32 } );
			}
			ep_scn->raw_data.insert( ep_scn->raw_data.end(), { 0x48, 0x83, 0xC4, 0x28, 0xC3 } ); // add rsp, 0x28; ret
		}
		// Otherwise create the obfuscated entry point.
		//
		else
		{
			// Create the loop.
			//
			/*
				 mov ecx, <NUM ENTRIES>*2
				 // Get three registers on the frame
				 push rsi
				 push rdi
				 push rbx
				 sub rsp, 0x20
				 // Rbx should hold the beginning of the list, start the loop
				 lea rbx, [rip+list]

				 invoke_loop:
				 // Invoke the helper
				 call invoke_one
				 // Counter = (counter - 1)
				 mov ecx, esi
				 loop invoke_loop

				 // Pop the registers off and return
				 add rsp, 0x20
				 pop rbx
				 pop rdi
				 pop rsi
				 ret

				 // <Helper>
				 invoke_one:
				 // Duplicate the retptr
				 push [rsp]
				 // Rsi = counter - 1
				 lea esi, [ecx-1]
				 // Rax = list[counter]
				 movsx rax, dword ptr [rbx+rcx*4]
				 // [rsp] = (retptr + list[counter]), Rax = retptr
				 xadd [rsp], rax
				 // Rcx = list[counter - 1]
				 movsx rcx, dword ptr [rbx+rsi*4]
				 // Rcx = (retptr + list[counter - 1])
				 add rcx, rax
				 // Rdx = sp0
				 lea rdx, [rsp+0x48|58]
				 // Dispatch
				 ret

				 list:
				 // the whole list, padded by 4 bytes
			*/
			bool add_logo = ctx.module_type == satella::module_type::loader;
			ep_scn->raw_data =
			{
				 0xB9, 0xEF, 0xBE, 0xAD, 0x0E, 0x56, 0x57, 0x53, 0x48, 0x83, 0xEC, 0x20, 0x48, 0x8D, 0x1D, 0x2E,
				 0x00, 0x00, 0x00, 0xE8, 0x0C, 0x00, 0x00, 0x00, 0x89, 0xF1, 0xE2, 0xF7, 0x48, 0x83, 0xC4, 0x20,
				 0x5B, 0x5F, 0x5E, 0xC3, 0xFF, 0x34, 0x24, 0x67, 0x8D, 0x71, 0xFF, 0x48, 0x63, 0x04, 0x8B, 0x48,
				 0x0F, 0xC1, 0x04, 0x24, 0x48, 0x63, 0x0C, 0xB3, 0x48, 0x01, 0xC1, 0x48, 0x8D, 0x54, 0x24, 0x00,
				 0xC3
			};
			ep_scn->raw_data[ ep_scn->raw_data.size() - 2 ] = uint8_t( add_logo ? 0x58 : 0x48 );

			// Prefix the initialization list with ~24 nop calls and write the table length.
			//
			auto nop_sym = ref::allocate<linker::symbol>();
			nop_sym->scn = ep_scn;
			nop_sym->value = ep_scn->raw_data.size() - 1;
			nop_sym->name = "";
			nop_sym->storage_class = coff::storage_class_id::label;
			ep_scn->symbols.emplace_back( nop_sym );

			size_t nopcnt = xstd::make_random( 16, 32 );
			for ( size_t n = 0; n != nopcnt; n++ )
				invocations.insert( invocations.begin(), std::pair{ nop_sym, nullptr } );
			*( uint32_t* ) ( ep_scn->raw_data.data() + 1 ) = invocations.size() * 2;

			// Write the list.
			//
			std::reverse( invocations.begin(), invocations.end() );
			ep_scn->raw_data.resize( ep_scn->raw_data.size() + 4 ); // Pad one.
			for ( auto& [func, arg] : invocations )
			{
				for ( auto& sym : { arg, func } )
				{
					if ( sym )
					{
						int32_t p = ( int32_t ) ( ep_scn->raw_data.size() - 0x18 + 4 );
						ep_scn->raw_data.insert( ep_scn->raw_data.end(), ( uint8_t* ) &p, ( uint8_t* ) std::next( &p ) );
						ep_scn->relocs.push_back( { ( uint32_t ) ( ep_scn->raw_data.size() - 4 ), sym, coff::rel_amd64_rel32 } );
					}
					else
					{
						for ( size_t n = 0; n != 4; n++ )
							ep_scn->raw_data.emplace_back( xstd::make_random<uint8_t>() );
					}
				}
			}

			// If this is the loader, swap again with the logo symbol.
			//
			if ( add_logo )
				linker::transform::add_logo( ctx, ep_sym );
		}

		// Replace the entry point.
		//
		entry_point = ep_sym->name;
	} );
	xstd::log( "Native transformation complete, took: %s\n", nat_transform_time );

	// Handle certain attributes.
	//
	for ( auto& sym_name : ctx.attributes.move( "link_object_id" ) )
	{
		ctx.enum_symbols( [ &, name = sym_name ] ( const ref::strong_ptr<linker::symbol>& isym )
		{
			if ( isym->name == name )
			{
				if ( isym->scn->symbols.size() != 1 )
					xstd::error( "Object identifier is not in a COMDAT segment." );
				if ( isym->scn->raw_data.size() != 8 )
					xstd::error( "Object identifier has unexpected size." );
				isym->scn->raw_data.resize( 8 );
				*( uint64_t* ) isym->scn->raw_data.data() = object_id;
				isym->scn->characteristics.cnt_init_data = true;
				isym->scn->characteristics.mem_read = true;
			}
		} );
	}
	for ( auto& [sym_name, salign] : ctx.attributes.move_prefixed( "enforce_alignment" ) )
	{
		size_t align = xstd::parse_number( salign );
		ctx.enum_symbols( [ &, name = sym_name ] ( const ref::strong_ptr<linker::symbol>& isym )
		{
			if ( isym->name == name )
			{
				fassert( isym->value == 0 );
				auto& scn = isym->scn;
				scn->characteristics.set_alignment(
					std::max( std::max( align, 32ull ), scn->characteristics.get_alignment() )
				);
			}
		} );
	}
	for ( auto& sym_name : ctx.attributes.move( "no_stub" ) )
	{
		ctx.enum_symbols( [ &, name = sym_name ] ( const ref::strong_ptr<linker::symbol>& isym )
		{
			if ( isym->name == name )
				isym->scn->characteristics.mem_preload = true;
		} );
	}
	auto zstd_list = ctx.attributes.move( "zcompressed" );
	for ( auto& [sym_name, attr] : ctx.attributes.move_prefixed( "external_file:" ) )
	{
		xstd::log( "Linking file '%s'...\n", attr );

		// Try to find the file.
		//
		static const std::filesystem::path search_directories[] = {
			 xstd::getenvf( "SeleneRoot", "X:\\" ), // Project base
			 "",                                  // Current directory
		};
		xstd::io_result<std::vector<uint8_t>> file;
		for ( auto& directory : search_directories )
			if ( ( file = xstd::file::read_raw( directory / attr ) ) )
				break;
		if ( !file ) xstd::error( "Failed to read the file '%s'.", attr );

		// If symbol has the attribute 'zcompressed', compress the contents.
		//
		if ( zstd_list.contains( sym_name ) )
			*file = *xstd::zstd::compress<std::vector<uint8_t>>( *file, xstd::zstd::max_level );

		// Prefix with size.
		//
		uint64_t size = file->size();
		file->insert( file->begin(), ( uint8_t* ) &size, ( uint8_t* ) std::next( &size ) );

		// Replace with the file contents.
		//
		ctx.enum_symbols( [ &, name = sym_name ] ( const ref::strong_ptr<linker::symbol>& isym )
		{
			if ( isym->name == name )
			{
				if ( isym->scn->symbols.size() != 1 )
					xstd::error( "File linked symbol is not in a COMDAT segment." );
				if ( isym->scn->raw_data.empty() )
					xstd::error( "File linked symbol contains data." );
				isym->scn->raw_data = *file;
				isym->scn->characteristics.cnt_init_data = true;
				isym->scn->characteristics.mem_read = true;
			}
		} );
	}
	for ( auto& [sym_name, attr] : ctx.attributes.move_prefixed( "compile_shader:" ) )
	{
		auto sep = attr.find( ',' );
		if ( sep == std::string::npos )
			xstd::error( "Invalid shader target '%s'\n", attr );

		std::string entry_point{ attr.substr( 0, sep ) };
		std::string target{ attr.substr( sep + 1 ) };

		std::string source_name = util::undecorate_name( sym_name.c_str() );
		if ( source_name.empty() ) source_name = sym_name;
		xstd::log( "Compiling shader '%s@%s' for '%s'...\n", entry_point.c_str(), source_name.c_str(), target.c_str() );

		// Enumerate symbols.
		//
		ctx.enum_symbols( [ &, name = sym_name ] ( const ref::strong_ptr<linker::symbol>& isym )
		{
			if ( isym->name != name )
				return;
			if ( isym->scn->symbols.size() != 1 )
				xstd::error( "File linked symbol is not in a COMDAT segment." );

			ID3DBlob* result = nullptr;
			ID3DBlob* error = nullptr;

			HRESULT status = D3DCompile(
				isym->scn->raw_data.data(),
				isym->scn->raw_data.size(),
				source_name.c_str(),
				nullptr,             // No defines.
				nullptr,             // No includes
				entry_point.c_str(), // Fixed entry point.
				target.c_str(),
				D3DCOMPILE_OPTIMIZATION_LEVEL3,
				0,
				&result,
				&error
			);
			if ( error )   xstd::error( "Shader compiler error: %.*s\n", error->GetBufferSize(), error->GetBufferPointer() );
			if ( !result ) xstd::error( "Shader compiler error: %08x\n", status );

			ID3DBlob* stripped_result = nullptr;
			status = D3DStripShader(
				result->GetBufferPointer(),
				result->GetBufferSize(),
				D3DCOMPILER_STRIP_REFLECTION_DATA |
				D3DCOMPILER_STRIP_DEBUG_INFO |
				D3DCOMPILER_STRIP_TEST_BLOBS |
				D3DCOMPILER_STRIP_PRIVATE_DATA |
				D3DCOMPILER_STRIP_ROOT_SIGNATURE,
				&stripped_result
			);
			if ( !stripped_result ) xstd::error( "Shader stripping error: %08x\n", status );

			uint32_t shader_size = ( uint32_t ) stripped_result->GetBufferSize();
			isym->scn->raw_data.resize( shader_size + 4 );
			*(uint32_t*) isym->scn->raw_data.data() = shader_size;
			memcpy( isym->scn->raw_data.data() + 4, stripped_result->GetBufferPointer(), shader_size );
			result->Release();
			stripped_result->Release();
			isym->scn->characteristics.cnt_init_data = true;
			isym->scn->characteristics.mem_read = true;
		} );
	}

	// Resolve external symbols, if there are any left unresolved, print warnings for them and then throw an error.
	//
	std::unordered_set unresolved = ctx.resolve_all();
	std::erase_if( unresolved, [ & ] ( const std::string& entry )
	{
		// Skip if intrinsic.
		//
		if ( entry == "__ImageBase" )
			return true;

		// Search every section for any relocation referencing it.
		//
		for ( auto& obj : ctx.working_set )
		{
			for ( auto& scn : obj->sections )
			{
				for ( auto& reloc : scn->relocs )
				{
					if ( reloc.ref_symbol->is_undefined() && reloc.ref_symbol->name == entry )
					{
						linker::symbol* sym = scn->symbols.size() ? scn->symbols.front().get() : nullptr;
						for ( auto& x : scn->symbols )
						{
							if ( reloc.offset > x->value && !x->name.empty() )
							{
								if ( !sym || reloc.offset - x->value < reloc.offset - sym->value )
									sym = x.get();
							}
						}

						xstd::warning( "Undefined symbol: %s.", entry );
						xstd::warning( "Referenced by: %s:%s+%x", obj->file_name.filename(), sym ? sym->name : "", sym ? reloc.offset - sym->value : reloc.offset );
						break;
					}
				}
			}
		}
		return false;
	} );
	if ( !unresolved.empty() ) xstd::error( "Undefined symbols found: %s", unresolved );

	// Make sure every relocation referencing a dynamic symbol is of type abs64.
	//
	{
		std::unordered_map<std::string, ref::strong_ptr<linker::symbol>> proxy_map;
		std::vector<ref::strong_ptr<linker::object>> proxy_objects;

		for ( auto& obj : ctx.working_set )
		{
			for ( auto& scn : obj->sections )
			{
				for ( auto& reloc : scn->relocs )
				{
					if ( reloc.ref_symbol.alive() && reloc.ref_symbol->dyn_import )
					{
						if ( reloc.type != coff::rel_amd64_addr64 )
						{
							auto& alt = proxy_map[ reloc.ref_symbol->name ];
							if ( !alt )
							{
								xstd::warning( "Referencing %s with relocation type = %s",
													reloc.ref_symbol->name,
													xstd::name_enum( reloc.type )
								);

								auto& proxy_obj = proxy_objects.emplace_back( ref::allocate<linker::object>() );
								proxy_obj->file_name = ".proxy." + reloc.ref_symbol->name;

								auto& proxy_scn = obj->sections.emplace_back( ref::allocate<linker::section>() );
								proxy_scn->owner = proxy_obj;
								proxy_scn->name = ".textproxy";
								proxy_scn->characteristics.cnt_code = true;
								proxy_scn->characteristics.mem_read = true;
								proxy_scn->characteristics.mem_execute = true;
								proxy_scn->raw_data = {
									/*0: jmp [rip] */   0xFF, 0x25, 0x00, 0x00, 0x00, 0x00,
									/*6: dq <import> */ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
								};

								auto proxy_sym = ref::allocate<linker::symbol>();
								proxy_sym->scn = proxy_scn;
								proxy_sym->name = "__proxy_" + reloc.ref_symbol->name;
								proxy_sym->storage_class = coff::storage_class_id::public_symbol;
								proxy_sym->derived_type = coff::derived_type_id::function;

								proxy_scn->symbols = { proxy_sym };
								proxy_scn->relocs.push_back( { 6, reloc.ref_symbol, coff::rel_amd64_addr64 } );
								alt = proxy_sym;
							}
							reloc.ref_symbol = alt;
						}
					}
				}
			}
		}

		for ( auto& obj : proxy_objects )
			ctx.working_set.emplace_back( std::move( obj ) );
	}

	// Generate the satella image.
	//
	auto img = satella::convert(
		ctx,
		ctx.require( entry_point ),
		{ "__ImageBase" }
	);
	img->object_identifier = object_id;

	// Demangle symbol names.
	//
	std::unordered_map<satella::symbol*, std::string> old_names;
	for ( auto& scn : img->sections )
	{
		for ( auto& [off, sym] : scn->symbols )
		{
			if ( sym->name.starts_with( '?' ) && !sym->is_dynamic && !img->exported_symbols.contains( sym->name ) )
			{
				if ( auto out = util::undecorate_name( sym->name.c_str() ); !out.empty() )
				{
					old_names.emplace( sym.get(), std::move( sym->name ) );
					sym->name = out;
				}
			}
		}
	}

	// If final type won't be PE, hint the groups.
	//
	if ( ctx.module_type != satella::module_type::loader )
	{
		xstd::log( "Assigning group indices...\n" );
		img->hint_groups();
	}

	// Write the import library if relevant.
	//
	if ( img->exported_symbols.size() )
		satella::write_import_library( xstd::make_copy( output_path ).replace_extension( "lib" ), img->generate_slib() );

	// Write the image.
	//
	auto serialized_img = satella::serialize_image( *img );
	xstd::file::write_raw( output_path.string() + ".satella", serialized_img );

	// Revert the demangling.
	//
	for ( auto& [sym, name] : old_names )
		sym->name = std::move( name );

	// Create the PE image.
	//
	xstd::log( "Generating the sample PE file...\n" );
	auto pe_gen_time = xstd::profile( [ & ] ()
	{
		std::ofstream pefs( output_path, std::ios::binary );
		if ( !pefs.good() )
			xstd::error( "Failed writing to file '%s'\n", output_path );

		xstd::seed_rng( 0 );
		auto [pe_image, _] = *satella::pe::write_image( img.get(), satella::pe::pick_image_base( true ), true, true );
		pefs.write( ( const char* ) pe_image.data(), pe_image.size() );
	} );
	xstd::log( "PE generation complete, took: %s\n", pe_gen_time );
	return 0;
}
