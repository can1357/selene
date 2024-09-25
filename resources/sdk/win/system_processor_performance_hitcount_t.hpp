#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_processor_performance_hitcount_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PROCESSOR_PERFORMANCE_HITCOUNT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_processor_performance_hitcount_t
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint64_t hits;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hits
        _m01 uint8_t  percent_frequency;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PercentFrequency
                                                  
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PROCESSOR_PERFORMANCE_HITCOUNT.$", 0x10, true, 0x69efc685485d635b );                  
        SDK_FIXED_SIZE( system_processor_performance_hitcount_t, 0x10 );                  
    };                                            
};
#include "magic/system_processor_performance_hitcount_t.end.hpp"
SDK_VERIFY( struct win::system_processor_performance_hitcount_t, 0x10 );
