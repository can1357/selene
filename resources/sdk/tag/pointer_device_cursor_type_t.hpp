#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagPOINTER_DEVICE_CURSOR_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pointer_device_cursor_type_t : int32_t
    {                                                
        unknown = 0x0,                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tip =     0x1,                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        eraser =  0x2,                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =     0xff,                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
