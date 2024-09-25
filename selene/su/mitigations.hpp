#pragma once
#include <xstd/intrinsics.hpp>

namespace su::mgx
{
	// Should be invoked on a PMI by the VM, returns true if it was due to an RTM trap
	// after clearing the PMI mask in the LVT.
	//
	bool reset_rtm_trap();

	// Sets the RTM trap state, returns false if it was skipped.
	//
	bool set_rtm_trap_state( bool armed );

	// Reads/writes the virtual cycle counter.
	//
	uint64_t read_vtsc();
	void write_vtsc( uint64_t value );

	// Initializes the security mitigations.
	//
	void init();
};