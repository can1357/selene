#pragma once
#include <sdkgen/support_library.hpp>
#include "idle_state_accounting_t.hpp"

#include "magic/idle_accounting_t.start.hpp"
namespace ppm
{
    // [struct PPM_IDLE_ACCOUNTING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct idle_accounting_t            
    {                                   
        using state_t = sdk::array<struct ppm::idle_state_accounting_t, 1>;                  
                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t state_count;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StateCount
        _m01 uint32_t total_transitions;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TotalTransitions
        _m02 uint32_t reset_count;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ResetCount
        _m03 uint64_t start_time;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StartTime
        _m04 state_t  state;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .State
                                        
        SDK_MAGIC_PROPERTIES( "PPM_IDLE_ACCOUNTING.$", 0x48, true, 0x1584c2d37f4233ca );                  
        SDK_FIXED_SIZE( idle_accounting_t, 0x48 );                  
    };                                  
};
#include "magic/idle_accounting_t.end.hpp"
SDK_VERIFY( struct ppm::idle_accounting_t, 0x48 );
