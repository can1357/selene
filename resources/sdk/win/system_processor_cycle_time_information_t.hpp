#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_processor_cycle_time_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_processor_cycle_time_information_t
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint64_t cycle_time;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CycleTime
                                                    
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION.$", 0x8, true, 0xceafdf47a275fc3f );           
        SDK_FIXED_SIZE( system_processor_cycle_time_information_t, 0x8 );           
    };                                              
};
#include "magic/system_processor_cycle_time_information_t.end.hpp"
SDK_VERIFY( struct win::system_processor_cycle_time_information_t, 0x8 );
