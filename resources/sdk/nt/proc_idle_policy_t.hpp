#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/proc_idle_policy_t.start.hpp"
namespace nt
{
    // [struct _PROC_IDLE_POLICY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proc_idle_policy_t             
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                
        _m00 uint8_t promote_percent;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PromotePercent
        _m01 uint8_t demote_percent;        //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .DemotePercent
        _m02 uint8_t promote_percent_base;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .PromotePercentBase
        _m03 uint8_t demote_percent_base;   //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .DemotePercentBase
        _m04 uint8_t allow_scaling;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AllowScaling
        _m05 uint8_t force_light_idle;      //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .ForceLightIdle
                                          
        SDK_MAGIC_PROPERTIES( "_PROC_IDLE_POLICY.$", 0x6, true, 0xa6ec2135fff773db );                     
        SDK_FIXED_SIZE( proc_idle_policy_t, 0x6 );                     
    };                                    
};
#include "magic/proc_idle_policy_t.end.hpp"
SDK_VERIFY( struct nt::proc_idle_policy_t, 0x6 );
