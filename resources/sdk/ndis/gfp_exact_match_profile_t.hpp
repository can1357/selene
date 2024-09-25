#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "gfp_table_type_t.hpp"

#include "magic/gfp_exact_match_profile_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFP_EXACT_MATCH_PROFILE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gfp_exact_match_profile_t                                                          
    {                                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
        //                                                                                    
        _m00 struct ndis::object_header_t header;                                               //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                                                //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 enum ndis::gfp_table_type_t  table_type;                                           //{ +0x0008    +0x0008    +0x0008    } | .TableType
        _m03 uint32_t                     profile_id;                                           //{ +0x000c    +0x000c    +0x000c    } | .ProfileId
        _m04 uint32_t                     num_supported_entries;                                //{ +0x0010    +0x0010    +0x0010    } | .NumSupportedEntries
        _m05 uint32_t                     header_group_exact_match_profile_array_offset;        //{ +0x0014    +0x0014    +0x0014    } | .HeaderGroupExactMatchProfileArrayOffset
        _m06 uint32_t                     header_group_exact_match_profile_array_num_elements;  //{ +0x0018    +0x0018    +0x0018    } | .HeaderGroupExactMatchProfileArrayNumElements
        _m07 uint32_t                     header_group_exact_match_profile_array_element_size;  //{ +0x001c    +0x001c    +0x001c    } | .HeaderGroupExactMatchProfileArrayElementSize
                                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_GFP_EXACT_MATCH_PROFILE.$", 0x20, true, 0x96b609632ebb2455 );                                                    
        SDK_FIXED_SIZE( gfp_exact_match_profile_t, 0x20 );                                                    
    };                                                                                        
};
#include "magic/gfp_exact_match_profile_t.end.hpp"
SDK_VERIFY( struct ndis::gfp_exact_match_profile_t, 0x20 );
