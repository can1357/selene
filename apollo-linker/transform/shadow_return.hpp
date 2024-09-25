#pragma once
#include "../object/collection.hpp"

namespace linker::transform
{
	// Makes sure all return instructions clear the return pointer before returning.
	//
	void shadow_return( collection& col );
};