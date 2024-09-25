#pragma once
#include "../object/collection.hpp"

namespace linker::transform
{
	// Lowers xrefs to absolute movs.
	//
	void lower_xrefs( collection& col );
};