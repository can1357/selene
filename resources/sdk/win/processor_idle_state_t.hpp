#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/processor_idle_state_t.start.hpp"
namespace win
{
    struct processor_idle_times_t;

    // [struct _PROCESSOR_IDLE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct processor_idle_state_t                        
    {                                                    
        using pprocessor_idle_handler_t = sdk::function<int32_t(uint64_t, struct win::processor_idle_times_t*)>*;                 
                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                               
        _m00 uint8_t                    state_type;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StateType
        _m01 uint32_t                   state_flags;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .StateFlags
        _m02 uint32_t                   hardware_latency;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HardwareLatency
        _m03 uint32_t                   power;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Power
        _m04 uint64_t                   context;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Context
        _m05 pprocessor_idle_handler_t  handler;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Handler
                                                         
        SDK_MAGIC_PROPERTIES( "_PROCESSOR_IDLE_STATE.$", 0x20, true, 0x3475a2e2d92b0247 );                 
        SDK_FIXED_SIZE( processor_idle_state_t, 0x20 );                 
    };                                                   
};
#include "magic/processor_idle_state_t.end.hpp"
SDK_VERIFY( struct win::processor_idle_state_t, 0x20 );
