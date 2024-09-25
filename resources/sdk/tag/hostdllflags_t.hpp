#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagHOSTDLLFLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class hostdllflags_t : int32_t 
    {                                   
        singlethreaded =       0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        apartmentthreaded =    0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        multithreaded =        0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        neutralthreaded =      0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hosttypemask =         0x1f,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activatorinitialized = 0x20,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mtainitialized =       0x40,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shuttingdown =         0x100,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
