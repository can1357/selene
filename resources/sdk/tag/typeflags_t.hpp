#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagTYPEFLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class typeflags_t : int32_t
    {                               
        fappobject =     0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fcancreate =     0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        flicensed =      0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fpredeclid =     0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fhidden =        0x10,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fcontrol =       0x20,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fdual =          0x40,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fnonextensible = 0x80,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        foleautomation = 0x100,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        frestricted =    0x200,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        faggregatable =  0x400,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        freplaceable =   0x800,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fdispatchable =  0x1000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        freversebind =   0x2000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fproxy =         0x4000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                              
};
