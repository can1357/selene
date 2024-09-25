#pragma once
#include <nt/image.hpp>
#include <xstd/hashable.hpp>
#include <xstd/text.hpp>
#include <variant>

namespace ntpp::import
{
	// This type implies that export is forwarded to another module.
	//
	struct forwarded_export
	{
		xstd::xcrc target_module_name; // ihash
		xstd::xcrc target_export_name; // xhash
	};

	// This type implies that search completed successfully.
	//
	struct static_export
	{
		uint32_t rva;
	};
	
	// Query typedefs.
	//
	using query_result_t =   std::variant<std::monostate, static_export, forwarded_export>;

	// Searches for the given export within the in-memory or raw image.
	//
	template<bool IsMapped>
	FLATTEN inline query_result_t query_by_name( win::image_x64_t* image, xstd::xcrc hash )
	{
		// Declare method of RVA resolving.
		//
		const auto resolve_rva = [ & ] ( uint32_t rva ) -> void*
		{
			if ( !rva )
				return nullptr;
			if constexpr ( IsMapped )
				return ( ( char* ) image ) + rva;
			else
				return image->rva_to_ptr( rva );
		};

		// Fail if image does not have an export directory.
		//
		win::data_directory_t* exp_dir_entry = image->get_directory( win::directory_entry_export );
		if ( !exp_dir_entry )
			return std::monostate{};

		// Fail if export directory is empty.
		//
		win::export_directory_t* exp_dir = ( win::export_directory_t* )resolve_rva( exp_dir_entry->rva );
		if ( !exp_dir )
			return std::monostate{};

		// Fetch the data tables.
		//
		uint32_t* names = ( uint32_t* ) resolve_rva( exp_dir->rva_names );
		uint32_t* rvas =  ( uint32_t* ) resolve_rva( exp_dir->rva_functions );
		uint16_t* ordinals = ( uint16_t* ) resolve_rva( exp_dir->rva_name_ordinals );
		if ( !names || !ordinals || !rvas ) 
			return std::monostate{};

		// For each name:
		//
		for ( size_t n = 0; n != exp_dir->num_names; n++ )
		{
			// If entry RVA does not translate [strengthened] or if the case-insensitive hash does not match, skip.
			//
			const char* exp_cname = ( const char* ) resolve_rva( names[ n ] );
			if ( !exp_cname || hash != xstd::make_xhash<xstd::xcrc>( exp_cname ) )
				continue;

			// If out of boundary [strengthened] for export table, skip.
			//
			uint16_t ordinal = ordinals[ n ];
			if ( ordinal >= exp_dir->num_functions )
				continue;

			// Return as is if not redirected:
			//
			uint32_t export_rva = rvas[ ordinals[ n ] ];
			if ( exp_dir_entry->rva > export_rva || export_rva >= ( exp_dir_entry->rva + exp_dir_entry->size ) )
				return static_export{ export_rva };

			// Parse the string in format "KERNELBASE.LoadLibraryA":
			//
			char* target_name = ( char* ) resolve_rva( export_rva );
			if ( !target_name )
				return std::monostate{};

			// Find the dot.
			//
			const char* dot_p = strchr( target_name, '.' );
			if ( !dot_p )
				return std::monostate{};

			forwarded_export fwd = {};

			// Hash the partition up to the dot as wchar_t case-insensitive, it's the module name, afterwards append ".dll".
			//
			xstd::xcrc h = xstd::make_ihash<xstd::xcrc>( std::string_view{ target_name, (size_t)( dot_p - target_name ) } );
			h.template add_bytes<char>( '.' );
			h.template add_bytes<char>( 'd' );
			h.template add_bytes<char>( 'l' );
			h.template add_bytes<char>( 'l' );
			fwd.target_module_name = h;

			// Hash the partition after that as char case-insensitive which is the import name, return the result.
			//
			fwd.target_export_name = xstd::make_xhash<xstd::xcrc>( dot_p + 1 );
			return fwd;
		}
		return std::monostate{};
	}
	template<bool IsMapped>
	FLATTEN inline query_result_t query_by_ordinal( win::image_x64_t* image, uint16_t ordinal )
	{
		// Declare method of RVA resolving.
		//
		const auto resolve_rva = [ & ] ( uint32_t rva ) -> void*
		{
			if ( !rva )      
				return nullptr;
			if constexpr ( IsMapped ) 
				return ( ( char* ) image ) + rva;
			else             
				return image->rva_to_ptr( rva );
		};

		// Fail if image does not have an export directory.
		//
		win::data_directory_t* exp_dir_entry = image->get_directory( win::directory_entry_export );
		if ( !exp_dir_entry )
			return std::monostate{};

		// Fail if export directory is empty.
		//
		win::export_directory_t* exp_dir = ( win::export_directory_t* )resolve_rva( exp_dir_entry->rva );
		if ( !exp_dir )
			return std::monostate{};

		// Fetch the data tables.
		//
		uint32_t* rvas =  ( uint32_t* ) resolve_rva( exp_dir->rva_functions );
		uint16_t* ordinals = ( uint16_t* ) resolve_rva( exp_dir->rva_name_ordinals );
		if ( !rvas || !ordinals ) 
			return std::monostate{};

		// If the ordinal exists, fetch the RVA and continue.
		//
		uint32_t export_rva = 0;
		uint16_t adjusted_ordinal = ordinal - exp_dir->base;
		if ( adjusted_ordinal < exp_dir->num_functions && rvas )
			export_rva = rvas[ adjusted_ordinal ];
		else
			return std::monostate{};

		// Return as is if not redirected:
		//
		if ( exp_dir_entry->rva > export_rva || export_rva >= ( exp_dir_entry->rva + exp_dir_entry->size ) )
			return static_export{ export_rva };

		// Parse the string in format "KERNELBASE.LoadLibraryA":
		//
		char* target_name = ( char* ) resolve_rva( export_rva );
		if ( !target_name )
			return std::monostate{};

		// Find the dot.
		//
		const char* dot_p = strchr( target_name, '.' );
		if ( !dot_p )
			return std::monostate{};

		forwarded_export fwd = {};

		// Hash the partition up to the dot as wchar_t case-insensitive, it's the module name, afterwards append ".dll".
		//
		xstd::xcrc h = xstd::make_ihash<xstd::xcrc>( std::string_view{ target_name, (size_t)( dot_p - target_name ) } );
		h.template add_bytes<char>( '.' );
		h.template add_bytes<char>( 'd' );
		h.template add_bytes<char>( 'l' );
		h.template add_bytes<char>( 'l' );
		fwd.target_module_name = h;

		// Hash the partition after that as char case-insensitive which is the import name, return the result.
		//
		fwd.target_export_name = xstd::make_xhash<xstd::xcrc>( dot_p + 1 );
		return fwd;
	}
};