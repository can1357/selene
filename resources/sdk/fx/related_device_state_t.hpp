#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxRelatedDeviceState]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class related_device_state_t : int32_t
    {                                          
        unspecified =          0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        needs_report_present = 0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reported_present =     0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        needs_report_missing = 0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
