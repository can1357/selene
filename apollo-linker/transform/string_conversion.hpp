#pragma once
#include "../object/collection.hpp"

namespace linker::transform
{
	// Attempts to encrypt every use of C strings and handles erasure and conversion to server strings for others.
	//
	void string_conversion( collection& col, bool hide_all );
};