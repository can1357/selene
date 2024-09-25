#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gft_packet_byte_counter_value_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_packet_byte_counter_value_t
    {                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint64_t packets;              //{ +0x0000    +0x0000    +0x0000    } | .Packets
        _m01 uint64_t bytes;                //{ +0x0008    +0x0008    +0x0008    } | .Bytes
        _m02 int64_t  last_update;          //{ +0x0010    +0x0010    +0x0010    } | .LastUpdate
                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_PACKET_BYTE_COUNTER_VALUE.$", 0x18, true, 0x7224416b42c846f0 );            
        SDK_FIXED_SIZE( gft_packet_byte_counter_value_t, 0x18 );            
    };                                    
};
#include "magic/gft_packet_byte_counter_value_t.end.hpp"
SDK_VERIFY( struct ndis::gft_packet_byte_counter_value_t, 0x18 );
