#pragma once
#include <sdkgen/support_library.hpp>
#include "packet_private_t.hpp"

#include "magic/packet_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PACKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct packet_t                                             
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                      
        _m00 struct ndis::packet_private_t _private;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Private
        _m01 sdk::array<uint8_t, 16>       miniport_reserved;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MiniportReserved
        _m02 sdk::array<uint8_t, 16>       wrapper_reserved;      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .WrapperReserved
        _m03 sdk::array<uint8_t, 24>       miniport_reserved_ex;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MiniportReservedEx
        _m04 sdk::array<uint8_t, 8>        wrapper_reserved_ex;   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .WrapperReservedEx
        _m05 sdk::array<uint8_t, 32>       mac_reserved;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MacReserved
        _m06 sdk::array<uint8_t, 1>        protocol_reserved;     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ProtocolReserved
                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_PACKET.$", 0x68, true, 0x1292fb86074a9ab3 );                     
        SDK_FIXED_SIZE( packet_t, 0x68 );                       
    };                                                          
};
#include "magic/packet_t.end.hpp"
SDK_VERIFY( struct ndis::packet_t, 0x68 );
