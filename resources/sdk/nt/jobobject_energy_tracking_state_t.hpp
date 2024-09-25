#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jobobject_energy_tracking_state_t.start.hpp"
namespace nt
{
    // [union _JOBOBJECT_ENERGY_TRACKING_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union jobobject_energy_tracking_state_t
    {                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint64_t value;                 //{ +0x0000    +0x0000    +0x0000    } | .Value
        _m01 uint32_t update_mask;           //{ +0x0000    +0x0000    +0x0000    } | .UpdateMask
        _m02 uint32_t desired_state;         //{ +0x0004    +0x0004    +0x0004    } | .DesiredState
                                           
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_ENERGY_TRACKING_STATE.$", 0x8, true, 0x8b5de0327af8c2c );              
        SDK_FIXED_SIZE( jobobject_energy_tracking_state_t, 0x8 );              
    };                                     
};
#include "magic/jobobject_energy_tracking_state_t.end.hpp"
SDK_VERIFY( union nt::jobobject_energy_tracking_state_t, 0x8 );
