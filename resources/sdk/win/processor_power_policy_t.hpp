#pragma once
#include <sdkgen/support_library.hpp>
#include "processor_power_policy_info_t.hpp"

#include "magic/processor_power_policy_t.start.hpp"
namespace win
{
    // [struct _PROCESSOR_POWER_POLICY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct processor_power_policy_t     
    {                                   
        using policy_t = sdk::array<struct win::processor_power_policy_info_t, 3>;                 
                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                              
        _m00 uint32_t  revision;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Revision
        _m01 uint8_t   dynamic_throttle;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DynamicThrottle
        _m02 uint1_t   disable_c_states;  //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .DisableCStates
        _m03 uint32_t  policy_count;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PolicyCount
        _m04 policy_t  policy;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Policy
                                        
        SDK_MAGIC_PROPERTIES( "_PROCESSOR_POWER_POLICY.$", 0x4c, true, 0x536a60791e803982 );                 
        SDK_FIXED_SIZE( processor_power_policy_t, 0x4c );                 
    };                                  
};
#include "magic/processor_power_policy_t.end.hpp"
SDK_VERIFY( struct win::processor_power_policy_t, 0x4c );
