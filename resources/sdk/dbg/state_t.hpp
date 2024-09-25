#pragma once
#include <sdkgen/support_library.hpp>

namespace dbg
{
    // [enum _DBG_STATE]
    //  WDK 10
    //
    enum class state_t : int32_t             
    {                                        
        idle =                        0x0,     // WDK 10
        reply_pending =               0x1,     // WDK 10
        create_thread_state_change =  0x2,     // WDK 10
        create_process_state_change = 0x3,     // WDK 10
        exit_thread_state_change =    0x4,     // WDK 10
        exit_process_state_change =   0x5,     // WDK 10
        exception_state_change =      0x6,     // WDK 10
        breakpoint_state_change =     0x7,     // WDK 10
        single_step_state_change =    0x8,     // WDK 10
        load_dll_state_change =       0x9,     // WDK 10
        unload_dll_state_change =     0xa,     // WDK 10
    };                                       
};
