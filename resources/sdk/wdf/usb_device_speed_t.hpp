#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _USB_DEVICE_SPEED]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class usb_device_speed_t : int32_t
    {                                      
        low_speed =   0x0,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        full_speed =  0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        high_speed =  0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        super_speed = 0x3,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
