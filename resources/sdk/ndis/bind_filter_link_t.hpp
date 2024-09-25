#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bind_filter_link_t.start.hpp"
namespace ndis
{
    // [struct NDIS_BIND_FILTER_LINK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bind_filter_link_t                
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                   
        _m00 nt::list_entry_t driver_linkage;  //{ +0x0058    +0x0040    +0x0040    +0x0040    } | .DriverLinkage
        _m01 uint32_t         filter_index;    //{ +0x0070    +0x0058    +0x0058    +0x0058    } | .FilterIndex
                                             
        SDK_MAGIC_PROPERTIES( "NDIS_BIND_FILTER_LINK.$", 0x60, true, 0xc8c9f78474f1444e );               
        SDK_DYNAMIC_SIZE( bind_filter_link_t );               
    };                                       
};
#include "magic/bind_filter_link_t.end.hpp"
