#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WdfUsbTargetDeviceSelectSettingType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class usb_target_device_select_setting_type_t : int32_t
    {                                                           
        descriptor = 0x10,                                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        setting =    0x11,                                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        urb =        0x12,                                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                          
};
