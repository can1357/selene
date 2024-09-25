#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/csv_query_mds_path_t.start.hpp"
namespace win
{
    // [struct _CSV_QUERY_MDS_PATH]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct csv_query_mds_path_t                 
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint32_t               mds_node_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MdsNodeId
        _m01 uint32_t               ds_node_id;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DsNodeId
        _m02 uint32_t               path_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PathLength
        _m03 sdk::array<wchar_t, 1> path;         //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Path
                                                
        SDK_NONVOL_PROPERTIES( "_CSV_QUERY_MDS_PATH.$", 0x10, true, 0x68917b95194f0de2 );            
        SDK_FIXED_SIZE( csv_query_mds_path_t, 0x10 );            
    };                                          
};
#include "magic/csv_query_mds_path_t.end.hpp"
SDK_VERIFY( struct win::csv_query_mds_path_t, 0x10 );
