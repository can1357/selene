#pragma once
#include "primitives.hpp"
#include "reference_counting.hpp"

namespace linker
{
	// Makes sure the duplicated public symbols are both valid COMDATs that and are legal 
	// to compare against each other and then picks the best option.
	// - Pick any will always pick the first symbol.
	//
	ref::strong_ptr<symbol> pick_comdat( const ref::strong_ptr<symbol>& a, const ref::strong_ptr<symbol>& b );
}