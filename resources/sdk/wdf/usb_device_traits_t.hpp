#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_USB_DEVICE_TRAITS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class usb_device_traits_t : int32_t
    {                                       
        self_powered =        0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remote_wake_capable = 0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        at_high_speed =       0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
