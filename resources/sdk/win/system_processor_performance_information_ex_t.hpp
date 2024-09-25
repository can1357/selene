#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_processor_performance_information_ex_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_processor_performance_information_ex_t
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 int64_t  idle_time;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IdleTime
        _m01 int64_t  kernel_time;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KernelTime
        _m02 int64_t  user_time;                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UserTime
        _m03 int64_t  dpc_time;                           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DpcTime
        _m04 int64_t  interrupt_time;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .InterruptTime
        _m05 uint32_t interrupt_count;                    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .InterruptCount
        _m06 int64_t  available_time;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .AvailableTime
                                                        
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PROCESSOR_PERFORMANCE_INFORMATION_EX.$", 0x48, true, 0x1bd019dc5bc329b0 );                
        SDK_FIXED_SIZE( system_processor_performance_information_ex_t, 0x48 );                
    };                                                  
};
#include "magic/system_processor_performance_information_ex_t.end.hpp"
SDK_VERIFY( struct win::system_processor_performance_information_ex_t, 0x48 );
