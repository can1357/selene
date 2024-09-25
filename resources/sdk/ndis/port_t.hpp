#pragma once
#include <sdkgen/support_library.hpp>
#include "port_characteristics_t.hpp"

#include "magic/port_t.start.hpp"
namespace ndis
{
    struct port_t;

    // [struct _NDIS_PORT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct port_t                                                     
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                            
        _m00 struct ndis::port_t*                next;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 void*                               ndis_reserved;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdisReserved
        _m02 void*                               miniport_reserved;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MiniportReserved
        _m03 void*                               protocol_reserved;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ProtocolReserved
        _m04 struct ndis::port_characteristics_t port_characteristics;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PortCharacteristics
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_PORT.$", 0x60, true, 0x37e8c5aeecb5b1a7 );                     
        SDK_FIXED_SIZE( port_t, 0x60 );                               
    };                                                                
};
#include "magic/port_t.end.hpp"
SDK_VERIFY( struct ndis::port_t, 0x60 );
