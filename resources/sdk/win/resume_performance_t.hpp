#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resume_performance_t.start.hpp"
namespace win
{
    // [struct _RESUME_PERFORMANCE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct resume_performance_t                 
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint32_t post_time_ms;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PostTimeMs
        _m01 uint64_t total_resume_time_ms;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalResumeTimeMs
        _m02 uint64_t resume_complete_timestamp;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ResumeCompleteTimestamp
                                                
        SDK_NONVOL_PROPERTIES( "_RESUME_PERFORMANCE.$", 0x18, true, 0x154d06e48e9758ef );                          
        SDK_FIXED_SIZE( resume_performance_t, 0x18 );                          
    };                                          
};
#include "magic/resume_performance_t.end.hpp"
SDK_VERIFY( struct win::resume_performance_t, 0x18 );
