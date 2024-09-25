#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ThresholdAppLaunchPerfFeatureState]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class threshold_app_launch_perf_feature_state_t : int32_t
    {                                                             
        not_determined = 0x0,                                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled =        0x1,                                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled =       0x2,                                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                            
};
