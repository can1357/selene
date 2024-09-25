#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rt_power_state_t.start.hpp"
namespace hid
{
    // [struct _HID_RT_POWER_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rt_power_state_t                    
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint1_t  power_reference_acquired;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PowerReferenceAcquired
        _m01 uint1_t  arm_for_wake;              //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .ArmForWake
                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                         
        //                                     
        _m02 uint32_t idle_timeout;              //{ +0x0004    +0x0004    +0x0004    } | .IdleTimeout
                                               
        // Windows 11                          
        //                                     
        _m03 uint32_t idle_timeout_in_msec;      //{ +0x0004    } | .IdleTimeoutInMsec
                                               
        SDK_MAGIC_PROPERTIES( "_HID_RT_POWER_STATE.$", 0x8, true, 0xca887de06ce1be2d );                         
        SDK_FIXED_SIZE( rt_power_state_t, 0x8 );                         
    };                                         
};
#include "magic/rt_power_state_t.end.hpp"
SDK_VERIFY( struct hid::rt_power_state_t, 0x8 );
