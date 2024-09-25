#pragma once
#include <sdkgen/support_library.hpp>
#include "idle_timeout_management_t.hpp"
#include "../nt/device_power_state_t.hpp"

namespace fx { class wmi_instance_internal_t; }

#include "magic/idle_policy_settings_t.start.hpp"
namespace wdf
{
    // [struct IdlePolicySettings]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct idle_policy_settings_t                                                     
    {                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                            
        _m00 enum nt::device_power_state_t        dx_state;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DxState
        _m01 class fx::wmi_instance_internal_t*   wmi_instance;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WmiInstance
        _m02 uint8_t                              enabled;                              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Enabled
        _m03 uint8_t                              overridable;                          //{ +0x0011    +0x0011    +0x0011    +0x0011    } | .Overridable
        _m04 uint8_t                              set;                                  //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .Set
        _m05 uint8_t                              dirty;                                //{ +0x0013    +0x0013    +0x0013    +0x0013    } | .Dirty
        _m06 uint8_t                              wake_from_s0_capable;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WakeFromS0Capable
        _m07 uint8_t                              usb_ss_capable;                       //{ +0x0019    +0x0019    +0x0019    +0x0019    } | .UsbSSCapable
        _m08 uint8_t                              usb_ss_capability_known;              //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .UsbSSCapabilityKnown
        _m09 uint8_t                              power_up_idle_device_on_system_wake;  //{ +0x001b    +0x001b    +0x001b    +0x001b    } | .PowerUpIdleDeviceOnSystemWake
        _m10 class wdf::idle_timeout_management_t m_timeout_mgmt;                       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_TimeoutMgmt
                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                            
        _m11 uint8_t                              d3_cold_capability_known;             //{ +0x001c    +0x001c    +0x001c    } | .D3ColdCapabilityKnown
        _m12 uint8_t                              d3_cold_supported;                    //{ +0x001d    +0x001d    +0x001d    } | .D3ColdSupported
                                                                                      
        SDK_MAGIC_PROPERTIES( "IdlePolicySettings.$", 0x38, true, 0xe70e7b09d75178ad );                                    
        SDK_DYNAMIC_SIZE( idle_policy_settings_t );                                    
    };                                                                                
};
#include "magic/idle_policy_settings_t.end.hpp"
