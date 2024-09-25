#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/console_cursor_info_t.start.hpp"
namespace win
{
    // [struct _CONSOLE_CURSOR_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct console_cursor_info_t
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t dw_size;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 int32_t  b_visible;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bVisible
                                
        SDK_MAGIC_PROPERTIES( "_CONSOLE_CURSOR_INFO.$", 0x8, true, 0x930654d9ccbe075e );          
        SDK_FIXED_SIZE( console_cursor_info_t, 0x8 );          
    };                          
};
#include "magic/console_cursor_info_t.end.hpp"
SDK_VERIFY( struct win::console_cursor_info_t, 0x8 );
