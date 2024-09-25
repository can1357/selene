#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ham_activity_start_flags_t.start.hpp"
namespace win
{
    // [union _HAM_ACTIVITY_START_FLAGS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union ham_activity_start_flags_t                     
    {                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                               
        _m00 uint1_t  disallow_in_shell_suspend;           //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .DisallowInShellSuspend
        _m01 uint1_t  disallow_in_battery_saver;           //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .DisallowInBatterySaver
        _m02 uint1_t  disallow_in_dpl_locked;              //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .DisallowInDplLocked
        _m03 uint1_t  disallow_in_dc_power;                //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .DisallowInDcPower
        _m04 uint1_t  disallow_in_thermal_limited;         //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .DisallowInThermalLimited
        _m05 uint1_t  disallow_when_host_not_active;       //{ +0x0000@6  +0x0000@6  +0x0000@6  } | .DisallowWhenHostNotActive
        _m06 uint1_t  disallow_when_host_quiesced;         //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .DisallowWhenHostQuiesced
        _m07 uint1_t  disallow_when_host_resume_imminent;  //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .DisallowWhenHostResumeImminent
        _m08 uint1_t  disallow_due_to_ee_policy;           //{ +0x0000@9  +0x0000@9  +0x0000@9  } | .DisallowDueToEePolicy
        _m09 uint32_t all;                                 //{ +0x0000    +0x0000    +0x0000    } | .All
                                                         
        // Windows 10 v2004, Windows 10 v20H2                                   
        //                                               
        _m10 uint1_t  disallow_in_cs;                      //{ +0x0000@2  +0x0000@2  } | .DisallowInCs
                                                         
        // Windows 11                                    
        //                                               
        _m11 uint1_t  disallow_in_cs_plm;                  //{ +0x0000@2  } | .DisallowInCsPlm
        _m12 uint1_t  disallow_in_cs_dam;                  //{ +0x0000@10 } | .DisallowInCsDam
                                                         
        SDK_MAGIC_PROPERTIES( "_HAM_ACTIVITY_START_FLAGS.$", 0x4, true, 0xdc80df4fa0012aa1 );                                   
        SDK_FIXED_SIZE( ham_activity_start_flags_t, 0x4 );                                   
    };                                                   
};
#include "magic/ham_activity_start_flags_t.end.hpp"
SDK_VERIFY( union win::ham_activity_start_flags_t, 0x4 );
