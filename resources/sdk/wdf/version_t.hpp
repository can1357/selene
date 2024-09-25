#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/version_t.start.hpp"
namespace wdf
{
    // [struct _WDF_VERSION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct version_t        
    {                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t major;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Major
        _m01 uint32_t minor;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Minor
        _m02 uint32_t build;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Build
                            
        SDK_NONVOL_PROPERTIES( "_WDF_VERSION.$", 0xc, true, 0x37077ec8fa50e7dd );      
        SDK_FIXED_SIZE( version_t, 0xc );      
    };                      
};
#include "magic/version_t.end.hpp"
SDK_VERIFY( struct wdf::version_t, 0xc );
