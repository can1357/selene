#pragma once
#include <sdkgen/support_library.hpp>
#include "csvfs_disk_connectivity_t.hpp"

#include "magic/csv_query_volume_redirect_state_t.start.hpp"
namespace win
{
    // [struct _CSV_QUERY_VOLUME_REDIRECT_STATE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct csv_query_volume_redirect_state_t                              
    {                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                
        _m00 uint32_t                            mds_node_id;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MdsNodeId
        _m01 uint32_t                            ds_node_id;                //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DsNodeId
        _m02 uint8_t                             is_disk_connected;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .IsDiskConnected
        _m03 uint8_t                             cluster_enable_direct_io;  //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .ClusterEnableDirectIo
        _m04 enum win::csvfs_disk_connectivity_t disk_connectivity;         //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .DiskConnectivity
                                                                          
        SDK_NONVOL_PROPERTIES( "_CSV_QUERY_VOLUME_REDIRECT_STATE.$", 0x10, true, 0x33af62d89c3dc903 );                         
        SDK_FIXED_SIZE( csv_query_volume_redirect_state_t, 0x10 );                         
    };                                                                    
};
#include "magic/csv_query_volume_redirect_state_t.end.hpp"
SDK_VERIFY( struct win::csv_query_volume_redirect_state_t, 0x10 );
