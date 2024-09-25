#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _DUMP_CONTROL_CODE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dump_control_code_t : int32_t
    {                                       
        unknown =                 0x0,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_on =                0x1,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        prepare =                 0x2,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        prepare_complete =        0x3,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        start =                   0x4,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        start_complete =          0x5,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_io_size =             0x6,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        cleanup =                 0x7,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        get_device_internal_log = 0x8,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                     0x9,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
