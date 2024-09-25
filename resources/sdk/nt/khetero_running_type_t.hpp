#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KHETERO_RUNNING_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class khetero_running_type_t : int32_t
    {                                          
        short_running =    0x0,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        long_running =     0x1,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        running_type_max = 0x2,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
