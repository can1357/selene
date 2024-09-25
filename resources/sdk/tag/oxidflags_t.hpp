#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagOXIDFLAGS]
    //  Windows 10 v1607
    //
    enum class oxidflags_t : int32_t     
    {                                    
        registered =        0x1,           // Windows 10 v1607
        machine_local =     0x2,           // Windows 10 v1607
        stopped =           0x4,           // Windows 10 v1607
        pendingrelease =    0x8,           // Windows 10 v1607
        rpcss =             0x10,          // Windows 10 v1607
        registeringoids =   0x20,          // Windows 10 v1607
        remoteinitialized = 0x200,         // Windows 10 v1607
        all =               0x22f,         // Windows 10 v1607
        mtastopped =        0x1000004,     // Windows 10 v1607
        ntastopped =        0x2000004,     // Windows 10 v1607
    };                                   
};
