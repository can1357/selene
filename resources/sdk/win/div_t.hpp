#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/div_t.start.hpp"
namespace win
{
    // [struct _div_t]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct div_t          
    {                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                
        _m00 int32_t quot;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .quot
        _m01 int32_t rem;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .rem
                          
        SDK_MAGIC_PROPERTIES( "_div_t.$", 0x8, true, 0x3a4cdbfee11e3146 );     
        SDK_FIXED_SIZE( div_t, 0x8 );     
    };                    
};
#include "magic/div_t.end.hpp"
SDK_VERIFY( struct win::div_t, 0x8 );
