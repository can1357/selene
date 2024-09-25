#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SharedVirtualDiskSupportType]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class shared_virtual_disk_support_type_t : int32_t
    {                                                      
        s_unsupported =           0x0,                       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        s_supported =             0x1,                       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        snapshots_supported =     0x3,                       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cdp_snapshots_supported = 0x7,                       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
