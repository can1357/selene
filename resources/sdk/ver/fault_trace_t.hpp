#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct ethread_t; }

#include "magic/fault_trace_t.start.hpp"
namespace ver
{
    // [struct _VI_FAULT_TRACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fault_trace_t                       
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                     
        _m00 struct nt::ethread_t* thread;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Thread
        _m01 sdk::array<void*, 8>  stack_trace;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StackTrace
                                               
        SDK_MAGIC_PROPERTIES( "_VI_FAULT_TRACE.$", 0x48, true, 0xa80f3e56acfeae99 );            
        SDK_FIXED_SIZE( fault_trace_t, 0x48 );            
    };                                         
};
#include "magic/fault_trace_t.end.hpp"
SDK_VERIFY( struct ver::fault_trace_t, 0x48 );
