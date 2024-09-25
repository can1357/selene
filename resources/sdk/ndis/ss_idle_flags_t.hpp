#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ss_idle_flags_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_SS_IDLE_FLAGS]
    // => Windows 10 v1607
    //
    struct ss_idle_flags_t                        
    {                                             
        // Windows 10 v1607                            
        //                                        
        _m00 uint1_t  timer_running;                //{ +0x0000@0  } | .TimerRunning
        _m01 uint1_t  idle_work_item_scheduled;     //{ +0x0000@1  } | .IdleWorkItemScheduled
        _m02 uint1_t  idle_request_submitted;       //{ +0x0000@2  } | .IdleRequestSubmitted
        _m03 uint1_t  suspend_power_irp_requested;  //{ +0x0000@3  } | .SuspendPowerIrpRequested
        _m04 uint1_t  device_suspended;             //{ +0x0000@4  } | .DeviceSuspended
        _m05 uint1_t  resume_power_irp_requested;   //{ +0x0000@5  } | .ResumePowerIrpRequested
        _m06 uint1_t  cancel_work_item_scheduled;   //{ +0x0000@6  } | .CancelWorkItemScheduled
        _m07 uint1_t  idle_request_canceled;        //{ +0x0000@7  } | .IdleRequestCanceled
        _m08 uint1_t  force_idle_transition;        //{ +0x0000@8  } | .ForceIdleTransition
        _m09 uint1_t  stopped;                      //{ +0x0000@9  } | .Stopped
        _m10 uint1_t  device_gone;                  //{ +0x0000@10 } | .DeviceGone
        _m11 uint32_t value;                        //{ +0x0000    } | .Value
                                                  
        SDK_MAGIC_PROPERTIES( "_NDIS_SS_IDLE_FLAGS.$", 0x0, false, 0xaa89114257c08b6e );                            
        SDK_FIXED_SIZE( ss_idle_flags_t, 0x4 );                            
    };                                            
};
#include "magic/ss_idle_flags_t.end.hpp"
SDK_VERIFY( struct ndis::ss_idle_flags_t, 0x4 );
