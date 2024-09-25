#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/job_set_query_cpu_rate_t.start.hpp"
namespace wmi
{
    // [struct _WMI_JOB_SET_QUERY_CPU_RATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct job_set_query_cpu_rate_t
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t all_flags;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AllFlags
        _m01 uint32_t value;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Value
                                   
        SDK_MAGIC_PROPERTIES( "_WMI_JOB_SET_QUERY_CPU_RATE.$", 0x8, true, 0x44f31ab183dc567 );          
        SDK_FIXED_SIZE( job_set_query_cpu_rate_t, 0x8 );          
    };                             
};
#include "magic/job_set_query_cpu_rate_t.end.hpp"
SDK_VERIFY( struct wmi::job_set_query_cpu_rate_t, 0x8 );
