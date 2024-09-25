#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/gft_profile_info_array_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_PROFILE_INFO_ARRAY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_profile_info_array_t                                       
    {                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                
        _m00 struct ndis::object_header_t header;                           //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                            //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     profile_info_array_offset;        //{ +0x0008    +0x0008    +0x0008    } | .ProfileInfoArrayOffset
        _m03 uint32_t                     profile_info_array_num_elements;  //{ +0x000c    +0x000c    +0x000c    } | .ProfileInfoArrayNumElements
        _m04 uint32_t                     profile_info_array_element_size;  //{ +0x0010    +0x0010    +0x0010    } | .ProfileInfoArrayElementSize
                                                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_PROFILE_INFO_ARRAY.$", 0x14, true, 0x90a160ded120ad40 );                                
        SDK_FIXED_SIZE( gft_profile_info_array_t, 0x14 );                                
    };                                                                    
};
#include "magic/gft_profile_info_array_t.end.hpp"
SDK_VERIFY( struct ndis::gft_profile_info_array_t, 0x14 );
