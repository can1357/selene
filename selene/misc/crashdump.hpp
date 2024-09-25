#pragma once
#include <string>
#include <trace/trace_snapshot.hpp>

namespace crashdump
{
	// Traces the stack from the current function.
	//
	std::unique_ptr<trace::snapshot> trace_stack( trace::reduced_context ctx = trace::capture_context(), bool user = false );

	// Initiates a bugcheck.
	//
	void bugcheck [[noreturn]] ( const trace::snapshot* snap, int code, uint64_t arg0 = 0, uint64_t arg1 = 0, uint64_t arg2 = 0 );

	// Adds a named region.
	//
	void name_region( std::span<const uint8_t> rgn, std::string name );

	// Initializes the dump collector used when the system crashes.
	//
	inline bool is_initialized = false;
	void init();
};
