#pragma once
#include <sdkgen/support_library.hpp>
#include "idle_state_accounting_ex_t.hpp"

#include "magic/idle_accounting_ex_t.start.hpp"
namespace ppm
{
    // [struct PPM_IDLE_ACCOUNTING_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct idle_accounting_ex_t         
    {                                   
        using state_t = sdk::array<struct ppm::idle_state_accounting_ex_t, 1>;                  
                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t state_count;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StateCount
        _m01 uint32_t total_transitions;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TotalTransitions
        _m02 uint32_t reset_count;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ResetCount
        _m03 uint32_t abort_count;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .AbortCount
        _m04 uint64_t start_time;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StartTime
        _m05 state_t  state;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .State
                                        
        SDK_MAGIC_PROPERTIES( "PPM_IDLE_ACCOUNTING_EX.$", 0x1b8, true, 0xb23752603d41fdbe );                  
        SDK_FIXED_SIZE( idle_accounting_ex_t, 0x1b8 );                  
    };                                  
};
#include "magic/idle_accounting_ex_t.end.hpp"
SDK_VERIFY( struct ppm::idle_accounting_ex_t, 0x1b8 );
