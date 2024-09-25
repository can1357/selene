#pragma once
#include <sdkgen/support_library.hpp>

namespace clfs
{
    // [enum _CLFS_MGMT_NOTIFICATION_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mgmt_notification_type_t : int32_t
    {                                            
        advance_tail_notification =     0x0,       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        log_full_handler_notification = 0x1,       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        log_unpinned_notification =     0x2,       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        log_write_notification =        0x3,       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
