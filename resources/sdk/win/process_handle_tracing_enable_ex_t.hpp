#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_handle_tracing_enable_ex_t.start.hpp"
namespace win
{
    // [struct _PROCESS_HANDLE_TRACING_ENABLE_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_handle_tracing_enable_ex_t
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t flags;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t total_slots;             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .TotalSlots
                                             
        SDK_NONVOL_PROPERTIES( "_PROCESS_HANDLE_TRACING_ENABLE_EX.$", 0x8, true, 0x54e764a521ef051f );            
        SDK_FIXED_SIZE( process_handle_tracing_enable_ex_t, 0x8 );            
    };                                       
};
#include "magic/process_handle_tracing_enable_ex_t.end.hpp"
SDK_VERIFY( struct win::process_handle_tracing_enable_ex_t, 0x8 );
