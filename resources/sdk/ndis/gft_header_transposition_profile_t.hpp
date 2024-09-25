#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "gfp_table_type_t.hpp"

#include "magic/gft_header_transposition_profile_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_HEADER_TRANSPOSITION_PROFILE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_header_transposition_profile_t                                                   
    {                                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
        //                                                                                      
        _m00 struct ndis::object_header_t header;                                                 //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                                                  //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 enum ndis::gfp_table_type_t  table_type;                                             //{ +0x0008    +0x0008    +0x0008    } | .TableType
        _m03 uint32_t                     profile_id;                                             //{ +0x000c    +0x000c    +0x000c    } | .ProfileId
        _m04 uint32_t                     header_group_transposition_profile_array_offset;        //{ +0x0010    +0x0010    +0x0010    } | .HeaderGroupTranspositionProfileArrayOffset
        _m05 uint32_t                     header_group_transposition_profile_array_num_elements;  //{ +0x0014    +0x0014    +0x0014    } | .HeaderGroupTranspositionProfileArrayNumElements
        _m06 uint32_t                     header_group_transposition_profile_array_element_size;  //{ +0x0018    +0x0018    +0x0018    } | .HeaderGroupTranspositionProfileArrayElementSize
        _m07 uint32_t                     custom_action_profile_offset;                           //{ +0x001c    +0x001c    +0x001c    } | .CustomActionProfileOffset
                                                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_HEADER_TRANSPOSITION_PROFILE.$", 0x20, true, 0xbd3cb192d6edf3d );                                                      
        SDK_FIXED_SIZE( gft_header_transposition_profile_t, 0x20 );                                                      
    };                                                                                          
};
#include "magic/gft_header_transposition_profile_t.end.hpp"
SDK_VERIFY( struct ndis::gft_header_transposition_profile_t, 0x20 );
