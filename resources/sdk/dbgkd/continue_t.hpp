#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/continue_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_CONTINUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct continue_t                
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                           
        _m00 int32_t continue_status;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ContinueStatus
                                     
        SDK_MAGIC_PROPERTIES( "_DBGKD_CONTINUE.$", 0x4, true, 0x8734c30c16966c51 );                
        SDK_FIXED_SIZE( continue_t, 0x4 );                
    };                               
};
#include "magic/continue_t.end.hpp"
SDK_VERIFY( struct dbgkd::continue_t, 0x4 );
