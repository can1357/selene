#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [enum wil_details_FeatureTestStateKind]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class details_feature_test_state_kind_t : int32_t
    {                                                     
        enabled_state = 0x0,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
        variant =       0x1,                                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                    
};
