#pragma once
#include <xstd/intrinsics.hpp>
#include "../trapframe.hpp"
#include <sdkgen/support_library.hpp>

// ApiSet implements a series of instrumentation routines for certain NT functions to collect 
// better logger information for arguments and hide certain telltales of our targetted paravirtualization.
//
namespace su::ext::apiset
{
	// Should be invoked upon an exit to host ranges, returns true if the handler emulated the logic
	// thus eliminating the need to quit the VM.
	//
	bool instrument_exit( trapframe* tf );
	
	// Should be invoked upon an enter to guest ranges.
	//
	void instrument_enter( nt::trapframe* tf, vm_context* vm );
};