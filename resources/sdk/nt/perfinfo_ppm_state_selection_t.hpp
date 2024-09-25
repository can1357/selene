#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_ppm_state_selection_t.start.hpp"
namespace nt
{
    // [struct _PERFINFO_PPM_STATE_SELECTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_ppm_state_selection_t           
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                          
        _m00 uint32_t                selected_state;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SelectedState
        _m01 uint32_t                vetoed_states;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .VetoedStates
        _m02 sdk::array<uint32_t, 1> veto_reason;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VetoReason
                                                    
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PPM_STATE_SELECTION.$", 0xc, true, 0xe3aa66f2516146b8 );               
        SDK_FIXED_SIZE( perfinfo_ppm_state_selection_t, 0xc );               
    };                                              
};
#include "magic/perfinfo_ppm_state_selection_t.end.hpp"
SDK_VERIFY( struct nt::perfinfo_ppm_state_selection_t, 0xc );
