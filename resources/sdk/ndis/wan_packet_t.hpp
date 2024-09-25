#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wan_packet_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WAN_PACKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wan_packet_t                          
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                       
        _m00 nt::list_entry_t wan_packet_queue;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WanPacketQueue
        _m01 uint8_t*         current_buffer;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CurrentBuffer
        _m02 uint32_t         current_length;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CurrentLength
        _m03 uint8_t*         start_buffer;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .StartBuffer
        _m04 uint8_t*         end_buffer;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .EndBuffer
        _m05 void*            protocol_reserved1;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ProtocolReserved1
        _m06 void*            protocol_reserved2;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ProtocolReserved2
        _m07 void*            protocol_reserved3;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ProtocolReserved3
        _m08 void*            protocol_reserved4;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ProtocolReserved4
        _m09 void*            mac_reserved1;       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .MacReserved1
        _m10 void*            mac_reserved2;       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .MacReserved2
        _m11 void*            mac_reserved3;       //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .MacReserved3
        _m12 void*            mac_reserved4;       //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .MacReserved4
                                                 
        SDK_MAGIC_PROPERTIES( "_NDIS_WAN_PACKET.$", 0x70, true, 0xbabe6c078d0852a );                   
        SDK_FIXED_SIZE( wan_packet_t, 0x70 );                   
    };                                           
};
#include "magic/wan_packet_t.end.hpp"
SDK_VERIFY( struct ndis::wan_packet_t, 0x70 );
