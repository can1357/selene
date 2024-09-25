#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum RdType]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class rd_type_t : uint8_t      
    {                                   
        object =                0x10,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        control_down_device =   0x11,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        contol_driver_manager = 0x12,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        fdo =                   0x13,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
