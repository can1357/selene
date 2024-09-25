#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _JOB_CPU_RATE_CONTROL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct job_cpu_rate_control_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "_JOB_CPU_RATE_CONTROL.$", 0x0, true, 0x9e4803679deafecb );
        SDK_FIXED_SIZE( job_cpu_rate_control_t, 0x0 );
    };                           
};
SDK_VERIFY( struct nt::job_cpu_rate_control_t, 0x0 );
