#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ldouble_t.start.hpp"
namespace win
{
    // [struct _LDOUBLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ldouble_t                    
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2   
        //                              
        _m00 sdk::array<uint8_t, 10> ld;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ld
                                        
        SDK_MAGIC_PROPERTIES( "_LDOUBLE.$", 0xa, true, 0x51a98440f14b32e5 );   
        SDK_FIXED_SIZE( ldouble_t, 0xa );   
    };                                  
};
#include "magic/ldouble_t.end.hpp"
SDK_VERIFY( struct win::ldouble_t, 0xa );
