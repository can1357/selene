#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HKL__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hkl_t
    {           
                
        SDK_NONVOL_PROPERTIES( "HKL__.$", 0x4, true, 0x9e282048029785f3 );
        SDK_FIXED_SIZE( hkl_t, 0x4 );
    };          
};
SDK_VERIFY( struct win::hkl_t, 0x4 );
