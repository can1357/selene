#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [enum wil_FeatureStage]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class feature_stage_t : int32_t
    {                                   
        always_disabled =     0x0,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        disabled_by_default = 0x1,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled_by_default =  0x2,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        always_enabled =      0x3,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
