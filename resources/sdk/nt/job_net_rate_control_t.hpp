#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _JOB_NET_RATE_CONTROL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct job_net_rate_control_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "_JOB_NET_RATE_CONTROL.$", 0x0, true, 0xb43f37b566d1cb62 );
        SDK_FIXED_SIZE( job_net_rate_control_t, 0x0 );
    };                           
};
SDK_VERIFY( struct nt::job_net_rate_control_t, 0x0 );
