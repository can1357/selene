#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_USB_PIPE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class usb_pipe_type_t : int32_t
    {                                   
        invalid =     0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        control =     0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        isochronous = 0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bulk =        0x3,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interrupt =   0x4,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
