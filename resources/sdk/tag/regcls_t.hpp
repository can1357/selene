#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagREGCLS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class regcls_t : int32_t
    {                            
        singleuse =      0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        multipleuse =    0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        multi_separate = 0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        suspended =      0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        surrogate =      0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        agile =          0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                           
};
