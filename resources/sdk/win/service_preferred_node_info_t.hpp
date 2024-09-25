#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_preferred_node_info_t.start.hpp"
namespace win
{
    // [struct _SERVICE_PREFERRED_NODE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_preferred_node_info_t
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint16_t us_preferred_node;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .usPreferredNode
        _m01 uint8_t  f_delete;           //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .fDelete
                                        
        SDK_MAGIC_PROPERTIES( "_SERVICE_PREFERRED_NODE_INFO.$", 0x4, true, 0x2766820f71d23011 );                  
        SDK_FIXED_SIZE( service_preferred_node_info_t, 0x4 );                  
    };                                  
};
#include "magic/service_preferred_node_info_t.end.hpp"
SDK_VERIFY( struct win::service_preferred_node_info_t, 0x4 );
