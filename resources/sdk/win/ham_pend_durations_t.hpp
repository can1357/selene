#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ham_pend_durations_t.start.hpp"
namespace win
{
    // [union _HAM_PEND_DURATIONS]
    // => Windows 11
    //
    union ham_pend_durations_t                          
    {                                                   
        // Windows 11                                   
        //                                              
        _m00 uint32_t                resource_pend_perf;  //{ +0x0000    } | .ResourcePendPerf
        _m01 uint32_t                host_optimization;   //{ +0x0004    } | .HostOptimization
        _m02 uint32_t                licensing;           //{ +0x0008    } | .Licensing
        _m03 uint32_t                host_state;          //{ +0x000c    } | .HostState
        _m04 uint32_t                host_terminate;      //{ +0x0010    } | .HostTerminate
        _m05 sdk::array<uint32_t, 5> array;               //{ +0x0000    } | .Array
                                                        
        SDK_MAGIC_PROPERTIES( "_HAM_PEND_DURATIONS.$", 0x0, false, 0xd7e392e761f08a82 );                   
        SDK_FIXED_SIZE( ham_pend_durations_t, 0x14 );                   
    };                                                  
};
#include "magic/ham_pend_durations_t.end.hpp"
SDK_VERIFY( union win::ham_pend_durations_t, 0x14 );
