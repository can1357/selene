#pragma once
#include <sdkgen/support_library.hpp>

namespace kd
{
    // [enum KD_CALLBACK_ACTION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class callback_action_t : int32_t     
    {                                          
        configure_device_and_continue = 0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        skip_device_and_continue =      0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        configure_device_and_stop =     0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        skip_device_and_stop =          0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
