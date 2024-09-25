#pragma once
#include <sdkgen/support_library.hpp>
#include "coord_t.hpp"
#include "small_rect_t.hpp"

#include "magic/console_screen_buffer_infoex_t.start.hpp"
namespace win
{
    // [struct _CONSOLE_SCREEN_BUFFER_INFOEX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct console_screen_buffer_infoex_t                    
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                   
        _m00 uint32_t                 cb_size;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 struct win::coord_t      dw_size;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwSize
        _m02 struct win::coord_t      dw_cursor_position;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwCursorPosition
        _m03 uint16_t                 w_attributes;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .wAttributes
        _m04 struct win::small_rect_t sr_window;               //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .srWindow
        _m05 struct win::coord_t      dw_maximum_window_size;  //{ +0x0016    +0x0016    +0x0016    +0x0016    } | .dwMaximumWindowSize
        _m06 uint16_t                 w_popup_attributes;      //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .wPopupAttributes
        _m07 int32_t                  b_fullscreen_supported;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .bFullscreenSupported
        _m08 sdk::array<uint32_t, 16> color_table;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ColorTable
                                                             
        SDK_MAGIC_PROPERTIES( "_CONSOLE_SCREEN_BUFFER_INFOEX.$", 0x60, true, 0x29b176f0d7d4a828 );                       
        SDK_FIXED_SIZE( console_screen_buffer_infoex_t, 0x60 );                       
    };                                                       
};
#include "magic/console_screen_buffer_infoex_t.end.hpp"
SDK_VERIFY( struct win::console_screen_buffer_infoex_t, 0x60 );
