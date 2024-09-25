#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagPOINTER_DEVICE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pointer_device_type_t : int32_t
    {                                         
        integrated_pen = 0x1,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        external_pen =   0x2,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        touch =          0x3,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        touch_pad =      0x4,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =            0xff,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
