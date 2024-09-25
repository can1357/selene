#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfdevice_t; }

#include "magic/pnp_device_set_lock_t.start.hpp"
namespace fx
{
    // [class FxPnpDeviceSetLock]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class pnp_device_set_lock_t                  
    {                                            
        using pfn_wdf_device_set_lock_t = sdk::function<int32_t(struct wdf::wdfdevice_t*, uint8_t)>*;         
                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                       
        _m00 pfn_wdf_device_set_lock_t  m_method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
                                                 
        SDK_MAGIC_PROPERTIES( "FxPnpDeviceSetLock.$", 0x8, true, 0x7e0190b13f59c904 );         
        SDK_FIXED_SIZE( pnp_device_set_lock_t, 0x8 );         
    };                                           
};
#include "magic/pnp_device_set_lock_t.end.hpp"
SDK_VERIFY( class fx::pnp_device_set_lock_t, 0x8 );
