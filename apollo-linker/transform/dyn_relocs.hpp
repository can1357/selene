#pragma once
#include "../object/collection.hpp"

namespace linker::transform
{
	// Handles invocations of builtins for fetching and resolving of dynamic relocations.
	//
	void lift_dynrelocs( collection& col );

	// Handles linkage against dynamic relocations after codegen is complete.
	//
	void finalize_dynrelocs( collection& col );
};