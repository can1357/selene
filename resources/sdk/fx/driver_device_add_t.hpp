#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfdevice_init_t; }
namespace wdf { struct wdfdriver_t;      }

#include "magic/driver_device_add_t.start.hpp"
namespace fx
{
    class callback_lock_t;

    // [class FxDriverDeviceAdd]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class driver_device_add_t                             
    {                                                     
        using pfn_wdf_driver_device_add_t = sdk::function<int32_t(struct wdf::wdfdriver_t*, struct wdf::wdfdevice_init_t*)>*;                
                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                
        _m00 class fx::callback_lock_t*   m_callback_lock;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_CallbackLock
        _m01 pfn_wdf_driver_device_add_t  method;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Method
                                                          
        SDK_MAGIC_PROPERTIES( "FxDriverDeviceAdd.$", 0x10, true, 0x263c7dc26612b9a9 );                
        SDK_FIXED_SIZE( driver_device_add_t, 0x10 );                
    };                                                    
};
#include "magic/driver_device_add_t.end.hpp"
SDK_VERIFY( class fx::driver_device_add_t, 0x10 );
