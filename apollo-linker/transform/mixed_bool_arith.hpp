#pragma once
#include "../object/collection.hpp"

namespace linker::transform
{
	// Obfuscates code by mixing boolean and arithmetic operations.
	//
	void apply_mba( collection& col, bool extreme );
};