#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct ethread_t; }
namespace nt { struct irp_t;     }

#include "magic/forced_pending_trace_t.start.hpp"
namespace iov
{
    // [struct _IOV_FORCED_PENDING_TRACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct forced_pending_trace_t              
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                     
        _m00 struct nt::irp_t*     irp;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Irp
        _m01 struct nt::ethread_t* thread;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Thread
        _m02 sdk::array<void*, 62> stack_trace;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StackTrace
                                               
        SDK_MAGIC_PROPERTIES( "_IOV_FORCED_PENDING_TRACE.$", 0x200, true, 0x9b7f88d0f67329a6 );            
        SDK_FIXED_SIZE( forced_pending_trace_t, 0x200 );            
    };                                         
};
#include "magic/forced_pending_trace_t.end.hpp"
SDK_VERIFY( struct iov::forced_pending_trace_t, 0x200 );
