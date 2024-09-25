#pragma once
#include <sdkgen/support_library.hpp>
#include "cx_callback_type_t.hpp"

namespace wdf { struct wdfdevice_t; }

#include "magic/power_device_arm_wake_from_sx_t.start.hpp"
namespace fx
{
    class pkg_pnp_t;

    // [class FxPowerDeviceArmWakeFromSx]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class power_device_arm_wake_from_sx_t                                             
    {                                                                                 
        using m_method_t =                                    sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                          
        using pfn_wdf_device_arm_wake_from_sx_with_reason_t = sdk::function<int32_t(struct wdf::wdfdevice_t*, uint8_t, uint8_t)>*;                          
                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                            
        _m00 m_method_t                                     m_method;                   //{ +0x0000    +0x0018    +0x0018    +0x0018    } | .m_Method
        _m01 pfn_wdf_device_arm_wake_from_sx_with_reason_t  m_method_with_reason;       //{ +0x0008    +0x0020    +0x0020    +0x0020    } | .m_MethodWithReason
                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                            
        _m02 enum fx::cx_callback_type_t                    m_callback_type;            //{ +0x0008    +0x0008    +0x0008    } | .m_CallbackType
        _m03 class fx::pkg_pnp_t*                           m_pkg_pnp;                  //{ +0x0010    +0x0010    +0x0010    } | .m_PkgPnp
        _m04 struct wdf::wdfdevice_t*                       m_device;                   //{ +0x0028    +0x0028    +0x0028    } | .m_Device
        _m05 uint8_t                                        m_device_wake_enabled;      //{ +0x0030    +0x0030    +0x0030    } | .m_DeviceWakeEnabled
        _m06 uint8_t                                        m_children_armed_for_wake;  //{ +0x0031    +0x0031    +0x0031    } | .m_ChildrenArmedForWake
                                                                                      
        SDK_MAGIC_PROPERTIES( "FxPowerDeviceArmWakeFromSx.$", 0x38, true, 0x8e71e9829614b719 );                          
        SDK_DYNAMIC_SIZE( power_device_arm_wake_from_sx_t );                          
    };                                                                                
};
#include "magic/power_device_arm_wake_from_sx_t.end.hpp"
