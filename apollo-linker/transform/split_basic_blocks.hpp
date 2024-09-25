#pragma once
#include "../object/collection.hpp"

namespace linker::transform
{
	// Splits basic blocks in every section and makes sure all internal relocations are exposed.
	//
	void split_basic_blocks( collection& col, size_t max_align );
};