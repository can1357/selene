#pragma once
#include <sdkgen/support_library.hpp>
#include "tri_state_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "power_policy_s0_idle_capabilities_t.hpp"
#include "power_policy_s0_idle_user_control_t.hpp"

#include "magic/device_power_policy_idle_settings_v1_9_t.start.hpp"
namespace wdf
{
    // [struct _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_9]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_power_policy_idle_settings_v1_9_t                                            
    {                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                                     
        _m00 uint32_t                                      size;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 enum wdf::power_policy_s0_idle_capabilities_t idle_caps;                            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .IdleCaps
        _m02 enum nt::device_power_state_t                 dx_state;                             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DxState
        _m03 uint32_t                                      idle_timeout;                         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .IdleTimeout
        _m04 enum wdf::power_policy_s0_idle_user_control_t user_control_of_idle_settings;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UserControlOfIdleSettings
        _m05 enum wdf::tri_state_t                         enabled;                              //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Enabled
        _m06 enum wdf::tri_state_t                         power_up_idle_device_on_system_wake;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PowerUpIdleDeviceOnSystemWake
                                                                                               
        SDK_MAGIC_PROPERTIES( "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_9.$", 0x1c, true, 0x553b3480a0de18ee );                                    
        SDK_FIXED_SIZE( device_power_policy_idle_settings_v1_9_t, 0x1c );                                    
    };                                                                                         
};
#include "magic/device_power_policy_idle_settings_v1_9_t.end.hpp"
SDK_VERIFY( struct wdf::device_power_policy_idle_settings_v1_9_t, 0x1c );
