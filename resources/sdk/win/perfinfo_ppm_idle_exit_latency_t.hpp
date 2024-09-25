#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_ppm_idle_exit_latency_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PPM_IDLE_EXIT_LATENCY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_ppm_idle_exit_latency_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t flags;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t platform_state;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PlatformState
        _m02 uint32_t processor_state;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcessorState
        _m03 uint32_t return_latency;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ReturnLatency
        _m04 uint32_t total_latency;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TotalLatency
                                           
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PPM_IDLE_EXIT_LATENCY.$", 0x14, true, 0x9610061edbf914a7 );                
        SDK_FIXED_SIZE( perfinfo_ppm_idle_exit_latency_t, 0x14 );                
    };                                     
};
#include "magic/perfinfo_ppm_idle_exit_latency_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_ppm_idle_exit_latency_t, 0x14 );
