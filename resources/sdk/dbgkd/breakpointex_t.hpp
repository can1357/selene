#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/breakpointex_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_BREAKPOINTEX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct breakpointex_t               
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t break_point_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BreakPointCount
        _m01 int32_t  continue_status;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ContinueStatus
                                        
        SDK_MAGIC_PROPERTIES( "_DBGKD_BREAKPOINTEX.$", 0x8, true, 0x746ba51f8386539f );                  
        SDK_FIXED_SIZE( breakpointex_t, 0x8 );                  
    };                                  
};
#include "magic/breakpointex_t.end.hpp"
SDK_VERIFY( struct dbgkd::breakpointex_t, 0x8 );
