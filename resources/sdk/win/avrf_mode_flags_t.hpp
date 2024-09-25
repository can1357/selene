#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _AVRF_MODE_FLAGS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class avrf_mode_flags_t : int32_t
    {                                     
        disabled =    0x0,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        enabled =     0x1,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        mitigations = 0x2,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
