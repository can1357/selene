#pragma once
#include <sdkgen/support_library.hpp>
#include "composite_device_capabilities_t.hpp"

#include "magic/register_composite_device_t.start.hpp"
namespace wdf
{
    // [struct _REGISTER_COMPOSITE_DEVICE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct register_composite_device_t                                    
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                
        _m00 uint16_t                                    version;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t                                    size;              //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 struct wdf::composite_device_capabilities_t capability_flags;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CapabilityFlags
        _m03 uint32_t                                    function_count;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .FunctionCount
                                                                          
        SDK_MAGIC_PROPERTIES( "_REGISTER_COMPOSITE_DEVICE.$", 0x18, true, 0xdf2eb3a3bf846f4b );                 
        SDK_FIXED_SIZE( register_composite_device_t, 0x18 );                 
    };                                                                    
};
#include "magic/register_composite_device_t.end.hpp"
SDK_VERIFY( struct wdf::register_composite_device_t, 0x18 );
