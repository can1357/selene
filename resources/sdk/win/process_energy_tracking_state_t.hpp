#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_energy_tracking_state_t.start.hpp"
namespace win
{
    // [struct _PROCESS_ENERGY_TRACKING_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_energy_tracking_state_t               
    {                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                               
        _m00 uint32_t                state_update_mask;    //{ +0x0000    +0x0000    +0x0000    } | .StateUpdateMask
        _m01 uint32_t                state_desired_value;  //{ +0x0004    +0x0004    +0x0004    } | .StateDesiredValue
        _m02 uint32_t                state_sequence;       //{ +0x0008    +0x0008    +0x0008    } | .StateSequence
        _m03 uint1_t                 update_tag;           //{ +0x000c@0  +0x000c@0  +0x000c@0  } | .UpdateTag
        _m04 sdk::array<wchar_t, 64> tag;                  //{ +0x0010    +0x0010    +0x0010    } | .Tag
                                                         
        SDK_MAGIC_PROPERTIES( "_PROCESS_ENERGY_TRACKING_STATE.$", 0x90, true, 0x464e8bc16b355380 );                    
        SDK_FIXED_SIZE( process_energy_tracking_state_t, 0x90 );                    
    };                                                   
};
#include "magic/process_energy_tracking_state_t.end.hpp"
SDK_VERIFY( struct win::process_energy_tracking_state_t, 0x90 );
