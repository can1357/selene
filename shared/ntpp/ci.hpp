#pragma once
#include <vector>
#include <numeric>
#include <xstd/sha1.hpp>
#include <xstd/function_view.hpp>
#include <nt/image.hpp>

// Implements a code integrity helper that can be used for the verification of PE files.
//
namespace ntpp::ci
{
	using hash_t = xstd::sha1;

	// Enumerates relocations in the given image, user callback is invoked with [Rva, Length].
	//
	RINLINE void enum_relocs( const win::image_x64_t* img, xstd::function_view<void( uint32_t, size_t )> fn, bool mapped = false );

	// Generates a 160-bit value identifying the code sections uniquely and relocatably using SHA1.
	// - Additionally another input can be given in case relocs are not mapped together with the image.
	//
	RINLINE hash_t generate_hash( const win::image_x64_t* img, bool mapped = false, const win::image_x64_t* img_disk = nullptr );

	// Compare a currently running image against one one disk.
	//
	RINLINE bool compare( const win::image_x64_t* img, const win::image_x64_t* img_disk );
};