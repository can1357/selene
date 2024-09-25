#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/processor_platform_state_residency_t.start.hpp"
namespace nt
{
    // [struct _PROCESSOR_PLATFORM_STATE_RESIDENCY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct processor_platform_state_residency_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint64_t residency;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Residency
        _m01 uint64_t transition_count;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TransitionCount
                                               
        SDK_MAGIC_PROPERTIES( "_PROCESSOR_PLATFORM_STATE_RESIDENCY.$", 0x10, true, 0x6c8bebadfa0b8d6c );                 
        SDK_FIXED_SIZE( processor_platform_state_residency_t, 0x10 );                 
    };                                         
};
#include "magic/processor_platform_state_residency_t.end.hpp"
SDK_VERIFY( struct nt::processor_platform_state_residency_t, 0x10 );
