#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/control_state_selection_t.start.hpp"
namespace perf
{
    // [struct _PERF_CONTROL_STATE_SELECTION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct control_state_selection_t             
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint64_t selected_state;              //{ +0x0000    +0x0000    +0x0000    } | .SelectedState
        _m01 uint32_t selected_percent;            //{ +0x0008    +0x0008    +0x0008    } | .SelectedPercent
        _m02 uint32_t selected_frequency;          //{ +0x000c    +0x000c    +0x000c    } | .SelectedFrequency
        _m03 uint32_t min_percent;                 //{ +0x0010    +0x0010    +0x0010    } | .MinPercent
        _m04 uint32_t max_percent;                 //{ +0x0014    +0x0014    +0x0014    } | .MaxPercent
        _m05 uint32_t tolerance_percent;           //{ +0x0018    +0x0018    +0x0018    } | .TolerancePercent
        _m06 uint32_t epp_percent;                 //{ +0x001c    +0x001c    +0x001c    } | .EppPercent
        _m07 uint32_t autonomous_activity_window;  //{ +0x0020    +0x0020    +0x0020    } | .AutonomousActivityWindow
        _m08 uint8_t  autonomous;                  //{ +0x0024    +0x0024    +0x0024    } | .Autonomous
        _m09 uint8_t  inherit_from_domain;         //{ +0x0025    +0x0025    +0x0025    } | .InheritFromDomain
                                                 
        SDK_MAGIC_PROPERTIES( "_PERF_CONTROL_STATE_SELECTION.$", 0x28, true, 0xc198b63986e3e8ee );                           
        SDK_FIXED_SIZE( control_state_selection_t, 0x28 );                           
    };                                           
};
#include "magic/control_state_selection_t.end.hpp"
SDK_VERIFY( struct perf::control_state_selection_t, 0x28 );
