#pragma once
#include <sdkgen/support_library.hpp>
#include "cx_callback_type_t.hpp"

namespace wdf { struct wdfdevice_t; }

#include "magic/power_device_wake_from_s0_triggered_t.start.hpp"
namespace fx
{
    class pkg_pnp_t;

    // [class FxPowerDeviceWakeFromS0Triggered]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class power_device_wake_from_s0_triggered_t                             
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                                  
        _m00 sdk::function<void(struct wdf::wdfdevice_t*)>* m_method;         //{ +0x0000    +0x0018    +0x0018    +0x0018    } | .m_Method
                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                  
        _m01 enum fx::cx_callback_type_t                    m_callback_type;  //{ +0x0008    +0x0008    +0x0008    } | .m_CallbackType
        _m02 class fx::pkg_pnp_t*                           m_pkg_pnp;        //{ +0x0010    +0x0010    +0x0010    } | .m_PkgPnp
        _m03 struct wdf::wdfdevice_t*                       m_device;         //{ +0x0020    +0x0020    +0x0020    } | .m_Device
                                                                            
        SDK_MAGIC_PROPERTIES( "FxPowerDeviceWakeFromS0Triggered.$", 0x28, true, 0xafc49c9524099a0 );                
        SDK_DYNAMIC_SIZE( power_device_wake_from_s0_triggered_t );                
    };                                                                      
};
#include "magic/power_device_wake_from_s0_triggered_t.end.hpp"
