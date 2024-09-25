#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxHandleFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class handle_flags_t : int32_t
    {                                  
        is_offset = 0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mask =      0x7,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
