#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagINPUT_MESSAGE_DEVICE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class input_message_device_type_t : int32_t
    {                                               
        unavailable = 0x0,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        keyboard =    0x1,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mouse =       0x2,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        touch =       0x4,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pen =         0x8,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        touchpad =    0x10,                           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
