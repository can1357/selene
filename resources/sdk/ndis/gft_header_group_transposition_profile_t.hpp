#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "gft_header_group_transposition_action_t.hpp"

#include "magic/gft_header_group_transposition_profile_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_HEADER_GROUP_TRANSPOSITION_PROFILE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_header_group_transposition_profile_t       
    {                                                     
        using action_t = enum ndis::gft_header_group_transposition_action_t;                
                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                
        _m00 struct ndis::object_header_t header;           //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;            //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 action_t                     action;           //{ +0x0008    +0x0008    +0x0008    } | .Action
        _m03 uint32_t                     headers_present;  //{ +0x000c    +0x000c    +0x000c    } | .HeadersPresent
        _m04 uint32_t                     header_fields;    //{ +0x0010    +0x0010    +0x0010    } | .HeaderFields
                                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_HEADER_GROUP_TRANSPOSITION_PROFILE.$", 0x14, true, 0x19e493b017856390 );                
        SDK_FIXED_SIZE( gft_header_group_transposition_profile_t, 0x14 );                
    };                                                    
};
#include "magic/gft_header_group_transposition_profile_t.end.hpp"
SDK_VERIFY( struct ndis::gft_header_group_transposition_profile_t, 0x14 );
