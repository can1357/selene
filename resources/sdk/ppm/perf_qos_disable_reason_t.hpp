#pragma once
#include <sdkgen/support_library.hpp>

namespace ppm
{
    // [enum _PPM_PERF_QOS_DISABLE_REASON]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class perf_qos_disable_reason_t : int32_t
    {                                             
        internal =            0x0,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_profile =          0x1,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_policy =           0x2,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        insufficient_policy = 0x3,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_override =        0x4,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        low_latency =         0x5,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        smt_scheduler =       0x6,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_hardware_support = 0x7,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        group_policy =        0x8,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                 0x9,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
