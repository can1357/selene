#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reservation_cluster_info_t.start.hpp"
namespace mi
{
    // [union _MI_RESERVATION_CLUSTER_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union reservation_cluster_info_t  
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint10_t cluster_size;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ClusterSize
        _m01 uint22_t sequence_number;  //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .SequenceNumber
        _m02 int32_t  entire_info;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EntireInfo
                                      
        SDK_MAGIC_PROPERTIES( "_MI_RESERVATION_CLUSTER_INFO.$", 0x4, true, 0x71b6a4d6f18d6deb );                
        SDK_FIXED_SIZE( reservation_cluster_info_t, 0x4 );                
    };                                
};
#include "magic/reservation_cluster_info_t.end.hpp"
SDK_VERIFY( union mi::reservation_cluster_info_t, 0x4 );
