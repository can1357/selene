#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/pm_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PM_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pm_parameters_t                                              
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                              
        _m00 struct ndis::object_header_t header;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     enabled_wo_l_packet_patterns;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EnabledWoLPacketPatterns
        _m02 uint32_t                     enabled_protocol_offloads;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EnabledProtocolOffloads
        _m03 uint32_t                     wake_up_flags;                  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .WakeUpFlags
        _m04 uint32_t                     media_specific_wake_up_events;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MediaSpecificWakeUpEvents
                                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_PM_PARAMETERS.$", 0x14, true, 0xa59f96df372e93fc );                              
        SDK_FIXED_SIZE( pm_parameters_t, 0x14 );                              
    };                                                                  
};
#include "magic/pm_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::pm_parameters_t, 0x14 );
