#pragma once
#include <sdkgen/support_library.hpp>
#include "device_power_state_t.hpp"

#include "magic/pm_wake_up_capabilities_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PM_WAKE_UP_CAPABILITIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pm_wake_up_capabilities_t                                  
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                            
        _m00 enum ndis::device_power_state_t min_magic_packet_wake_up;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MinMagicPacketWakeUp
        _m01 enum ndis::device_power_state_t min_pattern_wake_up;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MinPatternWakeUp
        _m02 enum ndis::device_power_state_t min_link_change_wake_up;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MinLinkChangeWakeUp
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_PM_WAKE_UP_CAPABILITIES.$", 0xc, true, 0x9bf26eb0eebe578c );                         
        SDK_FIXED_SIZE( pm_wake_up_capabilities_t, 0xc );                         
    };                                                                
};
#include "magic/pm_wake_up_capabilities_t.end.hpp"
SDK_VERIFY( struct ndis::pm_wake_up_capabilities_t, 0xc );
