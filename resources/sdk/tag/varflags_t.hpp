#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagVARFLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class varflags_t : int32_t  
    {                                
        freadonly =        0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fsource =          0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fbindable =        0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        frequestedit =     0x8,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fdisplaybind =     0x10,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fdefaultbind =     0x20,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fhidden =          0x40,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        frestricted =      0x80,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fdefaultcollelem = 0x100,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fuidefault =       0x200,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fnonbrowsable =    0x400,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        freplaceable =     0x800,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fimmediatebind =   0x1000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
