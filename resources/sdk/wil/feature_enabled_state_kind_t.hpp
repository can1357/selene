#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [enum wil_FeatureEnabledStateKind]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class feature_enabled_state_kind_t : int32_t
    {                                                
        all =        0x0,                              // Windows 10 v2004, Windows 10 v20H2
        service =    0x1,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user =       0x2,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        test =       0x3,                              // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enrollment = 0x4,                              // Windows 11
    };                                               
};
