#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum PSS_PROCESS_FLAGS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pss_process_flags_t : int32_t
    {                                       
        none =        0x0,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        _protected =  0x1,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        wow64 =       0x2,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_03 = 0x4,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_04 = 0x8,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        frozen =      0x10,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
