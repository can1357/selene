#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/gfp_header_group_exact_match_profile_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFP_HEADER_GROUP_EXACT_MATCH_PROFILE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gfp_header_group_exact_match_profile_t         
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                
        _m00 struct ndis::object_header_t header;           //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;            //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     headers_present;  //{ +0x0008    +0x0008    +0x0008    } | .HeadersPresent
        _m03 uint64_t                     match_fields;     //{ +0x0010    +0x0010    +0x0010    } | .MatchFields
                                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_GFP_HEADER_GROUP_EXACT_MATCH_PROFILE.$", 0x18, true, 0x3cc7700cfaa2a50 );                
        SDK_FIXED_SIZE( gfp_header_group_exact_match_profile_t, 0x18 );                
    };                                                    
};
#include "magic/gfp_header_group_exact_match_profile_t.end.hpp"
SDK_VERIFY( struct ndis::gfp_header_group_exact_match_profile_t, 0x18 );
