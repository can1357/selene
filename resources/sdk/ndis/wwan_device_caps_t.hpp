#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../wwan/device_caps_t.hpp"

#include "magic/wwan_device_caps_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WWAN_DEVICE_CAPS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wwan_device_caps_t                         
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                            
        _m00 struct ndis::object_header_t header;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     u_status;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .uStatus
        _m02 struct wwan::device_caps_t   device_caps;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceCaps
                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_WWAN_DEVICE_CAPS.$", 0x160, true, 0x948572cab9ae9870 );            
        SDK_FIXED_SIZE( wwan_device_caps_t, 0x160 );            
    };                                                
};
#include "magic/wwan_device_caps_t.end.hpp"
SDK_VERIFY( struct ndis::wwan_device_caps_t, 0x160 );
