#pragma once
#include <sdkgen/support_library.hpp>
#include "tri_state_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "power_policy_s0_idle_capabilities_t.hpp"
#include "power_policy_s0_idle_user_control_t.hpp"

#include "magic/device_power_policy_idle_settings_v1_5_t.start.hpp"
namespace wdf
{
    // [struct _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_5]
    // => Windows 10 v1607
    //
    struct device_power_policy_idle_settings_v1_5_t                                      
    {                                                                                    
        // Windows 10 v1607                                                              
        //                                                                               
        _m00 uint32_t                                      size;                           //{ +0x0000    } | .Size
        _m01 enum wdf::power_policy_s0_idle_capabilities_t idle_caps;                      //{ +0x0004    } | .IdleCaps
        _m02 enum nt::device_power_state_t                 dx_state;                       //{ +0x0008    } | .DxState
        _m03 uint32_t                                      idle_timeout;                   //{ +0x000c    } | .IdleTimeout
        _m04 enum wdf::power_policy_s0_idle_user_control_t user_control_of_idle_settings;  //{ +0x0010    } | .UserControlOfIdleSettings
        _m05 enum wdf::tri_state_t                         enabled;                        //{ +0x0014    } | .Enabled
                                                                                         
        SDK_MAGIC_PROPERTIES( "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_5.$", 0x0, false, 0x6803d52b03ddb2f5 );                              
        SDK_FIXED_SIZE( device_power_policy_idle_settings_v1_5_t, 0x18 );                              
    };                                                                                   
};
#include "magic/device_power_policy_idle_settings_v1_5_t.end.hpp"
SDK_VERIFY( struct wdf::device_power_policy_idle_settings_v1_5_t, 0x18 );
