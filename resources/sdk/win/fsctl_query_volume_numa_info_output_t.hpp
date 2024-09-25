#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsctl_query_volume_numa_info_output_t.start.hpp"
namespace win
{
    // [struct _FSCTL_QUERY_VOLUME_NUMA_INFO_OUTPUT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fsctl_query_volume_numa_info_output_t
    {                                           
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t numa_node;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumaNode
                                                
        SDK_NONVOL_PROPERTIES( "_FSCTL_QUERY_VOLUME_NUMA_INFO_OUTPUT.$", 0x4, true, 0x5826badf4a30a188 );          
        SDK_FIXED_SIZE( fsctl_query_volume_numa_info_output_t, 0x4 );          
    };                                          
};
#include "magic/fsctl_query_volume_numa_info_output_t.end.hpp"
SDK_VERIFY( struct win::fsctl_query_volume_numa_info_output_t, 0x4 );
