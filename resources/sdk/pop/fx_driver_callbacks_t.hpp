#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }
namespace nt { struct guid_t;          }

#include "magic/fx_driver_callbacks_t.start.hpp"
namespace pop
{
    // [struct _POP_FX_DRIVER_CALLBACKS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fx_driver_callbacks_t                                                           
    {                                                                                      
        using power_control_t =           sdk::function<int32_t(void*, const struct nt::guid_t*, void*, uint64_t, void*, uint64_t, uint64_t*)>*;                              
        using drips_watchdog_callback_t = sdk::function<void(void*, struct nt::device_object_t*, uint32_t)>*;                              
                                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                                 
        _m00 sdk::function<void(void*, uint32_t)>*           component_active;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ComponentActive
        _m01 sdk::function<void(void*, uint32_t)>*           component_idle;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ComponentIdle
        _m02 sdk::function<void(void*, uint32_t, uint32_t)>* component_idle_state;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ComponentIdleState
        _m03 sdk::function<void(void*)>*                     device_power_required;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DevicePowerRequired
        _m04 sdk::function<void(void*)>*                     device_power_not_required;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DevicePowerNotRequired
        _m05 power_control_t                                 power_control;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PowerControl
        _m06 sdk::function<void(void*, uint32_t, uint8_t)>*  component_critical_transition;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ComponentCriticalTransition
                                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                 
        _m07 drips_watchdog_callback_t                       drips_watchdog_callback;        //{ +0x0038    +0x0038    +0x0038    } | .DripsWatchdogCallback
        _m08 sdk::function<void(void*, uint32_t)>*           directed_power_up_callback;     //{ +0x0040    +0x0040    +0x0040    } | .DirectedPowerUpCallback
        _m09 sdk::function<void(void*, uint32_t)>*           directed_power_down_callback;   //{ +0x0048    +0x0048    +0x0048    } | .DirectedPowerDownCallback
                                                                                           
        SDK_MAGIC_PROPERTIES( "_POP_FX_DRIVER_CALLBACKS.$", 0x50, true, 0x7a5c395e0b065a83 );                              
        SDK_DYNAMIC_SIZE( fx_driver_callbacks_t );                                         
    };                                                                                     
};
#include "magic/fx_driver_callbacks_t.end.hpp"
