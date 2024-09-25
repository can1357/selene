#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _COPYFILE2_MESSAGE_ACTION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class copyfile2_message_action_t : int32_t
    {                                              
        _continue = 0x0,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancel =    0x1,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stop =      0x2,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        quiet =     0x3,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pause =     0x4,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
