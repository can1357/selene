#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rawinputdevicelist_t.start.hpp"
namespace tag
{
    // [struct tagRAWINPUTDEVICELIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rawinputdevicelist_t
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 void*    h_device;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hDevice
        _m01 uint32_t dw_type;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwType
                               
        SDK_MAGIC_PROPERTIES( "tagRAWINPUTDEVICELIST.$", 0x10, true, 0xefc58b4f37dd0ac2 );         
        SDK_FIXED_SIZE( rawinputdevicelist_t, 0x10 );         
    };                         
};
#include "magic/rawinputdevicelist_t.end.hpp"
SDK_VERIFY( struct tag::rawinputdevicelist_t, 0x10 );
