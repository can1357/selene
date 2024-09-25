#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rt_power_engine_t.start.hpp"
namespace hid
{
    // [struct _HID_RT_POWER_ENGINE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rt_power_engine_t                
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint64_t policy_engine_lock;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PolicyEngineLock
        _m01 uint1_t  policy_engine_running;  //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .PolicyEngineRunning
        _m02 uint1_t  policy_change_pending;  //{ +0x0008@1  +0x0008@1  +0x0008@1  +0x0008@1  } | .PolicyChangePending
                                            
        SDK_MAGIC_PROPERTIES( "_HID_RT_POWER_ENGINE.$", 0x10, true, 0x69a4159392de458e );                      
        SDK_FIXED_SIZE( rt_power_engine_t, 0x10 );                      
    };                                      
};
#include "magic/rt_power_engine_t.end.hpp"
SDK_VERIFY( struct hid::rt_power_engine_t, 0x10 );
