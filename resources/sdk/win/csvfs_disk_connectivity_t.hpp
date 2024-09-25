#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _CSVFS_DISK_CONNECTIVITY]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class csvfs_disk_connectivity_t : int32_t
    {                                             
        none =            0x0,                      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mds_node_only =   0x1,                      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        subset_of_nodes = 0x2,                      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        all_nodes =       0x3,                      // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
