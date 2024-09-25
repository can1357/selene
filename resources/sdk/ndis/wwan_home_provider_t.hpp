#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../wwan/provider_t.hpp"

#include "magic/wwan_home_provider_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WWAN_HOME_PROVIDER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wwan_home_provider_t                    
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                         
        _m00 struct ndis::object_header_t header;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     u_status;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uStatus
        _m02 struct wwan::provider_t      provider;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Provider
                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_WWAN_HOME_PROVIDER.$", 0x4c, true, 0xac5a02faf10111 );         
        SDK_FIXED_SIZE( wwan_home_provider_t, 0x4c );         
    };                                             
};
#include "magic/wwan_home_provider_t.end.hpp"
SDK_VERIFY( struct ndis::wwan_home_provider_t, 0x4c );
