#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class io_forward_progress_reserved_policy_t : int32_t
    {                                                         
        invalid_policy =                              0x0,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_policy_always_use_reserved_request = 0x1,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_policy_use_examine =                 0x2,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved_policy_paging_io =                   0x3,      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                        
};
