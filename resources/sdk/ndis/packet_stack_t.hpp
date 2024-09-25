#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/packet_stack_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PACKET_STACK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct packet_stack_t                          
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                         
        _m00 sdk::array<uint64_t, 2> im_reserved;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IMReserved
        _m01 sdk::array<uint64_t, 4> ndis_reserved;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NdisReserved
                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_PACKET_STACK.$", 0x30, true, 0xc7500e3e173a8106 );              
        SDK_FIXED_SIZE( packet_stack_t, 0x30 );              
    };                                             
};
#include "magic/packet_stack_t.end.hpp"
SDK_VERIFY( struct ndis::packet_stack_t, 0x30 );
