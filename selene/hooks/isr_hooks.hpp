#pragma once

namespace hook::isr
{
	inline bool cstate_disable = true;

	// Initializes ISR hooks on ntoskrnl.
	//
	void init();
};