#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_ppm_idle_state_enter_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PPM_IDLE_STATE_ENTER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_ppm_idle_state_enter_t 
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t state;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .State
        _m01 uint16_t properties;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Properties
        _m02 uint8_t  expected_wake_reason;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .ExpectedWakeReason
        _m03 uint32_t flags;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m04 uint64_t expected_duration;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ExpectedDuration
                                           
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PPM_IDLE_STATE_ENTER.$", 0x10, true, 0xf40b4784303361a2 );                     
        SDK_FIXED_SIZE( perfinfo_ppm_idle_state_enter_t, 0x10 );                     
    };                                     
};
#include "magic/perfinfo_ppm_idle_state_enter_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_ppm_idle_state_enter_t, 0x10 );
