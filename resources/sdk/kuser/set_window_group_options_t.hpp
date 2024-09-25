#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum SET_WINDOW_GROUP_OPTIONS]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class set_window_group_options_t : int32_t
    {                                              
        none =             0x0,                      // Windows 10 v2004, Windows 10 v20H2
        _template =        0x1,                      // Windows 10 v2004, Windows 10 v20H2
        nozorder =         0x2,                      // Windows 10 v2004, Windows 10 v20H2
        all =              0x3,                      // Windows 10 v2004, Windows 10 v20H2
        respect_minimize = 0x4,                      // Windows 10 v2004, Windows 10 v20H2
    };                                             
};
