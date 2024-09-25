#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ordering_t.start.hpp"
namespace arbiter
{
    // [struct _ARBITER_ORDERING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ordering_t       
    {                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint64_t start;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Start
        _m01 uint64_t end;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .End
                            
        SDK_MAGIC_PROPERTIES( "_ARBITER_ORDERING.$", 0x10, true, 0x1f0d878a6b5cf7bc );      
        SDK_FIXED_SIZE( ordering_t, 0x10 );      
    };                      
};
#include "magic/ordering_t.end.hpp"
SDK_VERIFY( struct arbiter::ordering_t, 0x10 );
