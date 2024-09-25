#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crt_float_t.start.hpp"
namespace win
{
    // [struct _CRT_FLOAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crt_float_t
    {                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //           
        _m00 float f;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .f
                      
        SDK_MAGIC_PROPERTIES( "_CRT_FLOAT.$", 0x4, true, 0x79df554c179a6f0 );  
        SDK_FIXED_SIZE( crt_float_t, 0x4 );  
    };                
};
#include "magic/crt_float_t.end.hpp"
SDK_VERIFY( struct win::crt_float_t, 0x4 );
