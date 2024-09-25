#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PERFINFO_CCSWAP_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class perfinfo_ccswap_type_t : int32_t
    {                                          
        idle_short = 0x0,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        idle =       0x1,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lite =       0x2,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        full =       0x3,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
