#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _LINK_TRACKING_INFORMATION_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class link_tracking_information_type_t : int32_t
    {                                                    
        ntfs_link_tracking_information = 0x0,              // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dfs_link_tracking_information =  0x1,              // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
