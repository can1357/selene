#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crt_locale_pointers_t.start.hpp"
namespace nt
{
    struct crt_locale_data_t;
    struct crt_multibyte_data_t;

    // [struct __crt_locale_pointers]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct crt_locale_pointers_t                      
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                            
        _m00 struct nt::crt_locale_data_t*    locinfo;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .locinfo
        _m01 struct nt::crt_multibyte_data_t* mbcinfo;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .mbcinfo
                                                      
        SDK_NONVOL_PROPERTIES( "__crt_locale_pointers.$", 0x10, true, 0xa6f59d4f2a0502a1 );        
        SDK_FIXED_SIZE( crt_locale_pointers_t, 0x10 );        
    };                                                
};
#include "magic/crt_locale_pointers_t.end.hpp"
SDK_VERIFY( struct nt::crt_locale_pointers_t, 0x10 );
