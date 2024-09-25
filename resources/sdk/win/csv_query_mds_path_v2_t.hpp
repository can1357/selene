#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "csvfs_disk_connectivity_t.hpp"

#include "magic/csv_query_mds_path_v2_t.start.hpp"
namespace win
{
    // [struct _CSV_QUERY_MDS_PATH_V2]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct csv_query_mds_path_v2_t                                 
    {                                                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                         
        _m00 int64_t                             version;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                            required_size;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RequiredSize
        _m02 uint32_t                            mds_node_id;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MdsNodeId
        _m03 uint32_t                            ds_node_id;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DsNodeId
        _m04 uint32_t                            flags;              //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Flags
        _m05 enum win::csvfs_disk_connectivity_t disk_connectivity;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DiskConnectivity
        _m06 struct nt::guid_t                   volume_id;          //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .VolumeId
        _m07 uint32_t                            ip_address_offset;  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .IpAddressOffset
        _m08 uint32_t                            ip_address_length;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .IpAddressLength
        _m09 uint32_t                            path_offset;        //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .PathOffset
        _m10 uint32_t                            path_length;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .PathLength
                                                                   
        SDK_NONVOL_PROPERTIES( "_CSV_QUERY_MDS_PATH_V2.$", 0x40, true, 0x5641ccf80eb45be7 );                  
        SDK_FIXED_SIZE( csv_query_mds_path_v2_t, 0x40 );                  
    };                                                             
};
#include "magic/csv_query_mds_path_v2_t.end.hpp"
SDK_VERIFY( struct win::csv_query_mds_path_v2_t, 0x40 );
