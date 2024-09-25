#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/keybdinput_t.start.hpp"
namespace tag
{
    // [struct tagKEYBDINPUT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct keybdinput_t             
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint16_t w_vk;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .wVk
        _m01 uint16_t w_scan;         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .wScan
        _m02 uint32_t dw_flags;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m03 uint32_t time;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .time
        _m04 uint64_t dw_extra_info;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwExtraInfo
                                    
        SDK_MAGIC_PROPERTIES( "tagKEYBDINPUT.$", 0x18, true, 0x97947842c254a48 );              
        SDK_FIXED_SIZE( keybdinput_t, 0x18 );              
    };                              
};
#include "magic/keybdinput_t.end.hpp"
SDK_VERIFY( struct tag::keybdinput_t, 0x18 );
