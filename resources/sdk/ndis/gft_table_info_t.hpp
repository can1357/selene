#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "gfp_table_type_t.hpp"

#include "magic/gft_table_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_TABLE_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_table_info_t                                
    {                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                 
        _m00 struct ndis::object_header_t header;            //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;             //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     table_id;          //{ +0x0008    +0x0008    +0x0008    } | .TableId
        _m03 enum ndis::gfp_table_type_t  table_type;        //{ +0x000c    +0x000c    +0x000c    } | .TableType
        _m04 uint32_t                     next_table_id;     //{ +0x0010    +0x0010    +0x0010    } | .NextTableId
        _m05 uint32_t                     num_flow_entries;  //{ +0x0014    +0x0014    +0x0014    } | .NumFlowEntries
                                                           
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_TABLE_INFO.$", 0x18, true, 0x640753232308a7fb );                 
        SDK_FIXED_SIZE( gft_table_info_t, 0x18 );                 
    };                                                     
};
#include "magic/gft_table_info_t.end.hpp"
SDK_VERIFY( struct ndis::gft_table_info_t, 0x18 );
