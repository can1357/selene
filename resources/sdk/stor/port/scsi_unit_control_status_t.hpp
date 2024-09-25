#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _SCSI_UNIT_CONTROL_STATUS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class scsi_unit_control_status_t : int32_t
    {                                              
        success =      0x0,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unsuccessful = 0x1,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
