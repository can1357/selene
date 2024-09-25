#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rawinputheader_t.start.hpp"
namespace tag
{
    // [struct tagRAWINPUTHEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rawinputheader_t    
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t dw_type;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwType
        _m01 uint32_t dw_size;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwSize
        _m02 void*    h_device;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hDevice
        _m03 uint64_t w_param;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .wParam
                               
        SDK_MAGIC_PROPERTIES( "tagRAWINPUTHEADER.$", 0x18, true, 0xb442f0ec67cce50c );         
        SDK_FIXED_SIZE( rawinputheader_t, 0x18 );         
    };                         
};
#include "magic/rawinputheader_t.end.hpp"
SDK_VERIFY( struct tag::rawinputheader_t, 0x18 );
