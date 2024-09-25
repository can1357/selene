#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SC_ACTION_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sc_action_type_t : int32_t
    {                                    
        none =        0x0,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        restart =     0x1,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reboot =      0x2,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        run_command = 0x3,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        own_restart = 0x4,                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
