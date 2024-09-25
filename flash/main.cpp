#include <span>
#include <xstd/intrinsics.hpp>
#include <xstd/formatting.hpp>
#include <xstd/file.hpp>
#include <xstd/environment.hpp>
#include <xstd/text.hpp>
#include <xstd/sha1.hpp>

#include <unordered_set>

#include <flash/engine.hpp>
#include <flash/hex.hpp>
#include <flash/format.hpp>
#include <flash/dumper.hpp>

#undef assert

static bool push = false;

//#include <ulua.hpp>
//extern "C" {
//	#include <lj_bcdump.h>
//}

struct script
{
	std::string           script_name;
	std::vector<uint8_t>  data;
};

static bool minify = true;
static void minify_script( script& script ) {
	/*
	static ulua::state temporary_state;
	xstd::run_once([ ] {
		temporary_state.open_libraries( ulua::lib::jit, ulua::lib::ffi );
	} );
	auto load_res = temporary_state.load( { ( char* ) script.data.data(), script.data.size() }, script.script_name.c_str() );
	load_res.assert();

	//load_res.

	if ( minify ) {
		std::vector<uint8_t> out = {};
		auto tv = ulua::accel::ref( load_res.L, load_res.slot() );
		lj_bcwrite( load_res.L, funcproto( funcV( tv ) ), [ ] ( lua_State* L, const void* data, size_t n, void* ud ) {
			auto& out = *( std::vector<uint8_t>* ) ud;
			out.insert( out.end(), ( const uint8_t* ) data, ( const uint8_t* ) data + n );
			return 0;
		}, &out, 1 );
		//script.data = load_res.dump_bytecode();
		script.data = std::move( out );
	}*/

	// Read as UTF8.
	//
	std::string string = xstd::utf_convert<char>( script.data );

	// Remove all instances of \r, convert \t into space.
	//
	size_t n = std::erase_if( string, [ ] ( char c ) { return c == '\r'; } );
	std::replace_if( string.begin(), string.end(), [ ] ( char c ) { return c == '\t'; }, ' ' );

	// Remove comments.
	//
	auto remove_range = [ & ] ( std::string_view a, std::string_view b ) {
		size_t offset = 0;
		while ( true ) {
			auto p = string.find( a, offset );
			if ( p == std::string::npos ) break;
			offset = p;
			auto p2 = string.find( b, p + a.size() );
			if ( p2 == std::string::npos ) break;
			p2 += b.size();

			size_t new_lines = std::count( string.begin() + p,
										   string.begin() + p2, '\n' );
			memset( &string[ p ], '\n', new_lines );
			p +=      new_lines;
			offset += new_lines;

			string.erase( p, p2 - p );
			n += p2 - p;
		}
	};
	remove_range( "--[[", "]]" );
	remove_range( "--", "\n" );
	if ( push ) {
		remove_range( "if DEV then", "end--DEV" );
	}

	// Assign again.
	//
	script.data.assign( ( uint8_t* ) string.data(), ( uint8_t* ) string.data() + string.size() );
	//printf( "Removed %llu bytes\n", n );
}

static std::vector<script> read_package( std::filesystem::path path, std::string_view package_name, xstd::hash_t* hash = nullptr )
{
	std::vector<script> result = {};
	auto handle_file = [&]( std::string file_name, std::filesystem::path file ) {
		if ( auto data = xstd::file::read_raw( file ) ) {
			if ( hash ) hash->add_bytes( data->data(), data->size() );

			// Remove extension.
			file_name.erase( file_name.end() - 4, file_name.end() );
			// Force lower case.
			file_name = xstd::to_lower( file_name );
			// Replace slashes with dots.
			std::replace( file_name.begin(), file_name.end(), '/', '.' );
			std::replace( file_name.begin(), file_name.end(), '\\', '.' );
			// Prefix with package name.
			if ( !package_name.empty() ) {
				file_name.insert( file_name.begin(), '.' );
				file_name.insert_range( file_name.begin(), package_name );
			}

			// Minify the script.
			auto& scr = result.emplace_back( std::move( file_name ), std::move( data ).value() );
			minify_script( scr );

			// Add the special header.
			if ( package_name != "core" ) {
				auto hdr = "--F:" + scr.script_name + "\n";
				scr.data.insert( scr.data.begin(), hdr.begin(), hdr.end() );
			}
		}
	};

	if ( std::filesystem::is_directory( path / "dist" ) ) {
		for ( auto file : std::filesystem::recursive_directory_iterator{ path / "dist" } ) {
			if ( !file.is_regular_file() )
				continue;
			auto file_name = std::filesystem::relative( file.path(), path / "dist" ).string();
			if ( file_name.ends_with( ".lua" ) ) {
				handle_file( std::move( file_name ), file.path() );
			}
		}
	}

	if ( std::filesystem::is_directory( path ) ) {
		for ( auto file : std::filesystem::directory_iterator{ path } ) {
			if ( !file.is_regular_file() )
				continue;
			if ( std::string file_name = file.path().filename().string(); file_name.ends_with( ".lua" ) ) {
				handle_file( std::move( file_name ), file.path() );
			}
		}
	}
	return result;
}
static std::vector<script> read_common_package( xstd::hash_t* hash = nullptr )
{
	return read_package( xstd::getenvf( "ApolloMDir" ) / L"../../Flash", "core", hash );
}

std::optional<flash::image> cached_image;
std::vector<uint8_t>        image_copy;
std::string                 image_hash;
bool local_servers = false;

static void exec_on_modify( std::string_view game_name, std::string input_path, std::span<const uint8_t> image, xstd::hash_t& prev_hash, bool no_pkg, bool push )
{
	xstd::hash_t new_hash = {};
	std::vector<script> script_list = {};
	std::filesystem::path proj_directory = xstd::getenvf( "ApolloMDir" ) / L"../../Projects" / proj_name;
	std::filesystem::path engine_directory = proj_directory / L"flash";

	// Find the product ID from vcxproj.
	//
	std::string product_id;
	if ( push )
	{
		for ( auto file : std::filesystem::directory_iterator{ proj_directory } )
		{
			if ( !file.is_regular_file() )
				continue;
			if ( std::string file_name = file.path().filename().string(); file_name.ends_with( ".vcxproj" ) )
			{
				auto data = xstd::file::read_string( file );
				if ( data )
				{
					auto pos = data->find( "<ApolloProductId>" );
					if ( pos != std::string::npos )
					{
						for ( char c : std::string_view{ data->begin() + pos + xstd::strlen( "<ApolloProductId>" ), data->end() } )
						{
							if ( c == ' ' ) continue;
							if ( c == '<' ) break;
							product_id += c;
						}
						break;
					}
				}
			}
		}
		if ( product_id.empty() ) {
			xstd::log<CON_RED>( "[ERR] Push specified but vcxproj does not contain a valid product-id.\n" );
		}
	}

	// Import the default common package.
	//
	{
		// If there is no package.json, in engine_directory, do not import ts.lua
		auto pkg = read_common_package( &new_hash );
		script_list.insert( script_list.end(), std::make_move_iterator( pkg.begin() ), std::make_move_iterator( pkg.end() ) );
	}
	// Import the engine package.
	//
	{
		auto pkg = read_package( engine_directory, "", &new_hash );
		script_list.insert( script_list.end(), std::make_move_iterator( pkg.begin() ), std::make_move_iterator( pkg.end() ) );
	}

	// If hash did not change, return.
	//
	if ( prev_hash == new_hash )
		return;
	system( "cls" );
	prev_hash = new_hash;

	// Create the engine.
	//
	flash::engine engine{ true };

	// Write the package.
	//
	std::vector<uint8_t> package_data = {};
	for ( auto& script : script_list ) {
		// Skip empty files.
		//
		if ( script.data.empty() )
			continue;
		auto& bc = script.data;

		// Write the header.
		//
		uint32_t bc_len = (uint32_t) bc.size();
		fassert( bc_len != 0 );
		package_data.insert( package_data.end(), (const uint8_t*) &bc_len, (const uint8_t*) std::next( &bc_len ) );
		package_data.insert( package_data.end(), (const uint8_t*) bc.data(), (const uint8_t*) ( bc.data() + bc_len ) );
	}
	package_data.insert( package_data.end(), sizeof( uint32_t ), 0 );
	if ( !no_pkg )
		xstd::file::write_raw( engine_directory / "module.fpkg", package_data ).assert();

	// Load all previously read scripts.
	//
	engine.load_package( ( flash::package* ) package_data.data() );

	// Run the engine if we have an image.
	//
	bool definitions_only = image.empty();
	auto& res = engine.res;
	if ( !definitions_only && res.success() )
	{
		auto t0 = xstd::time::now();
		bool initial_run = false;
		if ( image_copy.empty() )
		{
			image_copy.assign( image.begin(), image.end() );

			xstd::sha1 hash{};
			hash.add_bytes( image.data(), std::min( image.size(), 0x400ull ) );
			image_hash = xstd::fmt::as_hex_string( hash.digest() );

			engine.set_target( image_copy );
			engine.run();
			cached_image = engine.target;
			initial_run = true;
		}
		else
		{
			engine.target = *cached_image;
			engine.run();
		}
		auto t1 = xstd::time::now();

		// Sort entries by type and name.
		//
		res.entries.sort( [ ] ( auto& a, auto& b )
		{
			bool ha = !a.name.starts_with( "_" );
			bool hb = !b.name.starts_with( "_" );
			return std::tie( ha, a.type, a.name ) < std::tie( hb, b.type, b.name );
		} );

		// Write deobfuscated binary.
		//
		if ( input_path.ends_with( ".deobf.exe" ) )
			input_path.erase( input_path.end() - ( sizeof( ".deobf.exe" ) - 1 ), input_path.end() );
		else if ( input_path.ends_with( ".exe" ) )
			input_path.erase( input_path.end() - ( sizeof( ".exe" ) - 1 ), input_path.end() );
		if ( initial_run )
			xstd::file::write_raw( input_path + ".deobf.exe", engine.target.data ).assert();

		// If successful:
		//
		if ( res.success() )
		{
			xstd::log<CON_BRG>( "[OK]  Running the package took %s, updated static offset file.\n", t1 - t0 );

			// Update the offsets.fl.
			//
			xstd::file::write_raw( engine_directory / "offsets.fl", res.serialize() ).assert();
		}
		else
		{
			xstd::log<CON_RED>( "[ERR] Failed running the package!\n" );
		}

		// Write a JSON of labels for debugging.
		//
		{
			// Merge from exports.
			//
			for ( auto& e : res.entries ) {
				if ( e.state == flash::results::complete ) {
					if ( e.type == flash::results::func || e.type == flash::results::data ) {
						engine.res.labels.emplace( e.value_imm, e.name );
					}
				}
			}

			// Merge from auto labels.
			//
			for ( auto& [ip, labels] : engine.res.auto_labels ) {
				if ( engine.res.labels.contains( ip ) ) {
					continue;
				}
				std::sort( labels.begin(), labels.end() );
				labels.erase( std::unique( labels.begin(), labels.end() ), labels.end() );
				if ( labels.size() == 1 ) {
					engine.res.labels.emplace( ip, std::move( labels[ 0 ] ) );
				}
			}

			std::unordered_set<std::string> name_set;
			std::string result = "{ ";
			for ( auto& [ip, label] : engine.res.labels ) {
				while ( !name_set.emplace( label ).second )
					label += "_";
				result += '"';
				result += label;
				result += "\":";
				result += std::to_string( ip );
				result += ',';
			}
			result.back() = '}';
			xstd::file::write_string( input_path + ".json", result ).assert();
		}

		// Display the results.
		//
		xstd::log<CON_PRP>( "\n================================ Results ================================\n" );
		for ( auto& e : res.entries )
		{
			xstd::log<CON_BRG>( " %-24s => ", e.name );
			if ( e.state == flash::results::failed )
			{
				xstd::log<CON_RED>( "ERROR\n" );
				continue;
			}
			else if ( e.state != flash::results::complete )
			{
				xstd::log<CON_YLW>( "SKIPPED\n" );
				continue;
			}
			else
			{
				if ( e.type == flash::results::none || e.name.starts_with( "_" ) )
				{
					xstd::log<CON_GRN>( "OK\n" );
				}
				else if ( e.type == flash::results::code )
				{
					xstd::log<CON_GRN>( "OK (%llu bytes)\n", e.value_raw.size() );
					//xstd::log( "\n" );
					//for ( auto& ins : xed::decode64_n( e.value_raw ) )
					//	xstd::log<CON_GRN>( "- %s\n", ins.to_string() );
				}
				else if ( e.type == flash::results::arr )
				{
					auto first = e.value_raw.data();
					size_t count = e.value_raw.size() / sizeof( int64_t );
					xstd::log<CON_GRN>( "%s\n", std::span<int64_t>( ( int64_t* ) first, count ) );
				}
				else if ( e.type == flash::results::imm )
				{
					xstd::log<CON_GRN>( "%s\n", xstd::fmt::hex( e.value_imm ) );
				}
				else
				{
					xstd::log<CON_GRN>( "%p\n", engine.target.base_address + e.value_imm );
				}
			}
		}
	}
	// If parsing did not fail:
	//
	if ( res.success() )
	{
		// Write the auto generated header.
		//
		{
			constexpr const char* fmt = R"(#pragma once
#include <ufw/flash_runtime.hpp>

namespace offsets {
	static constexpr uintptr_t analysis_base = 0x%llx;
	template<typename T>
	static T* ref( uintptr_t va ) {
		va = va - analysis_base + ufw::get_image_base();
		return ( T* ) va;
	}
)";

			std::string header_generated = xstd::fmt::str( fmt, engine.target.base_address );
			for ( auto& e : res.entries )
			{
				// Skip hidden offsets.
				//
				if ( e.name.starts_with( "_" ) )
					continue;

				switch ( e.type )
				{
					case flash::results::imm:
						if ( e.state == flash::results::complete )
							header_generated += xstd::fmt::str( "\t// %llx\n", e.value_imm );
						header_generated += xstd::fmt::str( "\tFLASH_IMM( %s );\n", e.name );
						break;
					case flash::results::arr:
						header_generated += xstd::fmt::str( "\tFLASH_RAW( %s );\n", e.name );
						break;
					case flash::results::data:
					case flash::results::func:
						if ( e.state == flash::results::complete )
							header_generated += xstd::fmt::str( "\t// 0x%llx (+0x%x)\n", e.value_imm + engine.target.base_address, e.value_imm );
						if ( e.type_details.empty() )
							header_generated += xstd::fmt::str( "\tFLASH_PTR( %s, char );\n", e.name );
						else
							header_generated += xstd::fmt::str( "\tFLASH_PTR( %s, %s );\n", e.name, e.type_details );
						break;
					case flash::results::code:
						for ( auto& ins : xed::decode64_n( e.value_raw ) ) {
							header_generated += xstd::fmt::str( "// %s\n", ins.to_string() );
						}
						header_generated += xstd::fmt::str( "\tFLASH_FUN( %s, %s );\n", e.name, e.type_details );
						break;
					default:
						break;
				}
			}
			header_generated += "};\n";
			xstd::file::write_string( engine_directory / L"offsets.hpp", header_generated ).assert();
		}

		// Write the package.
		//
		xstd::log<CON_BRG>( "[OK]  Package loaded, updated module and header definitions.\n" );
	}
	else
	{
		xstd::log<CON_RED>( "[ERR] Failed loading the package.\n" );
	}

	// Print the log.
	//
	xstd::log<CON_PRP>( "\n================================  Logs   ================================\n" );
	xstd::log<CON_CYN>( "Input: %s (%s)\n", input_path, image_hash );
	if ( !res.log.empty() )       xstd::log<CON_DEF>( res.log.c_str() );
	if ( !res.error_log.empty() ) xstd::log<CON_RED>( res.error_log.c_str() );
}


int main( int argc, const char** argv )
{
	std::span args{ argv, size_t( argc >= 0 ? argc : 0 ) };

	// Remove path.
	//
	if ( !args.empty() ) args = args.subspan( 1 );

	// Remove the flags.
	//
	bool continious = false;
	bool dry = false;
	while ( !args.empty() )
	{
		if ( !memcmp( args.front(), "-C", 2 ) )
			continious = true;
		else if ( !memcmp( args.front(), "-D", 2 ) )
			dry = true;
		else if ( !memcmp( args.front(), "-P", 2 ) )
			push = true;
		else if ( !memcmp( args.front(), "-L", 2 ) )
			local_servers = true;
		else if ( !memcmp( args.front(), "-S", 2 ) )
			minify = false;
		else
			break;
		args = args.subspan( 1 );
	}

	// Validate the rest of the arguments.
	//
	if ( args.empty() )
	{
		xstd::log( "Usage:" );
		xstd::log( " flash (-D? -C? -P?) <ProjectName> <?DumpPath>\n" );
		xstd::log( " -> flash MyProj mydump.exe\n" );
		xstd::log( " -> flash -D -P MyProj mydump.exe\n" );
		xstd::log( " -> flash -C MyProj mydump.exe\n" );
		return 0;
	}

	// Read game name.
	//
	std::string_view proj = args[ 0 ];

	// Read dump.
	//
	std::vector<uint8_t> dump;
	std::string path;
	if ( args.size() > 1 )
	{
		path = args[ 1 ];
		auto file = xstd::file::read_raw( path );
		if ( !file )
		{
			xstd::log<CON_RED>( "Failed to open file '%s': %s\n", path.c_str(), file.to_string());
			return 1;
		}

		auto res = flash::dump( *file, false );
		if ( !res )
		{
			xstd::log<CON_RED>( "Failed to dump image: %s\n", res.status.c_str() );
			return 1;
		}
		dump = std::move( res ).value();
	}

	// Enter the loop.
	//
	xstd::hash_t hash = {};
	while ( true )
	{
		exec_on_modify( proj, path, dump, hash, dry, push );
		if ( !continious )
			return 0;
		std::this_thread::sleep_for( 300ms );
	}
}

#include <Windows.h>
extern "C"
{
	static auto exec_heap = HeapCreate( HEAP_CREATE_ENABLE_EXECUTE, 0, 0 );
	void* __lj_mcode_alloc( size_t sz ) { return HeapAlloc( exec_heap, 0, sz ); }
	void __lj_mcode_free( void* p, size_t ) { HeapFree( exec_heap, 0, p ); }
	FILE* __lj_fopen_usr( void* _L, const char* f, const char* m ) { return nullptr; }
	void lj_err_unwind_win() {}
}
