#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CWMO_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cwmo_flags_t : int32_t     
    {                                     
        _default =                 0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dispatch_calls =           0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dispatch_window_messages = 0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
