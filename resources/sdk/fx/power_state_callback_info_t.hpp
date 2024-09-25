#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct device_power_notification_data_t; }
namespace wdf { struct wdfdevice_t;                      }

#include "magic/power_state_callback_info_t.start.hpp"
namespace fx
{
    // [struct FxPowerStateCallbackInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct power_state_callback_info_t
    {                                 
        using pfn_wdf_device_power_state_change_notification_t = sdk::function<void(struct wdf::wdfdevice_t*, const struct wdf::device_power_notification_data_t*)>*;         
        using callback_t =                                       pfn_wdf_device_power_state_change_notification_t ;         
                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                        
        _m00 uint32_t    types;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Types
        _m01 callback_t  callback;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Callback
                                      
        SDK_MAGIC_PROPERTIES( "FxPowerStateCallbackInfo.$", 0x10, true, 0x567651efdceeb319 );         
        SDK_FIXED_SIZE( power_state_callback_info_t, 0x10 );         
    };                                
};
#include "magic/power_state_callback_info_t.end.hpp"
SDK_VERIFY( struct fx::power_state_callback_info_t, 0x10 );
