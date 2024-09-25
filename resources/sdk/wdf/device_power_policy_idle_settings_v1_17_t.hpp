#pragma once
#include <sdkgen/support_library.hpp>
#include "tri_state_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "power_policy_idle_timeout_type_t.hpp"
#include "power_policy_s0_idle_capabilities_t.hpp"
#include "power_policy_s0_idle_user_control_t.hpp"

#include "magic/device_power_policy_idle_settings_v1_17_t.start.hpp"
namespace wdf
{
    // [struct _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_17]
    // => Windows 10 v1607
    //
    struct device_power_policy_idle_settings_v1_17_t                                           
    {                                                                                          
        // Windows 10 v1607                                                                    
        //                                                                                     
        _m00 uint32_t                                      size;                                 //{ +0x0000    } | .Size
        _m01 enum wdf::power_policy_s0_idle_capabilities_t idle_caps;                            //{ +0x0004    } | .IdleCaps
        _m02 enum nt::device_power_state_t                 dx_state;                             //{ +0x0008    } | .DxState
        _m03 uint32_t                                      idle_timeout;                         //{ +0x000c    } | .IdleTimeout
        _m04 enum wdf::power_policy_s0_idle_user_control_t user_control_of_idle_settings;        //{ +0x0010    } | .UserControlOfIdleSettings
        _m05 enum wdf::tri_state_t                         enabled;                              //{ +0x0014    } | .Enabled
        _m06 enum wdf::tri_state_t                         power_up_idle_device_on_system_wake;  //{ +0x0018    } | .PowerUpIdleDeviceOnSystemWake
        _m07 enum wdf::power_policy_idle_timeout_type_t    idle_timeout_type;                    //{ +0x001c    } | .IdleTimeoutType
        _m08 enum wdf::tri_state_t                         exclude_d3_cold;                      //{ +0x0020    } | .ExcludeD3Cold
                                                                                               
        SDK_MAGIC_PROPERTIES( "_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS_V1_17.$", 0x0, false, 0xddbc0af61c89e4fb );                                    
        SDK_FIXED_SIZE( device_power_policy_idle_settings_v1_17_t, 0x24 );                                    
    };                                                                                         
};
#include "magic/device_power_policy_idle_settings_v1_17_t.end.hpp"
SDK_VERIFY( struct wdf::device_power_policy_idle_settings_v1_17_t, 0x24 );
