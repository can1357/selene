#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _RM_REVOKE_ACTION]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rm_revoke_action_t : int32_t
    {                                      
        cancel =    0x0,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        terminate = 0x1,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        watson =    0x2,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        count =     0x3,                     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid =   0xff,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
