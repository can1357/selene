#include "vpmu.hpp"
#include "../mitigations.hpp"

namespace crt {
	FORCE_INLINE uint64_t tsc_to_ns( uint64_t tsc );
};

namespace su::ext
{
	static const uint32_t profiling_bias = [ ] {
		ia32::disable();
		uint32_t x = ia32::uprofile_tsc( [ ] {} );
		ia32::enable();
		return x;
	}( );

	FORCE_INLINE void vpmu::attribute_cycles( int64_t n ) {
		if ( !enabled ) return;

		uint64_t local_seed = offset_timestamp + last_read_timestamp;
		float dev = xstd::uniform_real<float>( xstd::lce_64( local_seed ) ) - 0.5;
		n += n * ( dev * 0.1f );
		offset_timestamp += n;
	}
	FORCE_INLINE void vpmu::attribute_cycles_prof( uint32_t n ) {
		//if ( !enabled ) return;
		offset_timestamp += std::max<uint32_t>( profiling_bias, n ) - profiling_bias;
	}

	void vpmu::enter() {
		enabled = true;

		// Clear virtual timestamp if it is close to overflowing.
		//
		uint64_t virtual_timestamp = su::mgx::read_vtsc();
		if ( virtual_timestamp >> 38 ) [[unlikely]]	{
			virtual_timestamp = 0;
			su::mgx::write_vtsc( 0 );
		}

		// Read the timestamp basis, adjust for suspend.
		//
		uint64_t target_timestamp = ia32::read_tsc();
		if ( suspend_timestamp ) {
			target_timestamp -= ( std::max( target_timestamp - suspend_timestamp, 200ull ) - 200 ) >> 1;
		}
		offset_timestamp =    target_timestamp - virtual_timestamp;
		last_read_timestamp = target_timestamp;
	}
	void vpmu::exit() {
		enabled =           false;
		suspend_timestamp = 0;
	}
	void vpmu::suspend() {
		enabled =           false;
		suspend_timestamp = ia32::read_tsc();
	}
	bool vpmu::handle_rdmsr( trapframe* tf ) {
		if ( !enabled )
			return false;

		// Redirect to RDTSC if reading the timestamp.
		//
		if ( uint32_t( tf->rcx ) == IA32_TIME_STAMP_COUNTER )
		{
			uint64_t value = read_vtsc();
			tf->rax = ( uint32_t ) value;
			tf->rdx = ( uint32_t ) ( value >> 32 );
			return true;
		}
		// Handle MPERF / APERF / IRPERF / PPERF.
		//
		if ( uint32_t( tf->rcx ) == IA32_MPERF )
		{
			uint64_t value = ia32::read_msr( IA32_MPERF ) + get_tsc_offset();
			tf->rax = ( uint32_t ) value;
			tf->rdx = ( uint32_t ) ( value >> 32 );
			return true;
		}
		else if ( uint32_t( tf->rcx ) == IA32_APERF )
		{
			// TODO: Should technically use the tsc_core.
			static const double scale = ia32::read_msr( IA32_APERF ) / ( double ) ia32::read_msr( IA32_MPERF );
			uint64_t value = ia32::read_msr( IA32_APERF ) + int64_t( get_tsc_offset() * scale );
			tf->rax = ( uint32_t ) value;
			tf->rdx = ( uint32_t ) ( value >> 32 );
			return true;
		}
		else if ( uint32_t( tf->rcx ) == IA32_IRPERF || uint32_t( tf->rcx ) == IA32_PPERF )
			xstd::error( "IRPERF/PPERF are not supported!"_es );

		return false;
	}
	uint64_t vpmu::read_vtsc() {
		if ( !enabled ) return ia32::read_tsc();
		uint64_t vtsc = su::mgx::read_vtsc();
		if ( !vtsc ) return ia32::read_tsc();
		uint64_t tsc =  vtsc + offset_timestamp;
		if ( tsc < last_read_timestamp ) [[unlikely]] {
			uint64_t delta = ( last_read_timestamp - tsc ) + ( tsc >> 12 ) & 7;
			tsc += delta;
			offset_timestamp += delta;
		}
		last_read_timestamp = tsc;
		return tsc;
	}
	int64_t vpmu::get_tick_offset() {
		if ( !enabled ) return 0;
		uint64_t tsc = ia32::read_tscp().first;
		int64_t dt = std::min<int64_t>( int64_t( read_vtsc() - tsc ), 0 );
		return crt::tsc_to_ns( dt ) / 100;
	}
	int64_t vpmu::get_tsc_offset() {
		if ( !enabled ) return 0;
		uint64_t tsc =  ia32::read_tscp().first;
		return std::min<int64_t>( int64_t( read_vtsc() - tsc ), 0 );
	}
	uint64_t vpmu::read_interrupt_time() {
		uint64_t ticks = *( volatile uint64_t* ) &ke::get_user_shared_data()->interrupt_time;
		return ticks + get_tick_offset();
	}
	uint64_t vpmu::read_system_time() {
		uint64_t ticks = *( volatile uint64_t* ) &ke::get_user_shared_data()->system_time;
		return ticks + get_tick_offset();
	}
};