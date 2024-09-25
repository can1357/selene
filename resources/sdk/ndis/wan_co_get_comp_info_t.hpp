#pragma once
#include <sdkgen/support_library.hpp>
#include "wan_compress_info_t.hpp"

#include "magic/wan_co_get_comp_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WAN_CO_GET_COMP_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wan_co_get_comp_info_t                               
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                      
        _m00 struct ndis::wan_compress_info_t send_capabilities;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SendCapabilities
        _m01 struct ndis::wan_compress_info_t recv_capabilities;  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .RecvCapabilities
                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_WAN_CO_GET_COMP_INFO.$", 0x68, true, 0xfeadadd546abe299 );                  
        SDK_FIXED_SIZE( wan_co_get_comp_info_t, 0x68 );                  
    };                                                          
};
#include "magic/wan_co_get_comp_info_t.end.hpp"
SDK_VERIFY( struct ndis::wan_co_get_comp_info_t, 0x68 );
