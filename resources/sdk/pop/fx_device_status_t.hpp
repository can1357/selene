#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fx_device_status_t.start.hpp"
namespace pop
{
    // [union _POP_FX_DEVICE_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union fx_device_status_t                         
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                           
        _m00 int32_t value;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
        _m01 uint1_t system_transition;                //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SystemTransition
        _m02 uint1_t pep_d0_notify;                    //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PepD0Notify
        _m03 uint1_t idle_timer_on;                    //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .IdleTimerOn
        _m04 uint1_t ignore_idle_timeout;              //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .IgnoreIdleTimeout
        _m05 uint1_t irp_in_use;                       //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .IrpInUse
        _m06 uint1_t irp_pending;                      //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .IrpPending
        _m07 uint1_t dpnr_device_notified;             //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .DPNRDeviceNotified
        _m08 uint1_t dpnr_received_from_pep;           //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .DPNRReceivedFromPep
        _m09 uint1_t irp_first_pending_index;          //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .IrpFirstPendingIndex
        _m10 uint1_t irp_last_pending_index;           //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .IrpLastPendingIndex
                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                           
        _m11 uint1_t s_irp_blocked;                    //{ +0x0000@10 +0x0000@10 +0x0000@10 } | .SIrpBlocked
        _m12 uint1_t block_fast_resume;                //{ +0x0000@11 +0x0000@11 +0x0000@11 } | .BlockFastResume
        _m13 uint1_t directed_powered_down;            //{ +0x0000@12 +0x0000@12 +0x0000@12 } | .DirectedPoweredDown
        _m14 uint1_t directed_transition_in_progress;  //{ +0x0000@13 +0x0000@13 +0x0000@13 } | .DirectedTransitionInProgress
                                                     
        SDK_MAGIC_PROPERTIES( "_POP_FX_DEVICE_STATUS.$", 0x4, true, 0xac3361e95142d946 );                                
        SDK_FIXED_SIZE( fx_device_status_t, 0x4 );                                
    };                                               
};
#include "magic/fx_device_status_t.end.hpp"
SDK_VERIFY( union pop::fx_device_status_t, 0x4 );
