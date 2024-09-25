#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ham_activity_properties_flags_t.start.hpp"
namespace win
{
    // [union _HAM_ACTIVITY_PROPERTIES_FLAGS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union ham_activity_properties_flags_t              
    {                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                             
        _m00 uint7_t  task_completion_type;              //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .TaskCompletionType
        _m01 uint2_t  ee_policy;                         //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .EePolicy
        _m02 uint1_t  no_reclaim_for_resource_pressure;  //{ +0x0000@9  +0x0000@9  +0x0000@9  } | .NoReclaimForResourcePressure
        _m03 uint1_t  resume_required;                   //{ +0x0000@10 +0x0000@10 +0x0000@10 } | .ResumeRequired
        _m04 uint1_t  extend_suspend;                    //{ +0x0000@11 +0x0000@11 +0x0000@11 } | .ExtendSuspend
        _m05 uint1_t  defer_transitions;                 //{ +0x0000@12 +0x0000@12 +0x0000@12 } | .DeferTransitions
        _m06 uint1_t  inswap_required;                   //{ +0x0000@13 +0x0000@13 +0x0000@13 } | .InswapRequired
        _m07 uint1_t  terminate_if_cs_blocked;           //{ +0x0000@14 +0x0000@14 +0x0000@14 } | .TerminateIfCsBlocked
        _m08 uint1_t  background_access_state_aware;     //{ +0x0000@15 +0x0000@15 +0x0000@15 } | .BackgroundAccessStateAware
        _m09 uint1_t  is_window;                         //{ +0x0000@16 +0x0000@16 +0x0000@16 } | .IsWindow
        _m10 uint1_t  expire_on_termination;             //{ +0x0000@17 +0x0000@17 +0x0000@17 } | .ExpireOnTermination
        _m11 uint1_t  force_bind_to_current_generation;  //{ +0x0000@18 +0x0000@18 +0x0000@18 } | .ForceBindToCurrentGeneration
        _m12 uint1_t  elastic_recipient;                 //{ +0x0000@19 +0x0000@19 +0x0000@19 } | .ElasticRecipient
        _m13 uint1_t  always_revoke_suspend_extend;      //{ +0x0000@20 +0x0000@20 +0x0000@20 } | .AlwaysRevokeSuspendExtend
        _m14 uint1_t  host_required;                     //{ +0x0000@21 +0x0000@21 +0x0000@21 } | .HostRequired
        _m15 uint1_t  is_multi_instance;                 //{ +0x0000@22 +0x0000@22 +0x0000@22 } | .IsMultiInstance
        _m16 uint2_t  license_type;                      //{ +0x0000@23 +0x0000@23 +0x0000@23 } | .LicenseType
        _m17 uint32_t all;                               //{ +0x0000    +0x0000    +0x0000    } | .All
                                                       
        // Windows 11                                  
        //                                             
        _m18 uint1_t  is_bridge_desktop;                 //{ +0x0000@25 } | .IsBridgeDesktop
                                                       
        SDK_MAGIC_PROPERTIES( "_HAM_ACTIVITY_PROPERTIES_FLAGS.$", 0x4, true, 0x896e51d39a2daa31 );                                 
        SDK_FIXED_SIZE( ham_activity_properties_flags_t, 0x4 );                                 
    };                                                 
};
#include "magic/ham_activity_properties_flags_t.end.hpp"
SDK_VERIFY( union win::ham_activity_properties_flags_t, 0x4 );
