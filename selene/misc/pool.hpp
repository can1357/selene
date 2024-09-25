#pragma once
#include <xstd/intrinsics.hpp>
#include <rpmalloc.h>
#include <ia32.hpp>

// An allocator implementation using nedmalloc with support for HIGH IRQL allocations.
// - All allocations will be zero-filled.
//
namespace pool
{
	RINLINE void* reallocate( void* p, size_t n );
	[[gnu::malloc]] RINLINE void* allocate( size_t n );
	[[gnu::malloc]] RINLINE void* allocate_aligned( size_t n, size_t a );
	RINLINE void deallocate( void* p );
};