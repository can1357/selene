#pragma once
#include <sdkgen/support_library.hpp>
#include "tri_state_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "power_policy_sx_wake_user_control_t.hpp"

#include "magic/device_power_policy_wake_settings_t.start.hpp"
namespace wdf
{
    // [struct _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_power_policy_wake_settings_t                                                         
    {                                                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
        //                                                                                             
        _m00 uint32_t                                      size;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 enum nt::device_power_state_t                 dx_state;                                     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DxState
        _m02 enum wdf::power_policy_sx_wake_user_control_t user_control_of_wake_settings;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .UserControlOfWakeSettings
        _m03 enum wdf::tri_state_t                         enabled;                                      //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Enabled
        _m04 uint8_t                                       arm_for_wake_if_children_are_armed_for_wake;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ArmForWakeIfChildrenAreArmedForWake
        _m05 uint8_t                                       indicate_child_wake_on_parent_wake;           //{ +0x0011    +0x0011    +0x0011    +0x0011    +0x0011    } | .IndicateChildWakeOnParentWake
                                                                                                       
        SDK_NONVOL_PROPERTIES( "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS.$", 0x14, true, 0xa66d8c69bb1f2b4d );                                            
        SDK_FIXED_SIZE( device_power_policy_wake_settings_t, 0x14 );                                            
    };                                                                                                 
};
#include "magic/device_power_policy_wake_settings_t.end.hpp"
SDK_VERIFY( struct wdf::device_power_policy_wake_settings_t, 0x14 );
