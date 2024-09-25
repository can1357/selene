#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/throttling_thread_state_t.start.hpp"
namespace power
{
    // [struct _POWER_THROTTLING_THREAD_STATE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct throttling_thread_state_t
    {                               
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t version;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t control_mask;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ControlMask
        _m02 uint32_t state_mask;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StateMask
                                    
        SDK_NONVOL_PROPERTIES( "_POWER_THROTTLING_THREAD_STATE.$", 0xc, true, 0x9b31c0bd93340531 );             
        SDK_FIXED_SIZE( throttling_thread_state_t, 0xc );             
    };                              
};
#include "magic/throttling_thread_state_t.end.hpp"
SDK_VERIFY( struct power::throttling_thread_state_t, 0xc );
