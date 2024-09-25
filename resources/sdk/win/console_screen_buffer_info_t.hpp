#pragma once
#include <sdkgen/support_library.hpp>
#include "coord_t.hpp"
#include "small_rect_t.hpp"

#include "magic/console_screen_buffer_info_t.start.hpp"
namespace win
{
    // [struct _CONSOLE_SCREEN_BUFFER_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct console_screen_buffer_info_t                      
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                   
        _m00 struct win::coord_t      dw_size;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 struct win::coord_t      dw_cursor_position;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwCursorPosition
        _m02 uint16_t                 w_attributes;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .wAttributes
        _m03 struct win::small_rect_t sr_window;               //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .srWindow
        _m04 struct win::coord_t      dw_maximum_window_size;  //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .dwMaximumWindowSize
                                                             
        SDK_MAGIC_PROPERTIES( "_CONSOLE_SCREEN_BUFFER_INFO.$", 0x16, true, 0xd8c1481d3a934586 );                       
        SDK_FIXED_SIZE( console_screen_buffer_info_t, 0x16 );                       
    };                                                       
};
#include "magic/console_screen_buffer_info_t.end.hpp"
SDK_VERIFY( struct win::console_screen_buffer_info_t, 0x16 );
