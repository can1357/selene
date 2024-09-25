#pragma once
#include <sdkgen/support_library.hpp>

namespace ki
{
    // [enum _KI_CALLBACK]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class callback_t : int32_t
    {                              
        callback_nmi =     0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        first_callback =   0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        callback_bound =   0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        //callback_count = 0x2,      // Windows 10 v1607
        callback_sx =      0x2,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        callback_count =   0x3,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
