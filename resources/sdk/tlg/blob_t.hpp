#pragma once
#include <sdkgen/support_library.hpp>

namespace tlg
{
    // [enum _TlgBlob_t]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class blob_t : int32_t
    {                          
        none =      0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        end =       0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        provider =  0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event3 =    0x3,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        provider3 = 0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event2 =    0x5,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event4 =    0x6,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =     0x6,         // Windows 10 v1607
        max =       0x7,         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                         
};
