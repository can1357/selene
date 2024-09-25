#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "gft_counter_type_t.hpp"
#include "gft_counter_update_frequency_t.hpp"

#include "magic/gft_counter_parameters_t.start.hpp"
namespace ndis
{
    struct gft_byte_counter_value_t;
    struct gft_packet_counter_value_t;
    struct gft_packet_byte_counter_value_t;
    struct gft_packet_byte_counter_value_and_state_t;

    // [struct _NDIS_GFT_COUNTER_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_counter_parameters_t                                                                                         
    {                                                                                                                       
        union u0_counter_values_buffer_start_t                                                                              
        {                                                                                                                   
            using packet_counters_t =                volatile struct ndis::gft_packet_counter_value_t*;                                                           
            using packet_byte_counters_t =           volatile struct ndis::gft_packet_byte_counter_value_t*;                                                           
            using packet_byte_counters_and_state_t = volatile struct ndis::gft_packet_byte_counter_value_and_state_t*;                                                           
                                                                                                                            
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                               
            //                                                                                                              
            _m08 packet_counters_t                               packet_counters;                                             //{ +0x0000    +0x0000    +0x0000    } | .PacketCounters
            _m09 volatile struct ndis::gft_byte_counter_value_t* byte_counters;                                               //{ +0x0000    +0x0000    +0x0000    } | .ByteCounters
            _m10 packet_byte_counters_t                          packet_byte_counters;                                        //{ +0x0000    +0x0000    +0x0000    } | .PacketByteCounters
            _m11 packet_byte_counters_and_state_t                packet_byte_counters_and_state;                              //{ +0x0000    +0x0000    +0x0000    } | .PacketByteCountersAndState
                                                                                                                            
            SDK_MAGIC_PROPERTIES( "_NDIS_GFT_COUNTER_PARAMETERS.CounterValuesBufferStart.$", 0x8, true, 0xa56d778a1cb688c3 );                                                           
            SDK_FIXED_SIZE( u0_counter_values_buffer_start_t, 0x8 );                                                           
        };                                                                                                                  
                                                                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                   
        //                                                                                                                  
        _m00 struct ndis::object_header_t                                                       header;                       //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                                                           flags;                        //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                                                                           table_id;                     //{ +0x0008    +0x0008    +0x0008    } | .TableId
        _m03 enum ndis::gft_counter_update_frequency_t                                          counter_update_frequency;     //{ +0x000c    +0x000c    +0x000c    } | .CounterUpdateFrequency
        _m04 enum ndis::gft_counter_type_t                                                      counter_type;                 //{ +0x0010    +0x0010    +0x0010    } | .CounterType
        _m05 uint32_t                                                                           counter_id_start;             //{ +0x0014    +0x0014    +0x0014    } | .CounterIdStart
        _m06 uint32_t                                                                           num_counters;                 //{ +0x0018    +0x0018    +0x0018    } | .NumCounters
        _m07 uint32_t                                                                           update_period;                //{ +0x001c    +0x001c    +0x001c    } | .UpdatePeriod
        _m12 u0_counter_values_buffer_start_t                                                   counter_values_buffer_start;  //{ +0x0020    +0x0020    +0x0020    } | .CounterValuesBufferStart
                                                                                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_COUNTER_PARAMETERS.$", 0x28, true, 0xb0d5a3925ec2e0a9 );                            
        SDK_FIXED_SIZE( gft_counter_parameters_t, 0x28 );                                                                   
    };                                                                                                                      
};
#include "magic/gft_counter_parameters_t.end.hpp"
SDK_VERIFY( union ndis::gft_counter_parameters_t::u0_counter_values_buffer_start_t, 0x8 );
SDK_VERIFY( struct ndis::gft_counter_parameters_t, 0x28 );
