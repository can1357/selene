#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/special_file_type_t.hpp"

namespace wdf { struct wdfdevice_t; }

#include "magic/pnp_device_usage_notification_t.start.hpp"
namespace fx
{
    // [class FxPnpDeviceUsageNotification]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class pnp_device_usage_notification_t                  
    {                                                      
        using pfn_wdf_device_usage_notification_t = sdk::function<void(struct wdf::wdfdevice_t*, enum wdf::special_file_type_t, uint8_t)>*;         
                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                 
        _m00 pfn_wdf_device_usage_notification_t  m_method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
                                                           
        SDK_MAGIC_PROPERTIES( "FxPnpDeviceUsageNotification.$", 0x8, true, 0x8f67d23d2b3a3f97 );         
        SDK_FIXED_SIZE( pnp_device_usage_notification_t, 0x8 );         
    };                                                     
};
#include "magic/pnp_device_usage_notification_t.end.hpp"
SDK_VERIFY( class fx::pnp_device_usage_notification_t, 0x8 );
