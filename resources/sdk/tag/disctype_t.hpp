#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagDISCTYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class disctype_t : int32_t
    {                              
        normal =      0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        release =     0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        application = 0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        uninit =      0x8,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rundown =     0x10,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system =      0x20,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
