#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum DX_FEATURE_LEVEL]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dx_feature_level_t : int32_t
    {                                      
        level_unspecified = 0x0,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        level_9 =           0x1,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        level_10 =          0x2,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        level_11 =          0x3,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
