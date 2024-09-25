#pragma once
#include <xstd/intrinsics.hpp>
#include <ntpp.hpp>

namespace profiler
{
	// Tracer lock, disables profiling for the scope.
	//
	struct tracer_lock
	{
		nt::device_object_t** cm;
		nt::device_object_t* pcm;
		FORCE_INLINE tracer_lock( nt::ethread_t* thrd = ke::get_ethread() ) : cm( &thrd->device_to_verify ) { pcm = std::exchange( *cm, ( nt::device_object_t* ) 1 ); }
		FORCE_INLINE ~tracer_lock() { *cm = pcm; }

		// No copy/move.
		//
		tracer_lock( tracer_lock&& ) noexcept = delete;
		tracer_lock( const tracer_lock& ) = delete;
		tracer_lock& operator=( tracer_lock&& ) noexcept = delete;
		tracer_lock& operator=( const tracer_lock& ) = delete;
		
		// Conversion to bool to check if lock was succesful or not.
		//
		FORCE_INLINE operator bool() const { return pcm != ( nt::device_object_t* ) 1; }
	};

	// Outputs the current collected data.
	//
	void dump();

	// Enables or disables the profiler.
	//
	void set_state( bool enabled );

	// Changes the cycle threhold.
	//
	void set_threshold( uint64_t rec_cycles = 0, uint64_t evt_cycles = 0 );
};