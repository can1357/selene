#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/oplock_notify_params_t.start.hpp"
namespace nt
{
    struct irp_t;

    // [struct _OPLOCK_NOTIFY_PARAMS]
    // => WDK 10 (NV)
    //
    struct oplock_notify_params_t                             
    {                                                         
        enum class u0_notify_reason_t : int32_t               
        {                                                     
            interim_timeout = 0x0,                              // WDK 10
            terminated =      0x1,                              // WDK 10
        };                                                    
                                                              
        // WDK 10                                             
        //                                                    
        _m00 u0_notify_reason_t                notify_reason;   //{ +0x0000    } | .NotifyReason
        _m01 void*                             notify_context;  //{ +0x0008    } | .NotifyContext
        _m02 struct nt::irp_t*                 irp;             //{ +0x0010    } | .Irp
        _m03 int32_t                           status;          //{ +0x0018    } | .Status
                                                              
        SDK_NONVOL_PROPERTIES( "_OPLOCK_NOTIFY_PARAMS.$", 0x0, false, 0x875ca3096ffe242a );               
        SDK_FIXED_SIZE( oplock_notify_params_t, 0x20 );               
    };                                                        
};
#include "magic/oplock_notify_params_t.end.hpp"
SDK_VERIFY( struct nt::oplock_notify_params_t, 0x20 );
