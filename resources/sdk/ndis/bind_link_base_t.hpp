#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bind_link_base_t.start.hpp"
namespace ndis
{
    // [struct NDIS_BIND_LINK_BASE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bind_link_base_t                  
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                   
        _m00 nt::list_entry_t driver_linkage;  //{ +0x0050    +0x0040    +0x0040    +0x0040    } | .DriverLinkage
                                             
        SDK_MAGIC_PROPERTIES( "NDIS_BIND_LINK_BASE.$", 0x50, true, 0xf38b803a783944e1 );               
        SDK_DYNAMIC_SIZE( bind_link_base_t );               
    };                                       
};
#include "magic/bind_link_base_t.end.hpp"
