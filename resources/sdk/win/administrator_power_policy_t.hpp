#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/system_power_state_t.hpp"

#include "magic/administrator_power_policy_t.start.hpp"
namespace win
{
    // [struct _ADMINISTRATOR_POWER_POLICY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct administrator_power_policy_t                         
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                      
        _m00 enum nt::system_power_state_t min_sleep;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MinSleep
        _m01 enum nt::system_power_state_t max_sleep;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaxSleep
        _m02 uint32_t                      min_video_timeout;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MinVideoTimeout
        _m03 uint32_t                      max_video_timeout;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MaxVideoTimeout
        _m04 uint32_t                      min_spindown_timeout;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MinSpindownTimeout
        _m05 uint32_t                      max_spindown_timeout;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .MaxSpindownTimeout
                                                                
        SDK_MAGIC_PROPERTIES( "_ADMINISTRATOR_POWER_POLICY.$", 0x18, true, 0x15b8b807b9082bbe );                     
        SDK_FIXED_SIZE( administrator_power_policy_t, 0x18 );                     
    };                                                          
};
#include "magic/administrator_power_policy_t.end.hpp"
SDK_VERIFY( struct win::administrator_power_policy_t, 0x18 );
