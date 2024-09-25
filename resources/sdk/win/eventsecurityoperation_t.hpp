#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum EVENTSECURITYOPERATION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class eventsecurityoperation_t : int32_t
    {                                            
        set_dacl = 0x0,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_sacl = 0x1,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        add_dacl = 0x2,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        add_sacl = 0x3,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =      0x4,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
