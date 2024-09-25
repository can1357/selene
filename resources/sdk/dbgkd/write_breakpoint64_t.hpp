#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/write_breakpoint64_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_WRITE_BREAKPOINT64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct write_breakpoint64_t           
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint64_t break_point_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BreakPointAddress
        _m01 uint32_t break_point_handle;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BreakPointHandle
                                          
        SDK_MAGIC_PROPERTIES( "_DBGKD_WRITE_BREAKPOINT64.$", 0x10, true, 0x6538b73e5d9ded1 );                    
        SDK_FIXED_SIZE( write_breakpoint64_t, 0x10 );                    
    };                                    
};
#include "magic/write_breakpoint64_t.end.hpp"
SDK_VERIFY( struct dbgkd::write_breakpoint64_t, 0x10 );
