#pragma once
#include <sdkgen/support_library.hpp>
#include "gft_flow_state_t.hpp"
#include "gft_packet_byte_counter_value_t.hpp"

#include "magic/gft_packet_byte_counter_value_and_state_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE_AND_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_packet_byte_counter_value_and_state_t                          
    {                                                                         
        using packet_byte_counter_value_t = volatile struct ndis::gft_packet_byte_counter_value_t;                          
                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                    
        _m00 packet_byte_counter_value_t            packet_byte_counter_value;  //{ +0x0000    +0x0000    +0x0000    } | .PacketByteCounterValue
        _m01 volatile struct ndis::gft_flow_state_t flow_state;                 //{ +0x0018    +0x0018    +0x0018    } | .FlowState
                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_PACKET_BYTE_COUNTER_VALUE_AND_STATE.$", 0x20, true, 0x831fccf2976e33ef );                          
        SDK_FIXED_SIZE( gft_packet_byte_counter_value_and_state_t, 0x20 );                          
    };                                                                        
};
#include "magic/gft_packet_byte_counter_value_and_state_t.end.hpp"
SDK_VERIFY( struct ndis::gft_packet_byte_counter_value_and_state_t, 0x20 );
