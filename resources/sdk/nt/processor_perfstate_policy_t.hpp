#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/processor_perfstate_policy_t.start.hpp"
namespace nt
{
    // [struct PROCESSOR_PERFSTATE_POLICY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct processor_perfstate_policy_t                          
    {                                                            
        union u0_flags_t                                         
        {                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
            //                                                   
            _m04 uint8_t as_uchar;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUCHAR
            _m05 uint1_t no_domain_accounting;                     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .NoDomainAccounting
            _m06 uint2_t increase_policy;                          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .IncreasePolicy
            _m07 uint2_t decrease_policy;                          //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .DecreasePolicy
                                                                 
            SDK_MAGIC_PROPERTIES( "PROCESSOR_PERFSTATE_POLICY.Flags.$", 0x1, true, 0x9e7d59780d16aefb );                                        
            SDK_FIXED_SIZE( u0_flags_t, 0x1 );                                        
        };                                                       
                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                       
        _m00 uint32_t                         revision;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Revision
        _m01 uint8_t                          max_throttle;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaxThrottle
        _m02 uint8_t                          min_throttle;        //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .MinThrottle
        _m03 uint8_t                          busy_adj_threshold;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .BusyAdjThreshold
        _m08 u0_flags_t                       flags;               //{ +0x0007    +0x0007    +0x0007    +0x0007    } | .Flags
        _m09 uint32_t                         time_check;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TimeCheck
        _m10 uint32_t                         increase_time;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .IncreaseTime
        _m11 uint32_t                         decrease_time;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DecreaseTime
        _m12 uint32_t                         increase_percent;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .IncreasePercent
        _m13 uint32_t                         decrease_percent;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DecreasePercent
                                                                 
        SDK_MAGIC_PROPERTIES( "PROCESSOR_PERFSTATE_POLICY.$", 0x1c, true, 0x5b5ac3357c30aca6 );                   
        SDK_FIXED_SIZE( processor_perfstate_policy_t, 0x1c );                   
    };                                                           
};
#include "magic/processor_perfstate_policy_t.end.hpp"
SDK_VERIFY( union nt::processor_perfstate_policy_t::u0_flags_t, 0x1 );
SDK_VERIFY( struct nt::processor_perfstate_policy_t, 0x1c );
