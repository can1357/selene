#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfdevice_t; }

#include "magic/pnp_device_reported_missing_t.start.hpp"
namespace fx
{
    // [class FxPnpDeviceReportedMissing]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class pnp_device_reported_missing_t                              
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                           
        _m00 sdk::function<void(struct wdf::wdfdevice_t*)>* m_method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
                                                                     
        SDK_MAGIC_PROPERTIES( "FxPnpDeviceReportedMissing.$", 0x8, true, 0x75af65d342072273 );         
        SDK_FIXED_SIZE( pnp_device_reported_missing_t, 0x8 );         
    };                                                               
};
#include "magic/pnp_device_reported_missing_t.end.hpp"
SDK_VERIFY( class fx::pnp_device_reported_missing_t, 0x8 );
