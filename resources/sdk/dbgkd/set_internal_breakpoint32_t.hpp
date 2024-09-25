#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_internal_breakpoint32_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_SET_INTERNAL_BREAKPOINT32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct set_internal_breakpoint32_t   
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t breakpoint_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BreakpointAddress
        _m01 uint32_t flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
                                         
        SDK_MAGIC_PROPERTIES( "_DBGKD_SET_INTERNAL_BREAKPOINT32.$", 0x8, true, 0x527a71ae4c454250 );                   
        SDK_FIXED_SIZE( set_internal_breakpoint32_t, 0x8 );                   
    };                                   
};
#include "magic/set_internal_breakpoint32_t.end.hpp"
SDK_VERIFY( struct dbgkd::set_internal_breakpoint32_t, 0x8 );
