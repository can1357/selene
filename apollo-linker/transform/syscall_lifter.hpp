#pragma once
#include "../object/collection.hpp"

namespace linker::transform
{
	// Lifts calls into SDK functions to native syscalls.
	//
	void lift_syscalls( collection& col );
};