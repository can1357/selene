#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wglswap_t.start.hpp"
namespace win
{
    struct hdc_t;

    // [struct _WGLSWAP]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wglswap_t                     
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                               
        _m00 struct win::hdc_t* hdc;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .hdc
        _m01 uint32_t           ui_flags;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .uiFlags
                                         
        SDK_NONVOL_PROPERTIES( "_WGLSWAP.$", 0x10, true, 0xaf901c930febaf38 );         
        SDK_FIXED_SIZE( wglswap_t, 0x10 );         
    };                                   
};
#include "magic/wglswap_t.end.hpp"
SDK_VERIFY( struct win::wglswap_t, 0x10 );
