#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ldiv_t.start.hpp"
namespace win
{
    // [struct _ldiv_t]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ldiv_t         
    {                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                
        _m00 int32_t quot;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .quot
        _m01 int32_t rem;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .rem
                          
        SDK_MAGIC_PROPERTIES( "_ldiv_t.$", 0x8, true, 0x8230e2d666ee3642 );     
        SDK_FIXED_SIZE( ldiv_t, 0x8 );     
    };                    
};
#include "magic/ldiv_t.end.hpp"
SDK_VERIFY( struct win::ldiv_t, 0x8 );
