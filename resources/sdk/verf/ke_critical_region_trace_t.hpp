#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct ethread_t; }

#include "magic/ke_critical_region_trace_t.start.hpp"
namespace verf
{
    // [struct _VF_KE_CRITICAL_REGION_TRACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ke_critical_region_trace_t          
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                     
        _m00 struct nt::ethread_t* thread;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Thread
        _m01 sdk::array<void*, 7>  stack_trace;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StackTrace
                                               
        SDK_MAGIC_PROPERTIES( "_VF_KE_CRITICAL_REGION_TRACE.$", 0x40, true, 0x7d123f008c834c8b );            
        SDK_FIXED_SIZE( ke_critical_region_trace_t, 0x40 );            
    };                                         
};
#include "magic/ke_critical_region_trace_t.end.hpp"
SDK_VERIFY( struct verf::ke_critical_region_trace_t, 0x40 );
