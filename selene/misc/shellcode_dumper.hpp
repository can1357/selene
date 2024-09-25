#pragma once
#include <sdkgen/nt_builtins.hpp>
#include <sdk/nt/eprocess_t.hpp>

namespace shellcode_dumper
{
	// Initializes the shellcode dumper.
	//
	void init();

	// Returns true if process is traced.
	//
	bool is_traced( nt::eprocess_t* proc );

	// Invoked on usermode NX to handle page conversion.
	//
	void on_unx_fault( nt::trapframe* tf );
};