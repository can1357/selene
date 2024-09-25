#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../wwan/driver_caps_t.hpp"

#include "magic/wwan_driver_caps_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WWAN_DRIVER_CAPS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wwan_driver_caps_t                         
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                            
        _m00 struct ndis::object_header_t header;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct wwan::driver_caps_t   driver_caps;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DriverCaps
                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_WWAN_DRIVER_CAPS.$", 0x10, true, 0x2d35298108eb51ee );            
        SDK_FIXED_SIZE( wwan_driver_caps_t, 0x10 );            
    };                                                
};
#include "magic/wwan_driver_caps_t.end.hpp"
SDK_VERIFY( struct ndis::wwan_driver_caps_t, 0x10 );
