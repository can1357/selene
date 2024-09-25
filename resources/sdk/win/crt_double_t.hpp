#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crt_double_t.start.hpp"
namespace win
{
    // [struct _CRT_DOUBLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crt_double_t
    {                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //            
        _m00 double x;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .x
                       
        SDK_MAGIC_PROPERTIES( "_CRT_DOUBLE.$", 0x8, true, 0x7137a7fed4af6504 );  
        SDK_FIXED_SIZE( crt_double_t, 0x8 );  
    };                 
};
#include "magic/crt_double_t.end.hpp"
SDK_VERIFY( struct win::crt_double_t, 0x8 );
