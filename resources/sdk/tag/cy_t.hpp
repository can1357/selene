#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cy_t.start.hpp"
namespace tag
{
    // [union tagCY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union cy_t              
    {                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t lo;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lo
        _m01 int32_t  hi;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Hi
        _m02 int64_t  int64;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .int64
                            
        SDK_MAGIC_PROPERTIES( "tagCY.$", 0x8, true, 0x388cfb6501fa55f1 );      
        SDK_FIXED_SIZE( cy_t, 0x8 );      
    };                      
};
#include "magic/cy_t.end.hpp"
SDK_VERIFY( union tag::cy_t, 0x8 );
