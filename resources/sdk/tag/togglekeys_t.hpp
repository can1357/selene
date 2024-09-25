#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/togglekeys_t.start.hpp"
namespace tag
{
    // [struct tagTOGGLEKEYS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct togglekeys_t        
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t cb_size;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_flags;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
                               
        SDK_MAGIC_PROPERTIES( "tagTOGGLEKEYS.$", 0x8, true, 0x2ba0fc43f88f1ee6 );         
        SDK_FIXED_SIZE( togglekeys_t, 0x8 );         
    };                         
};
#include "magic/togglekeys_t.end.hpp"
SDK_VERIFY( struct tag::togglekeys_t, 0x8 );
