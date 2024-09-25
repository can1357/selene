#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/device_wake_depth_t.hpp"
#include "../nt/device_capabilities_t.hpp"

#include "magic/stack_device_capabilities_t.start.hpp"
namespace wdf
{
    // [struct _STACK_DEVICE_CAPABILITIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stack_device_capabilities_t                                           
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                       
        _m00 struct nt::device_capabilities_t            device_caps;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceCaps
        _m01 sdk::array<enum nt::device_wake_depth_t, 6> deepest_wakeable_dstate;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .DeepestWakeableDstate
                                                                                 
        SDK_MAGIC_PROPERTIES( "_STACK_DEVICE_CAPABILITIES.$", 0x58, true, 0x2a05a1495901120a );                        
        SDK_FIXED_SIZE( stack_device_capabilities_t, 0x58 );                        
    };                                                                           
};
#include "magic/stack_device_capabilities_t.end.hpp"
SDK_VERIFY( struct wdf::stack_device_capabilities_t, 0x58 );
