#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cluster_range_t.start.hpp"
namespace win
{
    // [struct _CLUSTER_RANGE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cluster_range_t            
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                            
        _m00 int64_t starting_cluster;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StartingCluster
        _m01 int64_t cluster_count;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ClusterCount
                                      
        SDK_NONVOL_PROPERTIES( "_CLUSTER_RANGE.$", 0x10, true, 0xfa1b514944451728 );                 
        SDK_FIXED_SIZE( cluster_range_t, 0x10 );                 
    };                                
};
#include "magic/cluster_range_t.end.hpp"
SDK_VERIFY( struct win::cluster_range_t, 0x10 );
