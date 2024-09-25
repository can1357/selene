#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/driver_version_available_params_v1_9_t.start.hpp"
namespace wdf
{
    // [struct _WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_9]
    // => Windows 10 v1607
    //
    struct driver_version_available_params_v1_9_t
    {                                            
        // Windows 10 v1607              
        //                          
        _m00 uint32_t size;                        //{ +0x0000    } | .Size
        _m01 uint32_t major_version;               //{ +0x0004    } | .MajorVersion
        _m02 uint32_t minor_version;               //{ +0x0008    } | .MinorVersion
                                                 
        SDK_MAGIC_PROPERTIES( "_WDF_DRIVER_VERSION_AVAILABLE_PARAMS_V1_9.$", 0x0, false, 0x1d31e8f465f03384 );              
        SDK_FIXED_SIZE( driver_version_available_params_v1_9_t, 0xc );              
    };                                           
};
#include "magic/driver_version_available_params_v1_9_t.end.hpp"
SDK_VERIFY( struct wdf::driver_version_available_params_v1_9_t, 0xc );
