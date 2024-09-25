#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iconinfo_t.start.hpp"
namespace win
{
    struct hbitmap_t;

    // [struct _ICONINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iconinfo_t                         
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                    
        _m00 int32_t                f_icon;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fIcon
        _m01 uint32_t               x_hotspot;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .xHotspot
        _m02 uint32_t               y_hotspot;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .yHotspot
        _m03 struct win::hbitmap_t* hbm_mask;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hbmMask
        _m04 struct win::hbitmap_t* hbm_color;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hbmColor
                                              
        SDK_MAGIC_PROPERTIES( "_ICONINFO.$", 0x20, true, 0xa1e047cc6f8bbb52 );          
        SDK_FIXED_SIZE( iconinfo_t, 0x20 );          
    };                                        
};
#include "magic/iconinfo_t.end.hpp"
SDK_VERIFY( struct win::iconinfo_t, 0x20 );
