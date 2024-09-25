#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/processor_power_policy_info_t.start.hpp"
namespace win
{
    // [struct _PROCESSOR_POWER_POLICY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct processor_power_policy_info_t
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t time_check;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TimeCheck
        _m01 uint32_t demote_limit;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DemoteLimit
        _m02 uint32_t promote_limit;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PromoteLimit
        _m03 uint8_t  demote_percent;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DemotePercent
        _m04 uint8_t  promote_percent;    //{ +0x000d    +0x000d    +0x000d    +0x000d    } | .PromotePercent
        _m05 uint1_t  allow_demotion;     //{ +0x0010@0  +0x0010@0  +0x0010@0  +0x0010@0  } | .AllowDemotion
        _m06 uint1_t  allow_promotion;    //{ +0x0010@1  +0x0010@1  +0x0010@1  +0x0010@1  } | .AllowPromotion
                                        
        SDK_MAGIC_PROPERTIES( "_PROCESSOR_POWER_POLICY_INFO.$", 0x14, true, 0x6481ef3573ecd81f );                
        SDK_FIXED_SIZE( processor_power_policy_info_t, 0x14 );                
    };                                  
};
#include "magic/processor_power_policy_info_t.end.hpp"
SDK_VERIFY( struct win::processor_power_policy_info_t, 0x14 );
