#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ham_activity_revoke_flags_t.start.hpp"
namespace win
{
    // [union _HAM_ACTIVITY_REVOKE_FLAGS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union ham_activity_revoke_flags_t                 
    {                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint1_t  revoke_in_shell_suspend;          //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .RevokeInShellSuspend
        _m01 uint1_t  revoke_in_battery_saver;          //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .RevokeInBatterySaver
        _m02 uint1_t  revoke_in_dpl_locked;             //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .RevokeInDplLocked
        _m03 uint1_t  revoke_in_dc_power;               //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .RevokeInDcPower
        _m04 uint1_t  revoke_in_thermal_limited;        //{ +0x0000@6  +0x0000@6  +0x0000@6  } | .RevokeInThermalLimited
        _m05 uint1_t  revoke_when_host_not_active;      //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .RevokeWhenHostNotActive
        _m06 uint1_t  revoke_when_host_resume_pending;  //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .RevokeWhenHostResumePending
        _m07 uint32_t all;                              //{ +0x0000    +0x0000    +0x0000    } | .All
                                                      
        // Windows 10 v2004, Windows 10 v20H2                                
        //                                            
        _m08 uint1_t  revoke_in_cs_immediate;           //{ +0x0000@2  +0x0000@2  } | .RevokeInCsImmediate
        _m09 uint1_t  revoke_in_cs_delayed;             //{ +0x0000@3  +0x0000@3  } | .RevokeInCsDelayed
                                                      
        // Windows 11                                 
        //                                            
        _m10 uint1_t  revoke_in_cs_plm_immediate;       //{ +0x0000@2  } | .RevokeInCsPlmImmediate
        _m11 uint1_t  revoke_in_cs_plm_delayed;         //{ +0x0000@3  } | .RevokeInCsPlmDelayed
        _m12 uint1_t  revoke_in_cs_dam_immediate;       //{ +0x0000@9  } | .RevokeInCsDamImmediate
                                                      
        SDK_MAGIC_PROPERTIES( "_HAM_ACTIVITY_REVOKE_FLAGS.$", 0x4, true, 0xcc25325c22ead989 );                                
        SDK_FIXED_SIZE( ham_activity_revoke_flags_t, 0x4 );                                
    };                                                
};
#include "magic/ham_activity_revoke_flags_t.end.hpp"
SDK_VERIFY( union win::ham_activity_revoke_flags_t, 0x4 );
