#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/abc_t.start.hpp"
namespace win
{
    // [struct _ABC]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct abc_t            
    {                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 int32_t  abc_a;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .abcA
        _m01 uint32_t abc_b;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .abcB
        _m02 int32_t  abc_c;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .abcC
                            
        SDK_NONVOL_PROPERTIES( "_ABC.$", 0xc, true, 0xdddeea70781a56f3 );      
        SDK_FIXED_SIZE( abc_t, 0xc );      
    };                      
};
#include "magic/abc_t.end.hpp"
SDK_VERIFY( struct win::abc_t, 0xc );
