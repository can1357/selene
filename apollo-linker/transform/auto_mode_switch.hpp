#pragma once
#include "../object/collection.hpp"

namespace linker::transform
{
	// Automatically inserts checks for mode-switch in indirect branches.
	//
	void auto_mode_switch( collection& col );
};