#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/composite_device_capabilities_t.start.hpp"
namespace wdf
{
    // [struct _COMPOSITE_DEVICE_CAPABILITIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct composite_device_capabilities_t       
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                       
        _m00 uint1_t capability_function_suspend;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CapabilityFunctionSuspend
                                                 
        SDK_MAGIC_PROPERTIES( "_COMPOSITE_DEVICE_CAPABILITIES.$", 0x4, true, 0xb0520a4a1298e209 );                            
        SDK_FIXED_SIZE( composite_device_capabilities_t, 0x4 );                            
    };                                           
};
#include "magic/composite_device_capabilities_t.end.hpp"
SDK_VERIFY( struct wdf::composite_device_capabilities_t, 0x4 );
