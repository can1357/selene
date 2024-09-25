#pragma once
#include <xstd/type_helpers.hpp>

namespace ntdll_info
{
	// Base address.
	//
	inline any_ptr base_address = {};

	// Address of ExpInterlockedPopEntrySListFault.
	//
	inline any_ptr interlocked_slist_pop_fault_address = {};

	// Default stubs.
	//
	inline any_ptr def_syscall_stub = {};
	inline any_ptr def_load_rcx_stub = {};

	// Initializes global NTDLL information.
	//
	void init();
};
