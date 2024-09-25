#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_IO_FORWARD_PROGRESS_ACTION]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class io_forward_progress_action_t : int32_t
    {                                                
        invalid =              0x0,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fail_request =         0x1,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        use_reserved_request = 0x2,                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
