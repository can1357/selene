#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kscheduling_group_policy_t.start.hpp"
namespace nt
{
    // [struct _KSCHEDULING_GROUP_POLICY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kscheduling_group_policy_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t value;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
        _m01 uint16_t weight;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Weight
        _m02 uint16_t min_rate;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MinRate
        _m03 uint16_t max_rate;        //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .MaxRate
        _m04 uint32_t all_flags;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AllFlags
        _m05 uint1_t  type;            //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .Type
        _m06 uint1_t  disabled;        //{ +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  } | .Disabled
                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m07 uint1_t  rank_bias;       //{ +0x0004@2  +0x0004@2  +0x0004@2  } | .RankBias
                                     
        SDK_MAGIC_PROPERTIES( "_KSCHEDULING_GROUP_POLICY.$", 0x8, true, 0x48e98b52a5fb899c );          
        SDK_FIXED_SIZE( kscheduling_group_policy_t, 0x8 );          
    };                               
};
#include "magic/kscheduling_group_policy_t.end.hpp"
SDK_VERIFY( struct nt::kscheduling_group_policy_t, 0x8 );
