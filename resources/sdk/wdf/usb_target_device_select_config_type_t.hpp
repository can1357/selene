#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WdfUsbTargetDeviceSelectConfigType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class usb_target_device_select_config_type_t : int32_t
    {                                                          
        invalid =               0x0,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deconfig =              0x1,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        single_interface =      0x2,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        multi_interface =       0x3,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interfaces_pairs =      0x4,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interfaces_descriptor = 0x5,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        urb =                   0x6,                             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                         
};
