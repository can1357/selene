#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagCallType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class call_type_t : int32_t
    {                               
        none =         0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        synccall =     0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        syncenter =    0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        syncleave =    0x3,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        syncreturn =   0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        begincall =    0x5,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        beginreturn =  0x6,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        beginenter =   0x7,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        beginleave =   0x8,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        finishenter =  0x9,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        finishleave =  0xa,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        finishcall =   0xb,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        finishreturn = 0xc,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
