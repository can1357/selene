#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/driver_caps_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_DRIVER_CAPS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct driver_caps_t               
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t ul_major_version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulMajorVersion
        _m01 uint32_t ul_minor_version;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulMinorVersion
        _m02 uint32_t ul_driver_caps;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ulDriverCaps
                                       
        SDK_MAGIC_PROPERTIES( "_WWAN_DRIVER_CAPS.$", 0xc, true, 0xbd4b5e2d4d9c44be );                 
        SDK_FIXED_SIZE( driver_caps_t, 0xc );                 
    };                                 
};
#include "magic/driver_caps_t.end.hpp"
SDK_VERIFY( struct wwan::driver_caps_t, 0xc );
