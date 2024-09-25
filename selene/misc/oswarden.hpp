#pragma once
#include <string_view>

namespace oswarden
{
	// Initializes the OS hardenings.
	//
	void init();

	// Cleans up the driver traces.
	//
	void clean_driver_traces();

	// Cleans up the process traces.
	//
	void clean_process_traces( std::wstring_view exec_path );
};