#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t;     }
namespace nt { struct kthread_t; }

#include "magic/irp_trace_t.start.hpp"
namespace iov
{
    // [struct _IOV_IRP_TRACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct irp_trace_t                                  
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                              
        _m00 struct nt::irp_t*     irp;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Irp
        _m01 struct nt::kthread_t* thread;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Thread
        _m02 int16_t               kernel_apc_disable;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .KernelApcDisable
        _m03 int16_t               special_apc_disable;   //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .SpecialApcDisable
        _m04 uint32_t              combined_apc_disable;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CombinedApcDisable
        _m05 uint8_t               irql;                  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Irql
        _m06 sdk::array<void*, 13> stack_trace;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .StackTrace
                                                        
        SDK_MAGIC_PROPERTIES( "_IOV_IRP_TRACE.$", 0x80, true, 0x52cf7c1f833c50c2 );                     
        SDK_FIXED_SIZE( irp_trace_t, 0x80 );                     
    };                                                  
};
#include "magic/irp_trace_t.end.hpp"
SDK_VERIFY( struct iov::irp_trace_t, 0x80 );
