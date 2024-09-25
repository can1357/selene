#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum JOB_OBJECT_NET_RATE_CONTROL_FLAGS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class job_object_net_rate_control_flags_t : int32_t
    {                                                       
        enable =        0x1,                                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_bandwidth = 0x2,                                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dscp_tag =      0x4,                                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        valid_flags =   0x7,                                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
