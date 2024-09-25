#pragma once
#include "../object/collection.hpp"

namespace linker::transform
{
	// Gets active feature set for the collection.
	//
	std::string_view get_feature_set( collection& col );

	// Sets the default attributes we use for every function.
	//
	void set_default_attributes( collection& col, LLVMValueRef fn );

	// Normalizes LLVM attributes for every function.
	//
	void normalize_attributes( collection& col );
};