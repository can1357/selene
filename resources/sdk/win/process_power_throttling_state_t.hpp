#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_power_throttling_state_t.start.hpp"
namespace win
{
    // [struct _PROCESS_POWER_THROTTLING_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_power_throttling_state_t
    {                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t version;               //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t control_mask;          //{ +0x0004    +0x0004    +0x0004    } | .ControlMask
        _m02 uint32_t state_mask;            //{ +0x0008    +0x0008    +0x0008    } | .StateMask
                                           
        SDK_MAGIC_PROPERTIES( "_PROCESS_POWER_THROTTLING_STATE.$", 0xc, true, 0x36bf5dd2ea91d903 );             
        SDK_FIXED_SIZE( process_power_throttling_state_t, 0xc );             
    };                                     
};
#include "magic/process_power_throttling_state_t.end.hpp"
SDK_VERIFY( struct win::process_power_throttling_state_t, 0xc );
