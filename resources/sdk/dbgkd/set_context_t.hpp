#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_context_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_SET_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct set_context_t            
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t context_flags;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ContextFlags
                                    
        SDK_MAGIC_PROPERTIES( "_DBGKD_SET_CONTEXT.$", 0x4, true, 0x652b22380c8181b9 );              
        SDK_FIXED_SIZE( set_context_t, 0x4 );              
    };                              
};
#include "magic/set_context_t.end.hpp"
SDK_VERIFY( struct dbgkd::set_context_t, 0x4 );
