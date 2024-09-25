#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagDATADIR]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class datadir_t : int32_t
    {                             
        get = 0x1,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set = 0x2,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                            
};
