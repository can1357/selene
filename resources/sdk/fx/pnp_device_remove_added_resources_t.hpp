#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfcmreslist_t; }
namespace wdf { struct wdfdevice_t;    }

#include "magic/pnp_device_remove_added_resources_t.start.hpp"
namespace fx
{
    // [class FxPnpDeviceRemoveAddedResources]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class pnp_device_remove_added_resources_t
    {                                        
        using m_method_t = sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*;         
                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                        
        _m00 m_method_t  m_method;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
                                             
        SDK_MAGIC_PROPERTIES( "FxPnpDeviceRemoveAddedResources.$", 0x8, true, 0x4095b48515e09855 );         
        SDK_FIXED_SIZE( pnp_device_remove_added_resources_t, 0x8 );         
    };                                       
};
#include "magic/pnp_device_remove_added_resources_t.end.hpp"
SDK_VERIFY( class fx::pnp_device_remove_added_resources_t, 0x8 );
