#pragma once
#include "../object/collection.hpp"

namespace linker::transform
{
	// Discovers custom-linker attributes via annotations and places them in a table.
	//
	void discover_attributes( collection& col );
};