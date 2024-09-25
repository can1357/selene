#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/gft_custom_action_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_CUSTOM_ACTION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_custom_action_t                        
    {                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                            
        _m00 struct ndis::object_header_t header;       //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;        //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     profile_id;   //{ +0x0008    +0x0008    +0x0008    } | .ProfileId
        _m03 uint32_t                     type;         //{ +0x000c    +0x000c    +0x000c    } | .Type
        _m04 uint32_t                     length;       //{ +0x0010    +0x0010    +0x0010    } | .Length
        _m05 uint64_t                     alignment;    //{ +0x0018    +0x0018    +0x0018    } | .Alignment
        _m06 sdk::array<uint8_t, 1>       action_data;  //{ +0x0018    +0x0018    +0x0018    } | .ActionData
                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_CUSTOM_ACTION.$", 0x20, true, 0x15ba4f685a132e61 );            
        SDK_FIXED_SIZE( gft_custom_action_t, 0x20 );            
    };                                                
};
#include "magic/gft_custom_action_t.end.hpp"
SDK_VERIFY( struct ndis::gft_custom_action_t, 0x20 );
