#pragma once
#include <xstd/result.hpp>
#include <vector>
#include <span>

namespace flash
{
	// Given a range of image data and the state, creates a dump that can be used by flash.
	//
	xstd::result<std::vector<uint8_t>> dump( std::span<const uint8_t> image_data, bool mapped );
};