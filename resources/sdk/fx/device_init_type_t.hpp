#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxDeviceInitType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_init_type_t : int32_t
    {                                      
        fdo =            0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pdo =            0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        control_device = 0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        companion =      0x3,                // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
