#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iconinfoexa_t.start.hpp"
namespace win
{
    struct hbitmap_t;

    // [struct _ICONINFOEXA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iconinfoexa_t                        
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint32_t               cb_size;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 int32_t                f_icon;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .fIcon
        _m02 uint32_t               x_hotspot;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .xHotspot
        _m03 uint32_t               y_hotspot;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .yHotspot
        _m04 struct win::hbitmap_t* hbm_mask;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hbmMask
        _m05 struct win::hbitmap_t* hbm_color;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hbmColor
        _m06 uint16_t               w_res_id;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .wResID
        _m07 sdk::array<char, 260>  sz_mod_name;  //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .szModName
        _m08 sdk::array<char, 260>  sz_res_name;  //{ +0x0126    +0x0126    +0x0126    +0x0126    } | .szResName
                                                
        SDK_MAGIC_PROPERTIES( "_ICONINFOEXA.$", 0x230, true, 0x89a12462979ce596 );            
        SDK_FIXED_SIZE( iconinfoexa_t, 0x230 );            
    };                                          
};
#include "magic/iconinfoexa_t.end.hpp"
SDK_VERIFY( struct win::iconinfoexa_t, 0x230 );
