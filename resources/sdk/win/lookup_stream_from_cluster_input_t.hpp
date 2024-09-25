#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lookup_stream_from_cluster_input_t.start.hpp"
namespace win
{
    // [struct _LOOKUP_STREAM_FROM_CLUSTER_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct lookup_stream_from_cluster_input_t          
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m00 uint32_t               flags;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t               number_of_clusters;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfClusters
        _m02 sdk::array<int64_t, 1> cluster;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Cluster
                                                       
        SDK_NONVOL_PROPERTIES( "_LOOKUP_STREAM_FROM_CLUSTER_INPUT.$", 0x10, true, 0x8b385c8ab270fbd1 );                   
        SDK_FIXED_SIZE( lookup_stream_from_cluster_input_t, 0x10 );                   
    };                                                 
};
#include "magic/lookup_stream_from_cluster_input_t.end.hpp"
SDK_VERIFY( struct win::lookup_stream_from_cluster_input_t, 0x10 );
