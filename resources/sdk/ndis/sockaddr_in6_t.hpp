#pragma once
#include <sdkgen/support_library.hpp>
#include "scope_id_t.hpp"
#include "../nt/in6_addr_t.hpp"

#include "magic/sockaddr_in6_t.start.hpp"
namespace ndis
{
    // [struct sockaddr_in6]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sockaddr_in6_t                              
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                             
        _m00 uint16_t                sin6_family;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .sin6_family
        _m01 uint16_t                sin6_port;          //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .sin6_port
        _m02 uint32_t                sin6_flowinfo;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .sin6_flowinfo
        _m03 struct nt::in6_addr_t   sin6_addr;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .sin6_addr
        _m04 uint32_t                sin6_scope_id;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .sin6_scope_id
        _m05 struct ndis::scope_id_t sin6_scope_struct;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .sin6_scope_struct
                                                       
        SDK_MAGIC_PROPERTIES( "sockaddr_in6.$", 0x1c, true, 0x7a145990177fa905 );                  
        SDK_DYNAMIC_SIZE( sockaddr_in6_t );                  
    };                                                 
};
#include "magic/sockaddr_in6_t.end.hpp"
