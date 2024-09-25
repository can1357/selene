#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HSTR__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hstr_t
    {            
                 
        SDK_NONVOL_PROPERTIES( "HSTR__.$", 0x4, true, 0x6d085e38ded3dc35 );
        SDK_FIXED_SIZE( hstr_t, 0x4 );
    };           
};
SDK_VERIFY( struct win::hstr_t, 0x4 );
