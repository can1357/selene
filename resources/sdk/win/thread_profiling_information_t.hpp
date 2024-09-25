#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct thread_performance_data_t; }

#include "magic/thread_profiling_information_t.start.hpp"
namespace win
{
    // [struct _THREAD_PROFILING_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_profiling_information_t                            
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                           
        _m00 uint64_t                              hardware_counters;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HardwareCounters
        _m01 uint32_t                              flags;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m02 uint32_t                              enable;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Enable
        _m03 struct nt::thread_performance_data_t* performance_data;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PerformanceData
                                                                     
        SDK_MAGIC_PROPERTIES( "_THREAD_PROFILING_INFORMATION.$", 0x18, true, 0x8fac1e0ff7adde99 );                  
        SDK_FIXED_SIZE( thread_profiling_information_t, 0x18 );                  
    };                                                               
};
#include "magic/thread_profiling_information_t.end.hpp"
SDK_VERIFY( struct win::thread_profiling_information_t, 0x18 );
