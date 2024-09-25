#pragma once
#include <sdkgen/support_library.hpp>
#include "tri_state_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "power_policy_sx_wake_user_control_t.hpp"

#include "magic/device_power_policy_wake_settings_v1_1_t.start.hpp"
namespace wdf
{
    // [struct _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_1]
    // => Windows 10 v1607
    //
    struct device_power_policy_wake_settings_v1_1_t                                      
    {                                                                                    
        // Windows 10 v1607                                                              
        //                                                                               
        _m00 uint32_t                                      size;                           //{ +0x0000    } | .Size
        _m01 enum nt::device_power_state_t                 dx_state;                       //{ +0x0004    } | .DxState
        _m02 enum wdf::power_policy_sx_wake_user_control_t user_control_of_wake_settings;  //{ +0x0008    } | .UserControlOfWakeSettings
        _m03 enum wdf::tri_state_t                         enabled;                        //{ +0x000c    } | .Enabled
                                                                                         
        SDK_MAGIC_PROPERTIES( "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_1.$", 0x0, false, 0xc35271d94af0fc21 );                              
        SDK_FIXED_SIZE( device_power_policy_wake_settings_v1_1_t, 0x10 );                              
    };                                                                                   
};
#include "magic/device_power_policy_wake_settings_v1_1_t.end.hpp"
SDK_VERIFY( struct wdf::device_power_policy_wake_settings_v1_1_t, 0x10 );
