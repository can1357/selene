#pragma once
#include <sdkgen/support_library.hpp>
#include "system_processor_performance_hitcount_t.hpp"

#include "magic/system_processor_performance_state_distribution_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PROCESSOR_PERFORMANCE_STATE_DISTRIBUTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_processor_performance_state_distribution_t
    {                                                       
        using states_t = sdk::array<struct win::system_processor_performance_hitcount_t, 1>;                 
                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                              
        _m00 uint32_t  processor_number;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessorNumber
        _m01 uint32_t  state_count;                           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .StateCount
        _m02 states_t  states;                                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .States
                                                            
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PROCESSOR_PERFORMANCE_STATE_DISTRIBUTION.$", 0x18, true, 0xd96632e90c83114b );                 
        SDK_FIXED_SIZE( system_processor_performance_state_distribution_t, 0x18 );                 
    };                                                      
};
#include "magic/system_processor_performance_state_distribution_t.end.hpp"
SDK_VERIFY( struct win::system_processor_performance_state_distribution_t, 0x18 );
