#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/system_power_state_t.hpp"

namespace wdf { struct wdfdevice_t; }

#include "magic/power_device_enable_wake_at_bus_t.start.hpp"
namespace fx
{
    // [class FxPowerDeviceEnableWakeAtBus]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class power_device_enable_wake_at_bus_t                
    {                                                      
        using pfn_wdf_device_enable_wake_at_bus_t = sdk::function<int32_t(struct wdf::wdfdevice_t*, enum nt::system_power_state_t)>*;         
                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                 
        _m00 pfn_wdf_device_enable_wake_at_bus_t  m_method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
                                                           
        SDK_MAGIC_PROPERTIES( "FxPowerDeviceEnableWakeAtBus.$", 0x8, true, 0x4b992f28ab250933 );         
        SDK_FIXED_SIZE( power_device_enable_wake_at_bus_t, 0x8 );         
    };                                                     
};
#include "magic/power_device_enable_wake_at_bus_t.end.hpp"
SDK_VERIFY( class fx::power_device_enable_wake_at_bus_t, 0x8 );
