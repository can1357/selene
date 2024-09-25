#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum PROFILE_DEPARTURE_STYLE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class profile_departure_style_t : int32_t
    {                                             
        _default =     0x1,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        on_remove =    0x2,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        on_interface = 0x3,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        on_eject =     0x4,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
