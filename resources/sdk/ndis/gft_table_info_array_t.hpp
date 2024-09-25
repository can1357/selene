#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/gft_table_info_array_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_TABLE_INFO_ARRAY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_table_info_array_t                                  
    {                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                         
        _m00 struct ndis::object_header_t header;                    //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                     //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     table_array_offset;        //{ +0x0008    +0x0008    +0x0008    } | .TableArrayOffset
        _m03 uint32_t                     table_array_num_elements;  //{ +0x000c    +0x000c    +0x000c    } | .TableArrayNumElements
        _m04 uint32_t                     table_array_element_size;  //{ +0x0010    +0x0010    +0x0010    } | .TableArrayElementSize
                                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_TABLE_INFO_ARRAY.$", 0x14, true, 0x20bcacb38e1fcede );                         
        SDK_FIXED_SIZE( gft_table_info_array_t, 0x14 );                         
    };                                                             
};
#include "magic/gft_table_info_array_t.end.hpp"
SDK_VERIFY( struct ndis::gft_table_info_array_t, 0x14 );
