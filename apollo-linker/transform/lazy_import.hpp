#pragma once
#include "../object/collection.hpp"

namespace linker::transform
{
	// Converts invocations of DLL imported calls into lazy import stubs.
	//
	void lazy_import( collection& col );
};