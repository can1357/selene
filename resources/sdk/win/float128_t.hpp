#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/float128_t.start.hpp"
namespace win
{
    // [struct _FLOAT128]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct float128_t          
    {                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 int64_t low_part;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LowPart
        _m01 int64_t high_part;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .HighPart
                               
        SDK_NONVOL_PROPERTIES( "_FLOAT128.$", 0x10, true, 0xb5604c9f3a9102 );          
        SDK_FIXED_SIZE( float128_t, 0x10 );          
    };                         
};
#include "magic/float128_t.end.hpp"
SDK_VERIFY( struct win::float128_t, 0x10 );
