#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/console_history_info_t.start.hpp"
namespace win
{
    // [struct _CONSOLE_HISTORY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct console_history_info_t               
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint32_t cb_size;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t history_buffer_size;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .HistoryBufferSize
        _m02 uint32_t number_of_history_buffers;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfHistoryBuffers
        _m03 uint32_t dw_flags;                   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwFlags
                                                
        SDK_MAGIC_PROPERTIES( "_CONSOLE_HISTORY_INFO.$", 0x10, true, 0xbd7b711ede6fefd8 );                          
        SDK_FIXED_SIZE( console_history_info_t, 0x10 );                          
    };                                          
};
#include "magic/console_history_info_t.end.hpp"
SDK_VERIFY( struct win::console_history_info_t, 0x10 );
