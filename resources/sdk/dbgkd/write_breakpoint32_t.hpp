#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/write_breakpoint32_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_WRITE_BREAKPOINT32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct write_breakpoint32_t           
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t break_point_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BreakPointAddress
        _m01 uint32_t break_point_handle;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BreakPointHandle
                                          
        SDK_MAGIC_PROPERTIES( "_DBGKD_WRITE_BREAKPOINT32.$", 0x8, true, 0xfc6dd9d489e209c8 );                    
        SDK_FIXED_SIZE( write_breakpoint32_t, 0x8 );                    
    };                                    
};
#include "magic/write_breakpoint32_t.end.hpp"
SDK_VERIFY( struct dbgkd::write_breakpoint32_t, 0x8 );
