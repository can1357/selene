#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum _tagOIBDG_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class oibdg_flags_t : int32_t
    {                                 
        apartmentthreaded = 0x100,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dataonly =          0x1000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                
};
