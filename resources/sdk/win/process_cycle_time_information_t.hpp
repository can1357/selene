#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_cycle_time_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_CYCLE_TIME_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_cycle_time_information_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint64_t accumulated_cycles;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AccumulatedCycles
        _m01 uint64_t current_cycle_count;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentCycleCount
                                           
        SDK_MAGIC_PROPERTIES( "_PROCESS_CYCLE_TIME_INFORMATION.$", 0x10, true, 0xde2b6d7b424e4402 );                    
        SDK_FIXED_SIZE( process_cycle_time_information_t, 0x10 );                    
    };                                     
};
#include "magic/process_cycle_time_information_t.end.hpp"
SDK_VERIFY( struct win::process_cycle_time_information_t, 0x10 );
