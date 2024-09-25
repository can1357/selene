#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagORT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ort_t : int32_t
    {                         
        unused =      0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        objref =      0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lazy_objref = 0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        agile =       0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lazy_agile =  0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stream =      0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        freetm =      0x32,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                        
};
