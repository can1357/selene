#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/energy_state_duration_t.start.hpp"
namespace nt
{
    // [union _ENERGY_STATE_DURATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union energy_state_duration_t      
    {                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint64_t value;             //{ +0x0000    +0x0000    +0x0000    } | .Value
        _m01 uint32_t last_change_time;  //{ +0x0000    +0x0000    +0x0000    } | .LastChangeTime
        _m02 uint31_t duration;          //{ +0x0004@0  +0x0004@0  +0x0004@0  } | .Duration
        _m03 uint1_t  is_in_state;       //{ +0x0004@31 +0x0004@31 +0x0004@31 } | .IsInState
                                       
        SDK_MAGIC_PROPERTIES( "_ENERGY_STATE_DURATION.$", 0x8, true, 0x75c7cf3d8960aa71 );                 
        SDK_FIXED_SIZE( energy_state_duration_t, 0x8 );                 
    };                                 
};
#include "magic/energy_state_duration_t.end.hpp"
SDK_VERIFY( union nt::energy_state_duration_t, 0x8 );
