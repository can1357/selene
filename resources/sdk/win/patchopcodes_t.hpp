#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PATCHOPCODES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class patchopcodes_t : int32_t
    {                                  
        pend = 0x0,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        psaa = 0x1,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pwd =  0x2,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pnop = 0x3,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pmat = 0x4,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
