#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/clock_timer_configuration_t.start.hpp"
namespace hal
{
    // [struct _HAL_CLOCK_TIMER_CONFIGURATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct clock_timer_configuration_t       
    {                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint8_t  flags;                   //{ +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  always_on_timer;         //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .AlwaysOnTimer
        _m02 uint1_t  high_latency;            //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .HighLatency
        _m03 uint1_t  per_cpu_timer;           //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .PerCpuTimer
        _m04 uint1_t  dynamic_tick_supported;  //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .DynamicTickSupported
        _m05 uint32_t known_type;              //{ +0x0004    +0x0004    +0x0004    } | .KnownType
        _m06 uint32_t capabilities;            //{ +0x0008    +0x0008    +0x0008    } | .Capabilities
        _m07 uint64_t max_increment;           //{ +0x0010    +0x0010    +0x0010    } | .MaxIncrement
        _m08 uint32_t min_increment;           //{ +0x0018    +0x0018    +0x0018    } | .MinIncrement
                                             
        SDK_MAGIC_PROPERTIES( "_HAL_CLOCK_TIMER_CONFIGURATION.$", 0x20, true, 0x1022223ec5bebd09 );                       
        SDK_FIXED_SIZE( clock_timer_configuration_t, 0x20 );                       
    };                                       
};
#include "magic/clock_timer_configuration_t.end.hpp"
SDK_VERIFY( struct hal::clock_timer_configuration_t, 0x20 );
