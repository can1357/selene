#pragma once
#include <sdkgen/support_library.hpp>
#include "processor_idle_state_t.hpp"

#include "magic/processor_idle_states_t.start.hpp"
namespace win
{
    // [struct _PROCESSOR_IDLE_STATES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct processor_idle_states_t      
    {                                   
        using state_t = sdk::array<struct win::processor_idle_state_t, 1>;                  
                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t size;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t revision;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Revision
        _m02 uint32_t count;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Count
        _m03 uint32_t type;               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Type
        _m04 uint64_t target_processors;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetProcessors
        _m05 state_t  state;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .State
                                        
        SDK_MAGIC_PROPERTIES( "_PROCESSOR_IDLE_STATES.$", 0x38, true, 0x74799cf07505e0ee );                  
        SDK_FIXED_SIZE( processor_idle_states_t, 0x38 );                  
    };                                  
};
#include "magic/processor_idle_states_t.end.hpp"
SDK_VERIFY( struct win::processor_idle_states_t, 0x38 );
