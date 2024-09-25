#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _REG_ACTION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class reg_action_t : int32_t
    {                                
        added =    0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        removed =  0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        modified = 0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
