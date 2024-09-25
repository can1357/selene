#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dfss_release_thread_on_idle_t.start.hpp"
namespace etw
{
    // [struct _ETW_DFSS_RELEASE_THREAD_ON_IDLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dfss_release_thread_on_idle_t      
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint32_t current_generation;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentGeneration
        _m01 uint32_t session_selected_to_run;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SessionSelectedToRun
        _m02 uint64_t cycle_base_allowance;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CycleBaseAllowance
        _m03 int64_t  cycles_remaining;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CyclesRemaining
                                              
        SDK_MAGIC_PROPERTIES( "_ETW_DFSS_RELEASE_THREAD_ON_IDLE.$", 0x18, true, 0x7a7f1c9294c34674 );                        
        SDK_FIXED_SIZE( dfss_release_thread_on_idle_t, 0x18 );                        
    };                                        
};
#include "magic/dfss_release_thread_on_idle_t.end.hpp"
SDK_VERIFY( struct etw::dfss_release_thread_on_idle_t, 0x18 );
