#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gft_packet_counter_value_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_PACKET_COUNTER_VALUE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_packet_counter_value_t
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint64_t packets;         //{ +0x0000    +0x0000    +0x0000    } | .Packets
        _m01 int64_t  last_update;     //{ +0x0008    +0x0008    +0x0008    } | .LastUpdate
                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_PACKET_COUNTER_VALUE.$", 0x10, true, 0x3ac99d05b1473c7d );            
        SDK_FIXED_SIZE( gft_packet_counter_value_t, 0x10 );            
    };                               
};
#include "magic/gft_packet_counter_value_t.end.hpp"
SDK_VERIFY( struct ndis::gft_packet_counter_value_t, 0x10 );
