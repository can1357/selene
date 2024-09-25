#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum ACTIVATION_OBJECT_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class activation_object_state_t : int32_t
    {                                             
        none =             0x0,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled =          0x1,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        suppress_spatial = 0x2,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        foreground =       0x4,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
