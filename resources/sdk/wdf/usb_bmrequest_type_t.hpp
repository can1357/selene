#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_USB_BMREQUEST_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class usb_bmrequest_type_t : int32_t
    {                                        
        standard = 0x0,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _class =   0x1,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vendor =   0x2,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
