#pragma once
#include <sdkgen/support_library.hpp>
#include "packet_t.hpp"
#include "stack_index_t.hpp"

#include "magic/packet_wrapper_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PACKET_WRAPPER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct packet_wrapper_t                         
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                          
        _m00 uint32_t                   pvt_flags;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PvtFlags
        _m01 struct ndis::stack_index_t stack_index;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StackIndex
        _m02 struct ndis::packet_t      packet;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Packet
                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_PACKET_WRAPPER.$", 0x78, true, 0xde982f5f9c6fbd5d );            
        SDK_FIXED_SIZE( packet_wrapper_t, 0x78 );            
    };                                              
};
#include "magic/packet_wrapper_t.end.hpp"
SDK_VERIFY( struct ndis::packet_wrapper_t, 0x78 );
