#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "gfp_table_type_t.hpp"

#include "magic/gft_table_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_TABLE_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_table_parameters_t                       
    {                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                              
        _m00 struct ndis::object_header_t header;         //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;          //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     table_id;       //{ +0x0008    +0x0008    +0x0008    } | .TableId
        _m03 enum ndis::gfp_table_type_t  table_type;     //{ +0x000c    +0x000c    +0x000c    } | .TableType
        _m04 uint32_t                     next_table_id;  //{ +0x0010    +0x0010    +0x0010    } | .NextTableId
                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_TABLE_PARAMETERS.$", 0x14, true, 0x4530b6278ab6ee2a );              
        SDK_FIXED_SIZE( gft_table_parameters_t, 0x14 );              
    };                                                  
};
#include "magic/gft_table_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::gft_table_parameters_t, 0x14 );
