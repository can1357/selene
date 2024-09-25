#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _THDTYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class thdtype_t : int32_t
    {                             
        blockmessages =   0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        processmessages = 0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                            
};
