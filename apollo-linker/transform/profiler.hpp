#pragma once
#include "../object/collection.hpp"

namespace linker::transform
{
	// Instruments large functions around a profiler.
	//
	void insert_instrumentation( collection& col );
};