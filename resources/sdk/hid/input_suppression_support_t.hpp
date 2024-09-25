#pragma once
#include <sdkgen/support_library.hpp>

namespace hid
{
    // [enum _INPUT_SUPPRESSION_SUPPORT]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class input_suppression_support_t : int32_t
    {                                               
        none =                   0x0,                 // Windows 10 v2004, Windows 10 v20H2
        enabled =                0x1,                 // Windows 10 v2004, Windows 10 v20H2
        disabled_not_whitelist = 0x2,                 // Windows 10 v2004, Windows 10 v20H2
        disabled_blacklist =     0x3,                 // Windows 10 v2004, Windows 10 v20H2
    };                                              
};
