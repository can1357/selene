#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _SCSI_ADAPTER_CONTROL_STATUS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class scsi_adapter_control_status_t : int32_t
    {                                                 
        success =      0x0,                             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unsuccessful = 0x1,                             // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        retry_needed = 0x2,                             // Windows 11
    };                                                
};
