#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cs_frame_t.start.hpp"
namespace win
{
    // [struct CsFrame]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cs_frame_t           
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint64_t saved_r10;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SavedR10
        _m01 uint64_t saved_r11;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SavedR11
                                
        SDK_MAGIC_PROPERTIES( "CsFrame.$", 0x10, true, 0xdd4a9540bf5f104 );          
        SDK_FIXED_SIZE( cs_frame_t, 0x10 );          
    };                          
};
#include "magic/cs_frame_t.end.hpp"
SDK_VERIFY( struct win::cs_frame_t, 0x10 );
