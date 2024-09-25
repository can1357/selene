#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "gfp_table_type_t.hpp"
#include "gft_profile_type_t.hpp"

#include "magic/gft_profile_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_PROFILE_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_profile_info_t                                              
    {                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                 
        _m00 struct ndis::object_header_t  header;                           //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                      flags;                            //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 enum ndis::gft_profile_type_t profile_type;                     //{ +0x0008    +0x0008    +0x0008    } | .ProfileType
        _m03 enum ndis::gfp_table_type_t   table_type;                       //{ +0x000c    +0x000c    +0x000c    } | .TableType
        _m04 uint32_t                      profile_id;                       //{ +0x0010    +0x0010    +0x0010    } | .ProfileId
        _m05 uint32_t                      num_supported_flow_entries;       //{ +0x0014    +0x0014    +0x0014    } | .NumSupportedFlowEntries
        _m06 uint32_t                      num_current_flow_entries;         //{ +0x0018    +0x0018    +0x0018    } | .NumCurrentFlowEntries
        _m07 uint32_t                      header_group_array_offset;        //{ +0x001c    +0x001c    +0x001c    } | .HeaderGroupArrayOffset
        _m08 uint32_t                      header_group_array_num_elements;  //{ +0x0020    +0x0020    +0x0020    } | .HeaderGroupArrayNumElements
        _m09 uint32_t                      header_group_array_element_size;  //{ +0x0024    +0x0024    +0x0024    } | .HeaderGroupArrayElementSize
                                                                           
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_PROFILE_INFO.$", 0x28, true, 0x529f215150573e11 );                                
        SDK_FIXED_SIZE( gft_profile_info_t, 0x28 );                                
    };                                                                     
};
#include "magic/gft_profile_info_t.end.hpp"
SDK_VERIFY( struct ndis::gft_profile_info_t, 0x28 );
