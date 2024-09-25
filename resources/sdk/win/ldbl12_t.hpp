#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ldbl12_t.start.hpp"
namespace win
{
    // [struct _LDBL12]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ldbl12_t                       
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                
        _m00 sdk::array<uint8_t, 12> ld12;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ld12
                                          
        SDK_MAGIC_PROPERTIES( "_LDBL12.$", 0xc, true, 0xf574a40cf8e89bda );     
        SDK_FIXED_SIZE( ldbl12_t, 0xc );     
    };                                    
};
#include "magic/ldbl12_t.end.hpp"
SDK_VERIFY( struct win::ldbl12_t, 0xc );
