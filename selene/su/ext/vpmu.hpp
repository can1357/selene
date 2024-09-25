#pragma once
#include <xstd/intrinsics.hpp>
#include <ntpp.hpp>
#include <xstd/random.hpp>
#include "../trapframe.hpp"

// Configuration.
//
namespace su
{
	inline irql_t vpmu_min_irql = DISPATCH_LEVEL + 1;
	static bool is_vpmu_disabled() { return xstd::bit_test( vpmu_min_irql, 63 ); }
	static void disable_vpmu() { xstd::atomic_bit_set( vpmu_min_irql, 63 ); }
};

// Virtual performance monitoring unit is used to spoof TSCs and PMCs whilist executing guest 
// instructions to create behaviour somewhat matching the real hardware.
//
namespace su::ext
{
	struct vpmu
	{
		int64_t  offset_timestamp = 0;
		uint64_t last_read_timestamp = 0;
		uint64_t suspend_timestamp = 0;
		bool     enabled = false;

		FORCE_INLINE void attribute_cycles( int64_t n );
		FORCE_INLINE void attribute_cycles_prof( uint32_t n );
		void forgive_cycles( int64_t n ) { return attribute_cycles( -n );  }

		template<xstd::Invocable<void> F>
		FORCE_INLINE void attribute_cycles( F&& fx ) {
			attribute_cycles_prof( ia32::uprofile_tsc( std::forward<F>( fx ) ) );
		}

		// Events we need callbacks for.
		//
		void enter();
		void exit();
		void suspend();

		// Observers for guest emul.
		//
		bool handle_rdmsr( trapframe* tf );
		uint64_t read_vtsc();
		int64_t  get_tick_offset();
		int64_t  get_tsc_offset();
		uint64_t read_system_time();
		uint64_t read_interrupt_time();
	};
};