#pragma once
#include <xstd/intrinsics.hpp>
#include <ia32.hpp>
#include <ia32/apic.hpp>
#include <vector>
#include <unordered_map>
#include <xstd/assert.hpp>
#include <xstd/spinlock.hpp>
#include <ntpp.hpp>

// TODO:
// - Add dynamic processor count support.
//
namespace apic
{
	using namespace ia32::apic;
	
	// Properties of the active APIC configuration filled after initialization.
	//
	constexpr uint64_t max_processor_count = 256;
	inline uint32_t local_adr_shift = 0;
	inline uint32_t local_adr_mask = 0;
	inline uint32_t cluster_id_shift = 0;
	inline uint32_t cluster_id_mask = 0;
	inline uint32_t number_to_apic_tbl[ max_processor_count ] = {};
	CONST_FN inline uint32_t number_of_processors()
	{
		return ( uint32_t ) ( size_t ) __builtin_fetch_dynamic( "@.cpunum" );
	}

	// Processor ID conversions and properties.
	//
	inline uint32_t number_to_apic( uint32_t number )
	{
		return number_to_apic_tbl[ number ];
	}
	inline uint32_t apic_to_number( uint32_t number )
	{
		auto it = std::find( std::begin( number_to_apic_tbl ), std::end( number_to_apic_tbl ), number );
		if ( it != std::end( number_to_apic_tbl ) )
			return it - std::begin( number_to_apic_tbl );
		else
			return UINT32_MAX;
	}

	inline bool is_clustered()
	{
		return cluster_id_mask != 0;
	}
	inline uint32_t get_logical_id()
	{
		return controller{}.read_register( logical_dst_register );
	}
	inline std::pair<uint32_t, uint32_t> split_logical_id( uint32_t id )
	{
		return
		{ 
			( id >> cluster_id_shift ) & cluster_id_mask, 
			( id >> local_adr_shift ) & local_adr_mask
		};
	}

	// Initializes the APIC information.
	//
	inline void init()
	{
		fassert( ia32::apic::init() );

		// If not x2apic:
		//
		if ( auto c = controller{}; !c.is_x2apic() )
		{
			// If flat model:
			//
			uint32_t model = c.read_register<>( dest_fmt_register ) >> 28;
			if ( model == 0b1111 )
			{
				// [32:24]
				local_adr_shift = 24;
				cluster_id_shift = 32;
				local_adr_mask = 0xFF;
				cluster_id_mask = 0;
			}
			// If clustered model:
			//
			else
			{
				if ( model != 0b0000 )
					xstd::error( "Invalid xAPIC model."_es );
				// [32:28][28:24]
				local_adr_shift = 24;
				cluster_id_shift = 28;
				local_adr_mask = 0xF;
				cluster_id_mask = 0xF;
			}
		}
		else
		{
			// [32:16][16:00]
			local_adr_shift = 0;
			cluster_id_shift = 16;
			local_adr_mask = 0xFFFF;
			cluster_id_mask = 0xFFFF;
		}

		// Enumerate each processor to map the identifiers and find out the processor count.
		//
		uint32_t max_id = 0;
		std::unordered_map<uint32_t, uint32_t, xstd::hasher<>> apic_to_number_tbl = {};
		apic_to_number_tbl.reserve( max_processor_count );
		std::fill( std::begin( number_to_apic_tbl ), std::end( number_to_apic_tbl ), UINT32_MAX );
		ntpp::for_each_processor( [ & ] ()
		{	
			uint32_t num = nt::read_pcid<true>();
			uint32_t lid = get_logical_id();

			max_id = std::max( num, max_id );
			if ( num < max_processor_count )
			{
				number_to_apic_tbl[ num ] = lid;
				apic_to_number_tbl[ lid ] = num;
				if ( ia32::read_pcid() != num )
					xstd::error( "Processor number does not match IA32_TSC_AUX."_es );
			}
			else
			{
				xstd::error( "Too many processors."_es );
			}
		} );
		__builtin_store_dynamic( "@.cpunum", ( void* ) size_t( max_id + 1 ) );

		if ( apic_to_number_tbl.size() != number_of_processors() )
			xstd::error( "Processor number overlap [%llu / %llu]."_es, number_of_processors(), apic_to_number_tbl.size() );

		for( size_t i = 0; i != number_of_processors(); i++ )
			if ( number_to_apic_tbl[ i ] == UINT32_MAX )
				xstd::error( "Processor numbers are not consequential."_es );
	}
};