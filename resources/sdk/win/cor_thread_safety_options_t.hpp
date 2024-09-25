#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorThreadSafetyOptions]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_thread_safety_options_t : int32_t
    {                                               
        _default = 0x0,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        off =      0x0,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        on =       0x1,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
