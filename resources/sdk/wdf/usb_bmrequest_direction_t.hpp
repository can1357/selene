#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_USB_BMREQUEST_DIRECTION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class usb_bmrequest_direction_t : int32_t
    {                                             
        host_to_device = 0x0,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_to_host = 0x1,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
