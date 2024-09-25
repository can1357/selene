#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum INPUT_SPACE_REGION_FLAGS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class input_space_region_flags_t : int32_t
    {                                              
        none =        0x0,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        primary =     0x1,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        display =     0x2,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        display_gap = 0x4,                           // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
