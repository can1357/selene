#pragma once
#include <sdkgen/support_library.hpp>

namespace power
{
    // [enum POWER_STATE_HANDLER_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class state_handler_type_t : int32_t
    {                                        
        sleeping1 =          0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping2 =          0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping3 =          0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping4 =          0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shutdown_off =       0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shutdown_reset =     0x5,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleeping4_firmware = 0x6,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =            0x7,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
