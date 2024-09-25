#pragma once
#include <sdkgen/support_library.hpp>
#include "coord_t.hpp"

#include "magic/console_font_infoex_t.start.hpp"
namespace win
{
    // [struct _CONSOLE_FONT_INFOEX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct console_font_infoex_t                  
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                        
        _m00 uint32_t                cb_size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                n_font;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .nFont
        _m02 struct win::coord_t     dw_font_size;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwFontSize
        _m03 uint32_t                font_family;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .FontFamily
        _m04 uint32_t                font_weight;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FontWeight
        _m05 sdk::array<wchar_t, 32> face_name;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .FaceName
                                                  
        SDK_MAGIC_PROPERTIES( "_CONSOLE_FONT_INFOEX.$", 0x54, true, 0x8d508298e63cefc3 );             
        SDK_FIXED_SIZE( console_font_infoex_t, 0x54 );             
    };                                            
};
#include "magic/console_font_infoex_t.end.hpp"
SDK_VERIFY( struct win::console_font_infoex_t, 0x54 );
