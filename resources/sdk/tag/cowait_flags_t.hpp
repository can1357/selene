#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagCOWAIT_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cowait_flags_t : int32_t    
    {                                      
        _default =                 0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        waitall =                  0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        alertable =                0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        inputavailable =           0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dispatch_calls =           0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dispatch_window_messages = 0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
