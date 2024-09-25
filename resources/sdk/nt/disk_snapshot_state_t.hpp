#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DISK_SNAPSHOT_STATE]
    //  WDK 10
    //
    enum class disk_snapshot_state_t : int32_t
    {                                         
        normal_disk =             0x0,          // WDK 10
        snapshot_check_required = 0x1,          // WDK 10
        pre_snapshot =            0x2,          // WDK 10
        snapshot_disk =           0x3,          // WDK 10
    };                                        
};
