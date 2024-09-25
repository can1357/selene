#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagCPFLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cpflags_t : int32_t
    {                             
        none =         0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        propagate =    0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        expose =       0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        envoy =        0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        monitorstub =  0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        monitorproxy = 0x10,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dontcompare =  0x20,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                            
};
