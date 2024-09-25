#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum INPUTDELEGATION_MODE_FLAGS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class inputdelegation_mode_flags_t : int32_t
    {                                                
        off =         0x0,                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        keyboard =    0x1,                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        spatial =     0x2,                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        valid_flags = 0x3,                             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
