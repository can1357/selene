#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_MEMORY_HIGHLOW]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class memory_highlow_t : int32_t
    {                                    
        high =     0x0,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        low =      0x1,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        high_low = 0x2,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
