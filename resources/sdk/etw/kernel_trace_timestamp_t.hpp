#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kernel_trace_timestamp_t.start.hpp"
namespace etw
{
    // [struct _ETW_KERNEL_TRACE_TIMESTAMP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kernel_trace_timestamp_t                         
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                  
        _m00 sdk::array<int64_t, 2> kernel_trace_time_stamp;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KernelTraceTimeStamp
                                                            
        SDK_MAGIC_PROPERTIES( "_ETW_KERNEL_TRACE_TIMESTAMP.$", 0x20, true, 0xaccc96a992155ab );                        
        SDK_DYNAMIC_SIZE( kernel_trace_timestamp_t );                        
    };                                                      
};
#include "magic/kernel_trace_timestamp_t.end.hpp"
