#pragma once
#include <sdkgen/support_library.hpp>
#include <apollo/attributes.hpp>
#include <sdk/nt/ethread_t.hpp>

namespace su {
	struct vm_context;
};
namespace thread {
	struct context;
};

namespace su::r3
{
	using fn_swap_context = uint8_t( * )( nt::ethread_t*, nt::ethread_t*, uint32_t );
	
	// Invoked by the proxy with an NT trap frame to enter the VM.
	//
	MS_SSE2AVX NO_INLINE bool vmenter( nt::trapframe* tf, nt::ethread_t* thr, thread::context* ctx );

	// Invoked by the proxy to handle context swap wihthin the VM.
	//
	MS_SSE2AVX NO_INLINE uint64_t vm_swap_context(
		vm_context* vm, nt::ethread_t* current_thread, nt::ethread_t* next_thread, uint32_t wait_irql,
		fn_swap_context swap
	);
};