#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum _FX_URB_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class urb_type_t : uint8_t
    {                              
        legacy =         0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        usbd_allocated = 0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                             
};
