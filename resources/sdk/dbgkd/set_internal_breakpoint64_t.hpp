#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_internal_breakpoint64_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_SET_INTERNAL_BREAKPOINT64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct set_internal_breakpoint64_t   
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint64_t breakpoint_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BreakpointAddress
        _m01 uint32_t flags;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
                                         
        SDK_MAGIC_PROPERTIES( "_DBGKD_SET_INTERNAL_BREAKPOINT64.$", 0x10, true, 0x5af053dbe59e0d2 );                   
        SDK_FIXED_SIZE( set_internal_breakpoint64_t, 0x10 );                   
    };                                   
};
#include "magic/set_internal_breakpoint64_t.end.hpp"
SDK_VERIFY( struct dbgkd::set_internal_breakpoint64_t, 0x10 );
