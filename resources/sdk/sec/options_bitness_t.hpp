#pragma once
#include <sdkgen/support_library.hpp>

namespace sec
{
    // [enum _SecurityOptionsBitness]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class options_bitness_t : int32_t
    {                                     
        current_bitness = 0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wow6432_bitness = 0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wow6464_bitness = 0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
