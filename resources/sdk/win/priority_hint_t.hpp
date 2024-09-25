#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PRIORITY_HINT]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class priority_hint_t : int32_t       
    {                                          
        io_priority_hint_very_low =     0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_priority_hint_low =          0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_priority_hint_normal =       0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_io_priority_hint_type = 0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
