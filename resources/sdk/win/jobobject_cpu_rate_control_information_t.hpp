#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jobobject_cpu_rate_control_information_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_CPU_RATE_CONTROL_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_cpu_rate_control_information_t
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t control_flags;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ControlFlags
        _m01 uint32_t cpu_rate;                      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CpuRate
        _m02 uint32_t weight;                        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Weight
        _m03 uint16_t min_rate;                      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MinRate
        _m04 uint16_t max_rate;                      //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .MaxRate
                                                   
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_CPU_RATE_CONTROL_INFORMATION.$", 0x8, true, 0xef163ea3a9b73cd );              
        SDK_FIXED_SIZE( jobobject_cpu_rate_control_information_t, 0x8 );              
    };                                             
};
#include "magic/jobobject_cpu_rate_control_information_t.end.hpp"
SDK_VERIFY( struct win::jobobject_cpu_rate_control_information_t, 0x8 );
