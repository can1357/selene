#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HDC__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hdc_t
    {           
                
        SDK_NONVOL_PROPERTIES( "HDC__.$", 0x4, true, 0xc46137f7b532107f );
        SDK_FIXED_SIZE( hdc_t, 0x4 );
    };          
};
SDK_VERIFY( struct win::hdc_t, 0x4 );
