#include <flash/dumper.hpp>
#include <nt/image.hpp>

namespace flash
{
	// Given a range of image data and the state, creates a dump that can be used by flash.
	//
	xstd::result<std::vector<uint8_t>> dump( std::span<const uint8_t> image_data, bool mapped )
	{
		auto* img = ( const win::image_x64_t* ) image_data.data();
		any_ptr img_limit = image_data.data() + image_data.size();

		// Validate boundaries of the NT header.
		//
		auto* nt_hdrs = img->get_nt_headers();
		if ( std::next( nt_hdrs ) > img_limit )
			return xstd::exception{ XSTD_ESTR( "Failed to read header." ) };
		
		// Validate the signatures.
		//
		if ( img->dos_header.e_magic != win::DOS_HDR_MAGIC ||
			  nt_hdrs->signature != win::NT_HDR_MAGIC ||
			  nt_hdrs->optional_header.magic != win::OPT_HDR64_MAGIC )
			return xstd::exception{ XSTD_ESTR( "Invalid magic." ) };

		// Validate boundaries of all headers.
		//
		size_t hdr_size = nt_hdrs->optional_header.size_headers;
		if ( &image_data[ hdr_size ] > img_limit )
			return xstd::exception{ XSTD_ESTR( "Failed to read headers." ) };

		// Validate image size.
		//
		size_t img_size = nt_hdrs->optional_header.size_image;
		if ( img_size > 1_gb )
			return xstd::exception{ XSTD_ESTR( "Image too big." ) };
		else if ( img_size < hdr_size )
			return xstd::exception{ XSTD_ESTR( "Invalid image." ) };

		// Allocate the space.
		//
		std::vector<uint8_t> space( img_size );

		// Copy the headers as is.
		//
		win::image_x64_t* img_new = ( win::image_x64_t* ) space.data();
		memcpy( img_new, img, hdr_size );

		// For each section header:
		//
		for ( win::section_header_t& scn : img_new->get_nt_headers()->sections() )
		{
			if ( size_t( xstd::distance( space.data(), std::next( &scn ) ) ) > hdr_size )
				return xstd::exception{ XSTD_ESTR( "Out of hdr boundaries." ) };

			size_t copy_size = mapped ? scn.virtual_size : std::min( scn.size_raw_data, scn.virtual_size );
			auto src = image_data.data() + ( mapped ? scn.virtual_address : scn.ptr_raw_data );

			if ( ( src + copy_size ) > img_limit )
				return xstd::exception{ XSTD_ESTR( "Out of src boundaries." ) };
			if ( ( scn.virtual_address + copy_size ) > img_size )
				return xstd::exception{ XSTD_ESTR( "Out of dst boundaries." ) };

			// Copy the data.
			//
			memcpy( space.data() + scn.virtual_address, src, copy_size );

			// Fix the header.
			//
			scn.size_raw_data = xstd::align_up( copy_size, 0x400 );
			scn.ptr_raw_data =  scn.virtual_address;
		}

		// Strip security, debug and reloc directories, validate everything else.
		//
		auto& dirs = img_new->get_nt_headers()->optional_header.data_directories;
		dirs.security_directory = {};
		dirs.debug_directory = {};
		dirs.basereloc_directory = {};
		for ( auto& dir : dirs.entries )
		{
			if ( dir.present() )
			{
				if ( ( dir.rva + dir.size ) > img_size )
					dir = {};
			}
		}

		// Fix TLS.
		//
		if ( auto& dir = dirs.tls_directory; dir.present() )
		{
			if ( ( dir.rva + sizeof( win::tls_directory_x64_t ) ) > img_size )
				return xstd::exception{ XSTD_ESTR( "Out of dir boundaries." ) };
			
			win::tls_directory_x64_t* tls = xstd::ptr_at( space.data(), dir.rva );
			for ( const auto& scn : nt_hdrs->sections() )
			{
				if ( scn.ptr_raw_data <= tls->address_raw_data_start && tls->address_raw_data_start < ( scn.ptr_raw_data + scn.size_raw_data ) )
				{
					tls->address_raw_data_start += ( scn.virtual_address - scn.ptr_raw_data );
					tls->address_raw_data_end   += ( scn.virtual_address - scn.ptr_raw_data );
					break;
				}
			}
		}
		return { std::move( space ) };
	}
};