#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_power_state_context_t.start.hpp"
namespace nt
{
    // [struct _SYSTEM_POWER_STATE_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct system_power_state_context_t         
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint4_t  target_system_state;        //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .TargetSystemState
        _m01 uint4_t  effective_system_state;     //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .EffectiveSystemState
        _m02 uint4_t  current_system_state;       //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .CurrentSystemState
        _m03 uint1_t  ignore_hibernation_path;    //{ +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 +0x0000@20 } | .IgnoreHibernationPath
        _m04 uint1_t  pseudo_transition;          //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .PseudoTransition
        _m05 uint32_t context_as_ulong;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ContextAsUlong
                                                
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m06 uint1_t  kernel_soft_reboot;         //{ +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 } | .KernelSoftReboot
        _m07 uint1_t  directed_drips_transition;  //{ +0x0000@23 +0x0000@23 +0x0000@23 +0x0000@23 } | .DirectedDripsTransition
                                                
        SDK_NONVOL_PROPERTIES( "_SYSTEM_POWER_STATE_CONTEXT.$", 0x4, true, 0x3e527f418dc302e9 );                          
        SDK_FIXED_SIZE( system_power_state_context_t, 0x4 );                          
    };                                          
};
#include "magic/system_power_state_context_t.end.hpp"
SDK_VERIFY( struct nt::system_power_state_context_t, 0x4 );
