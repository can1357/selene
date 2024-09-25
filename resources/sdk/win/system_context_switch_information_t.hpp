#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_context_switch_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_CONTEXT_SWITCH_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_context_switch_information_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t context_switches;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ContextSwitches
        _m01 uint32_t find_any;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .FindAny
        _m02 uint32_t find_last;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FindLast
        _m03 uint32_t find_ideal;               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .FindIdeal
        _m04 uint32_t idle_any;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IdleAny
        _m05 uint32_t idle_current;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .IdleCurrent
        _m06 uint32_t idle_last;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IdleLast
        _m07 uint32_t idle_ideal;               //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .IdleIdeal
        _m08 uint32_t preempt_any;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PreemptAny
        _m09 uint32_t preempt_current;          //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .PreemptCurrent
        _m10 uint32_t preempt_last;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PreemptLast
        _m11 uint32_t switch_to_idle;           //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .SwitchToIdle
                                              
        SDK_MAGIC_PROPERTIES( "_SYSTEM_CONTEXT_SWITCH_INFORMATION.$", 0x30, true, 0x19e777dd18572a3f );                 
        SDK_FIXED_SIZE( system_context_switch_information_t, 0x30 );                 
    };                                        
};
#include "magic/system_context_switch_information_t.end.hpp"
SDK_VERIFY( struct win::system_context_switch_information_t, 0x30 );
