#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _STORAGE_RESERVE_ID]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class storage_reserve_id_t : int32_t
    {                                        
        none =           0x0,                  // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hard =           0x1,                  // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        soft =           0x2,                  // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        update_scratch = 0x3,                  // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =            0x4,                  // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
