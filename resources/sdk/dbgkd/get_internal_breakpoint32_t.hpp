#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/get_internal_breakpoint32_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_GET_INTERNAL_BREAKPOINT32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct get_internal_breakpoint32_t     
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t breakpoint_address;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BreakpointAddress
        _m01 uint32_t flags;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t calls;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Calls
        _m03 uint32_t max_calls_per_period;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MaxCallsPerPeriod
        _m04 uint32_t min_instructions;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MinInstructions
        _m05 uint32_t max_instructions;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .MaxInstructions
        _m06 uint32_t total_instructions;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TotalInstructions
                                           
        SDK_MAGIC_PROPERTIES( "_DBGKD_GET_INTERNAL_BREAKPOINT32.$", 0x1c, true, 0xc57fd46dfcef0d18 );                     
        SDK_FIXED_SIZE( get_internal_breakpoint32_t, 0x1c );                     
    };                                     
};
#include "magic/get_internal_breakpoint32_t.end.hpp"
SDK_VERIFY( struct dbgkd::get_internal_breakpoint32_t, 0x1c );
