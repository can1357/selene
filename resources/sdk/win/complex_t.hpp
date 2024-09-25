#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/complex_t.start.hpp"
namespace win
{
    // [struct _complex]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct complex_t  
    {                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //            
        _m00 double x;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .x
        _m01 double y;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .y
                      
        SDK_MAGIC_PROPERTIES( "_complex.$", 0x10, true, 0xfb90d19636fc03ef );  
        SDK_FIXED_SIZE( complex_t, 0x10 );  
    };                
};
#include "magic/complex_t.end.hpp"
SDK_VERIFY( struct win::complex_t, 0x10 );
