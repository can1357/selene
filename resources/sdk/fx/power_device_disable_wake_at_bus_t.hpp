#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfdevice_t; }

#include "magic/power_device_disable_wake_at_bus_t.start.hpp"
namespace fx
{
    // [class FxPowerDeviceDisableWakeAtBus]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class power_device_disable_wake_at_bus_t                         
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                           
        _m00 sdk::function<void(struct wdf::wdfdevice_t*)>* m_method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
                                                                     
        SDK_MAGIC_PROPERTIES( "FxPowerDeviceDisableWakeAtBus.$", 0x8, true, 0x9b493284921f3080 );         
        SDK_FIXED_SIZE( power_device_disable_wake_at_bus_t, 0x8 );         
    };                                                               
};
#include "magic/power_device_disable_wake_at_bus_t.end.hpp"
SDK_VERIFY( class fx::power_device_disable_wake_at_bus_t, 0x8 );
