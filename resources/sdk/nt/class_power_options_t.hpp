#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/class_power_options_t.start.hpp"
namespace nt
{
    // [struct _CLASS_POWER_OPTIONS]
    // => WDK 10 (NV)
    //
    struct class_power_options_t      
    {                                 
        // WDK 10                     
        //                            
        _m00 uint1_t power_down;        //{ +0x0000@0  } | .PowerDown
        _m01 uint1_t lock_queue;        //{ +0x0000@1  } | .LockQueue
        _m02 uint1_t handle_spin_down;  //{ +0x0000@2  } | .HandleSpinDown
        _m03 uint1_t handle_spin_up;    //{ +0x0000@3  } | .HandleSpinUp
                                      
        SDK_NONVOL_PROPERTIES( "_CLASS_POWER_OPTIONS.$", 0x0, false, 0x32ac22e6f4d28401 );                 
        SDK_FIXED_SIZE( class_power_options_t, 0x4 );                 
    };                                
};
#include "magic/class_power_options_t.end.hpp"
SDK_VERIFY( struct nt::class_power_options_t, 0x4 );
