#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct ethread_t; }

#include "magic/pool_trace_t.start.hpp"
namespace verf
{
    // [struct _VF_POOL_TRACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pool_trace_t                        
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                     
        _m00 void*                 address;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 uint64_t              size;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m02 struct nt::ethread_t* thread;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Thread
        _m03 sdk::array<void*, 13> stack_trace;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .StackTrace
                                               
        SDK_MAGIC_PROPERTIES( "_VF_POOL_TRACE.$", 0x80, true, 0x9ce0ef9a1ce4ac50 );            
        SDK_DYNAMIC_SIZE( pool_trace_t );            
    };                                         
};
#include "magic/pool_trace_t.end.hpp"
