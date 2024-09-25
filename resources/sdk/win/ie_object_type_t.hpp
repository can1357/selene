#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum IEObjectType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ie_object_type_t : int32_t
    {                                    
        event =          0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mutex =          0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        semaphore =      0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shared_memory =  0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waitable_timer = 0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file =           0x5,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        named_pipe =     0x6,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        registry =       0x7,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
