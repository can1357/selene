#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bind_protocol_link_t.start.hpp"
namespace ndis
{
    // [struct NDIS_BIND_PROTOCOL_LINK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bind_protocol_link_t              
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                   
        _m00 nt::list_entry_t driver_linkage;  //{ +0x0058    +0x0040    +0x0040    +0x0040    } | .DriverLinkage
                                             
        SDK_MAGIC_PROPERTIES( "NDIS_BIND_PROTOCOL_LINK.$", 0x58, true, 0x240386d0e00bea9f );               
        SDK_DYNAMIC_SIZE( bind_protocol_link_t );               
    };                                       
};
#include "magic/bind_protocol_link_t.end.hpp"
