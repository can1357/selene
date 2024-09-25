#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_USB_REQUEST_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class usb_request_type_t : int32_t
    {                                      
        invalid =                 0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_format =               0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_string =           0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_control_transfer = 0x3,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_urb =              0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pipe_write =              0x5,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pipe_read =               0x6,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pipe_abort =              0x7,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pipe_reset =              0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pipe_urb =                0x9,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
