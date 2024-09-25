#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagMKREDUCE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mkreduce_t : int32_t
    {                              
        all =         0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        throughuser = 0x10000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        touser =      0x20000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        one =         0x30000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
