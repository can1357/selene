#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pm_packet_pattern_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PM_PACKET_PATTERN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pm_packet_pattern_t       
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t priority;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Priority
        _m01 uint32_t mask_size;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaskSize
        _m02 uint32_t pattern_offset;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PatternOffset
        _m03 uint32_t pattern_size;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PatternSize
        _m04 uint32_t pattern_flags;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .PatternFlags
                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_PM_PACKET_PATTERN.$", 0x18, true, 0x7bab2ea533064803 );               
        SDK_FIXED_SIZE( pm_packet_pattern_t, 0x18 );               
    };                               
};
#include "magic/pm_packet_pattern_t.end.hpp"
SDK_VERIFY( struct ndis::pm_packet_pattern_t, 0x18 );
