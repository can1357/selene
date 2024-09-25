#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum Variant_TabShellAutoTabbingPreference]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class variant_tab_shell_auto_tabbing_preference_t : uint8_t
    {                                                               
        none =       0x0,                                             // Windows 10 v2004, Windows 10 v20H2
        new_window = 0x1,                                             // Windows 10 v2004, Windows 10 v20H2
        new_tab =    0x2,                                             // Windows 10 v2004, Windows 10 v20H2
    };                                                              
};
