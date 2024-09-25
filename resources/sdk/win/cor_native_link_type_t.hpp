#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorNativeLinkType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_native_link_type_t : int32_t
    {                                          
        none =      0x1,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ansi =      0x2,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unicode =   0x3,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _auto =     0x4,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ole =       0x5,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_value = 0x7,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
