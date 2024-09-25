#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_WMI_PROVIDER_CONTROL]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wmi_provider_control_t : int32_t
    {                                          
        control_invalid =  0x0,                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        event_control =    0x1,                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        instance_control = 0x2,                  // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
