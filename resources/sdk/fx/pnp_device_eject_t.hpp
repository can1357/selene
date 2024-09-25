#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfdevice_t; }

#include "magic/pnp_device_eject_t.start.hpp"
namespace fx
{
    // [class FxPnpDeviceEject]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class pnp_device_eject_t      
    {                             
        using m_method_t = sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;         
                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                        
        _m00 m_method_t  m_method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
                                  
        SDK_MAGIC_PROPERTIES( "FxPnpDeviceEject.$", 0x8, true, 0xcaf3b5a0e06ff614 );         
        SDK_FIXED_SIZE( pnp_device_eject_t, 0x8 );         
    };                            
};
#include "magic/pnp_device_eject_t.end.hpp"
SDK_VERIFY( class fx::pnp_device_eject_t, 0x8 );
