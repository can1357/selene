#pragma once
#include <sdkgen/support_library.hpp>
#include "processor_platform_state_residency_t.hpp"

#include "magic/processor_platform_state_residencies_t.start.hpp"
namespace nt
{
    // [struct _PROCESSOR_PLATFORM_STATE_RESIDENCIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct processor_platform_state_residencies_t
    {                                            
        using states_t = sdk::array<struct nt::processor_platform_state_residency_t, 1>;       
                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                    
        _m00 uint32_t  count;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 states_t  states;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .States
                                                 
        SDK_MAGIC_PROPERTIES( "_PROCESSOR_PLATFORM_STATE_RESIDENCIES.$", 0x18, true, 0x50d3e8cef05dc87 );       
        SDK_FIXED_SIZE( processor_platform_state_residencies_t, 0x18 );       
    };                                           
};
#include "magic/processor_platform_state_residencies_t.end.hpp"
SDK_VERIFY( struct nt::processor_platform_state_residencies_t, 0x18 );
