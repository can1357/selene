#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxObjectDebugInfoFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class object_debug_info_flags_t : int32_t
    {                                             
        references =   0x1,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        object_count = 0x2,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
