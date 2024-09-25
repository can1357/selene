#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_handle_tracing_enable_t.start.hpp"
namespace win
{
    // [struct _PROCESS_HANDLE_TRACING_ENABLE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_handle_tracing_enable_t
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t flags;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
                                          
        SDK_NONVOL_PROPERTIES( "_PROCESS_HANDLE_TRACING_ENABLE.$", 0x4, true, 0x71cd118aa07c40e9 );      
        SDK_FIXED_SIZE( process_handle_tracing_enable_t, 0x4 );      
    };                                    
};
#include "magic/process_handle_tracing_enable_t.end.hpp"
SDK_VERIFY( struct win::process_handle_tracing_enable_t, 0x4 );
