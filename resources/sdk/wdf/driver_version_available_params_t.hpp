#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/driver_version_available_params_t.start.hpp"
namespace wdf
{
    // [struct _WDF_DRIVER_VERSION_AVAILABLE_PARAMS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct driver_version_available_params_t
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t major_version;          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .MajorVersion
        _m02 uint32_t minor_version;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MinorVersion
                                            
        SDK_NONVOL_PROPERTIES( "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS.$", 0xc, true, 0xa46e9d85b429eb3b );              
        SDK_FIXED_SIZE( driver_version_available_params_t, 0xc );              
    };                                      
};
#include "magic/driver_version_available_params_t.end.hpp"
SDK_VERIFY( struct wdf::driver_version_available_params_t, 0xc );
