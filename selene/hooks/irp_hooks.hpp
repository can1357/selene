#pragma once
#include <ntpp.hpp>
#include <xstd/async.hpp>
#include "../utility/thread.hpp"

namespace hook::irp
{
	// Inserts a hook.
	//
	using hook_t = xstd::async_task( * )( ntpp::async_irp irp, bool is_target );
	void set( uint8_t mj, uint32_t ctl_or_min, hook_t f );

	// Initializes IRP hooks.
	//
	void init();
};