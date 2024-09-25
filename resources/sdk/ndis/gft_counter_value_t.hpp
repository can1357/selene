#pragma once
#include <sdkgen/support_library.hpp>
#include "gft_counter_type_t.hpp"
#include "gft_byte_counter_value_t.hpp"
#include "gft_packet_counter_value_t.hpp"
#include "gft_packet_byte_counter_value_t.hpp"
#include "gft_packet_byte_counter_value_and_state_t.hpp"

#include "magic/gft_counter_value_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_COUNTER_VALUE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_counter_value_t                                                                          
    {                                                                                                   
        union u0_counter_value_t                                                                        
        {                                                                                               
            using packets_bytes_t =           volatile struct ndis::gft_packet_byte_counter_value_t;                                      
            using packets_bytes_and_state_t = volatile struct ndis::gft_packet_byte_counter_value_and_state_t;                                      
                                                                                                        
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
            //                                                                                          
            _m01 volatile struct ndis::gft_packet_counter_value_t packets;                                //{ +0x0000    +0x0000    +0x0000    } | .Packets
            _m02 volatile struct ndis::gft_byte_counter_value_t   bytes;                                  //{ +0x0000    +0x0000    +0x0000    } | .Bytes
            _m03 packets_bytes_t                                  packets_bytes;                          //{ +0x0000    +0x0000    +0x0000    } | .PacketsBytes
            _m04 packets_bytes_and_state_t                        packets_bytes_and_state;                //{ +0x0000    +0x0000    +0x0000    } | .PacketsBytesAndState
                                                                                                        
            SDK_MAGIC_PROPERTIES( "_NDIS_GFT_COUNTER_VALUE.CounterValue.$", 0x20, true, 0xad7b0e72ef4b2a3b );                                      
            SDK_FIXED_SIZE( u0_counter_value_t, 0x20 );                                                 
        };                                                                                              
                                                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                                              
        _m00 enum ndis::gft_counter_type_t                                                counter_type;   //{ +0x0000    +0x0000    +0x0000    } | .CounterType
        _m05 u0_counter_value_t                                                           counter_value;  //{ +0x0008    +0x0008    +0x0008    } | .CounterValue
                                                                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_COUNTER_VALUE.$", 0x28, true, 0x4077fa0b95b3cff4 );              
        SDK_FIXED_SIZE( gft_counter_value_t, 0x28 );                                                    
    };                                                                                                  
};
#include "magic/gft_counter_value_t.end.hpp"
SDK_VERIFY( union ndis::gft_counter_value_t::u0_counter_value_t, 0x20 );
SDK_VERIFY( struct ndis::gft_counter_value_t, 0x28 );
