#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../wwan/list_header_t.hpp"

#include "magic/wwan_preferred_providers_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WWAN_PREFERRED_PROVIDERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wwan_preferred_providers_t                           
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                      
        _m00 struct ndis::object_header_t header;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     u_status;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uStatus
        _m02 struct wwan::list_header_t   preferred_list_header;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PreferredListHeader
                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_WWAN_PREFERRED_PROVIDERS.$", 0x10, true, 0xb152f97d0754fab4 );                      
        SDK_FIXED_SIZE( wwan_preferred_providers_t, 0x10 );                      
    };                                                          
};
#include "magic/wwan_preferred_providers_t.end.hpp"
SDK_VERIFY( struct ndis::wwan_preferred_providers_t, 0x10 );
