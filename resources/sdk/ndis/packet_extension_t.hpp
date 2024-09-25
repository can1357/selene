#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/packet_extension_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PACKET_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct packet_extension_t                       
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                          
        _m00 sdk::array<void*, 12> ndis_packet_info;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NdisPacketInfo
                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_PACKET_EXTENSION.$", 0x60, true, 0xd3d9c14fc2adecb );                 
        SDK_FIXED_SIZE( packet_extension_t, 0x60 );                 
    };                                              
};
#include "magic/packet_extension_t.end.hpp"
SDK_VERIFY( struct ndis::packet_extension_t, 0x60 );
