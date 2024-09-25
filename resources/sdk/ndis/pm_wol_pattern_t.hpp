#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "pm_wol_packet_t.hpp"
#include "pm_counted_string_t.hpp"

#include "magic/pm_wol_pattern_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PM_WOL_PATTERN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pm_wol_pattern_t                                            
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                             
        _m00 struct ndis::object_header_t     header;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                         flags;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                         priority;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Priority
        _m03 enum ndis::pm_wol_packet_t       wo_l_packet_type;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .WoLPacketType
        _m04 struct ndis::pm_counted_string_t friendly_name;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FriendlyName
        _m05 uint32_t                         pattern_id;                //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .PatternId
        _m06 uint32_t                         next_wo_l_pattern_offset;  //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .NextWoLPatternOffset
                                                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_PM_WOL_PATTERN.$", 0xc4, true, 0xccfad082ff619ab7 );                         
        SDK_FIXED_SIZE( pm_wol_pattern_t, 0xc4 );                         
    };                                                                 
};
#include "magic/pm_wol_pattern_t.end.hpp"
SDK_VERIFY( struct ndis::pm_wol_pattern_t, 0xc4 );
