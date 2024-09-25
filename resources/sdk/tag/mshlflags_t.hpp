#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagMSHLFLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mshlflags_t : int32_t
    {                               
        normal =      0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tablestrong = 0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tableweak =   0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        noping =      0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved1 =   0x8,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved2 =   0x10,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved3 =   0x20,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved4 =   0x40,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
