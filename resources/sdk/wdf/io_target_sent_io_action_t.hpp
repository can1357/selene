#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_IO_TARGET_SENT_IO_ACTION]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class io_target_sent_io_action_t : int32_t
    {                                              
        sent_io_undefined =            0x0,          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancel_sent_io =               0x1,          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wait_for_sent_io_to_complete = 0x2,          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        leave_sent_io_pending =        0x3,          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
