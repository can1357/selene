#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/exit_thread_debug_info_t.start.hpp"
namespace win
{
    // [struct _EXIT_THREAD_DEBUG_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct exit_thread_debug_info_t
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t dw_exit_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .dwExitCode
                                   
        SDK_NONVOL_PROPERTIES( "_EXIT_THREAD_DEBUG_INFO.$", 0x4, true, 0x9aef0980ff5393ae );             
        SDK_FIXED_SIZE( exit_thread_debug_info_t, 0x4 );             
    };                             
};
#include "magic/exit_thread_debug_info_t.end.hpp"
SDK_VERIFY( struct win::exit_thread_debug_info_t, 0x4 );
