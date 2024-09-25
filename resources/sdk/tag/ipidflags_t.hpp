#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagIPIDFLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ipidflags_t : int32_t      
    {                                     
        connecting =           0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disconnected =         0x2,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        serverentry =          0x4,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        noping =               0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        copy =                 0x10,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vacant =               0x80,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nonndrstub =           0x100,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nonndrproxy =          0x200,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        notifyact =            0x400,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tried_async =          0x800,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        async_server =         0x1000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deactivated =          0x2000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        weakrefcache =         0x4000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        strongrefcache =       0x8000,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unsecurecallsallowed = 0x10000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
