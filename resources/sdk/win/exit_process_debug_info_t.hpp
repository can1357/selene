#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/exit_process_debug_info_t.start.hpp"
namespace win
{
    // [struct _EXIT_PROCESS_DEBUG_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct exit_process_debug_info_t
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t dw_exit_code;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .dwExitCode
                                    
        SDK_NONVOL_PROPERTIES( "_EXIT_PROCESS_DEBUG_INFO.$", 0x4, true, 0x1f62879302920293 );             
        SDK_FIXED_SIZE( exit_process_debug_info_t, 0x4 );             
    };                              
};
#include "magic/exit_process_debug_info_t.end.hpp"
SDK_VERIFY( struct win::exit_process_debug_info_t, 0x4 );
