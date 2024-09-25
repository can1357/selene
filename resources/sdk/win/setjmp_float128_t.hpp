#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setjmp_float128_t.start.hpp"
namespace win
{
    // [struct _SETJMP_FLOAT128]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct setjmp_float128_t              
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                
        _m00 sdk::array<uint64_t, 2> part;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Part
                                          
        SDK_MAGIC_PROPERTIES( "_SETJMP_FLOAT128.$", 0x10, true, 0xe0e5cdbe1cdf834b );     
        SDK_FIXED_SIZE( setjmp_float128_t, 0x10 );     
    };                                    
};
#include "magic/setjmp_float128_t.end.hpp"
SDK_VERIFY( struct win::setjmp_float128_t, 0x10 );
