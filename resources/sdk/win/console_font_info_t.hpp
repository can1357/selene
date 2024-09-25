#pragma once
#include <sdkgen/support_library.hpp>
#include "coord_t.hpp"

#include "magic/console_font_info_t.start.hpp"
namespace win
{
    // [struct _CONSOLE_FONT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct console_font_info_t                
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                    
        _m00 uint32_t            n_font;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .nFont
        _m01 struct win::coord_t dw_font_size;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFontSize
                                              
        SDK_MAGIC_PROPERTIES( "_CONSOLE_FONT_INFO.$", 0x8, true, 0x948b08797117d156 );             
        SDK_FIXED_SIZE( console_font_info_t, 0x8 );             
    };                                        
};
#include "magic/console_font_info_t.end.hpp"
SDK_VERIFY( struct win::console_font_info_t, 0x8 );
