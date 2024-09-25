#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_processor_cycle_stats_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PROCESSOR_CYCLE_STATS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_processor_cycle_stats_information_t      
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                 
        _m00 sdk::array<sdk::array<uint64_t, 2>, 4> cycles;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Cycles
                                                           
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PROCESSOR_CYCLE_STATS_INFORMATION.$", 0x40, true, 0xdf086528f0bfeb8f );       
        SDK_FIXED_SIZE( system_processor_cycle_stats_information_t, 0x40 );       
    };                                                     
};
#include "magic/system_processor_cycle_stats_information_t.end.hpp"
SDK_VERIFY( struct win::system_processor_cycle_stats_information_t, 0x40 );
