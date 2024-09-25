#pragma once
#include "../object/collection.hpp"

namespace linker::transform
{
	// Appends the logo to the entry point.
	//
	void add_logo( collection& col, ref::strong_ptr<symbol>& ep );
};