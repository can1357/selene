#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagBIND_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class bind_flags_t : int32_t
    {                                
        maybotheruser =     0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        justtestexistence = 0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
