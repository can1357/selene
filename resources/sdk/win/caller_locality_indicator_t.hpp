#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CallerLocalityIndicator]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class caller_locality_indicator_t : int32_t
    {                                               
        direct =    0x0,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inproc =    0x1,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        outofproc = 0x2,                              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
