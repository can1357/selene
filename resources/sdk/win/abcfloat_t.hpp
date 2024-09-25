#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/abcfloat_t.start.hpp"
namespace win
{
    // [struct _ABCFLOAT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct abcfloat_t     
    {                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                
        _m00 float abcf_a;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .abcfA
        _m01 float abcf_b;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .abcfB
        _m02 float abcf_c;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .abcfC
                          
        SDK_NONVOL_PROPERTIES( "_ABCFLOAT.$", 0xc, true, 0x792d879da97d2eb7 );       
        SDK_FIXED_SIZE( abcfloat_t, 0xc );       
    };                    
};
#include "magic/abcfloat_t.end.hpp"
SDK_VERIFY( struct win::abcfloat_t, 0xc );
