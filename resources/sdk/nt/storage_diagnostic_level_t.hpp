#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_DIAGNOSTIC_LEVEL]
    //  WDK 10
    //
    enum class storage_diagnostic_level_t : int32_t
    {                                              
        _default = 0x0,                              // WDK 10
        max =      0x1,                              // WDK 10
    };                                             
};
