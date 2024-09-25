#pragma once
#include <sdkgen/support_library.hpp>

namespace po
{
    // [enum _PO_CS_DEVICE_NOTIFICATION_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cs_device_notification_type_t : int32_t
    {                                                 
        storage =  0x0,                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wi_fi =    0x1,                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mbn =      0x2,                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        audio =    0x3,                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ethernet = 0x4,                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum =  0x5,                                 // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
