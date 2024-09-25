#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SharedVirtualDiskHandleState]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class shared_virtual_disk_handle_state_t : int32_t
    {                                                      
        none =          0x0,                                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_shared =   0x1,                                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        handle_shared = 0x3,                                 // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
