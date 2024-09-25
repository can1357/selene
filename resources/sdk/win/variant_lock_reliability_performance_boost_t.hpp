#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum Variant_LockReliability_PerformanceBoost]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class variant_lock_reliability_performance_boost_t : uint8_t
    {                                                                
        none =                  0x0,                                   // Windows 10 v2004, Windows 10 v20H2
        enable_cpu_boost =      0x1,                                   // Windows 10 v2004, Windows 10 v20H2
        enable_io_reservation = 0x2,                                   // Windows 10 v2004, Windows 10 v20H2
        feature_is_off =        0x3,                                   // Windows 10 v2004, Windows 10 v20H2
    };                                                               
};
