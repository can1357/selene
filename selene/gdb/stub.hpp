#pragma once
#include <xstd/spinlock.hpp>
#include <sdk/nt/eprocess_t.hpp>

namespace gdb
{
	struct target_state;

	// Global state lock.
	//
	inline xstd::spinlock global_lock = {};

	// Last seen process.
	// - NOTE: This is only here for comparison and can be dangling.
	//
	inline nt::eprocess_t* last_target = {};

	// Initializes the GDB server and the CE stubs.
	//
	void init();

	// Sends a singal.
	// - Must be called under a lock.
	//
	void send_signal( std::string msg );

	// Gets the current target.
	// - Must be called under a lock.
	//
	target_state* get_target();
};