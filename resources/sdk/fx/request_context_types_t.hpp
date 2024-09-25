#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxRequestContextTypes]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class request_context_types_t : int32_t
    {                                           
        request_context_type_none = 0x0,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rct_io =                    0x1,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rct_internal_ioctl_others = 0x2,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rct_usb_pipe_xfer =         0x10,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rct_usb_urb_request =       0x11,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rct_usb_pipe_request =      0x12,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rct_usb_control_request =   0x13,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rct_usb_string_request =    0x14,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
