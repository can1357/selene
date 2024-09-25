#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/restore_breakpoint_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_RESTORE_BREAKPOINT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct restore_breakpoint_t          
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t break_point_handle;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BreakPointHandle
                                         
        SDK_MAGIC_PROPERTIES( "_DBGKD_RESTORE_BREAKPOINT.$", 0x4, true, 0x6e8dc65abaf0d64c );                   
        SDK_FIXED_SIZE( restore_breakpoint_t, 0x4 );                   
    };                                   
};
#include "magic/restore_breakpoint_t.end.hpp"
SDK_VERIFY( struct dbgkd::restore_breakpoint_t, 0x4 );
