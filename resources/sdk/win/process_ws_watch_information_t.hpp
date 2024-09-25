#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_ws_watch_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_WS_WATCH_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_ws_watch_information_t
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                     
        _m00 void* faulting_pc;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FaultingPc
        _m01 void* faulting_va;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FaultingVa
                                         
        SDK_NONVOL_PROPERTIES( "_PROCESS_WS_WATCH_INFORMATION.$", 0x10, true, 0xf5020ef0a89b0de8 );            
        SDK_FIXED_SIZE( process_ws_watch_information_t, 0x10 );            
    };                                   
};
#include "magic/process_ws_watch_information_t.end.hpp"
SDK_VERIFY( struct win::process_ws_watch_information_t, 0x10 );
