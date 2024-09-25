#pragma once
#include <sdkgen/support_library.hpp>

namespace etw
{
    // [enum _ETW_HEADER_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    enum class header_type_t : int32_t
    {                                 
        native = 0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        wow =    0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        max =    0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    };                                
};
