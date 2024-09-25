#pragma once
#include "../object/collection.hpp"

namespace linker::transform
{
	// Converts functions tagged with virtualize into virtual routines invoking into a VM interpreter.
	//
	void convert_virtual_routines( collection& col );
};