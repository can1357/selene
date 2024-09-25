#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HIMC__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct himc_t
    {            
                 
        SDK_MAGIC_PROPERTIES( "HIMC__.$", 0x4, true, 0xdc3c51b5e06f4c93 );
        SDK_FIXED_SIZE( himc_t, 0x4 );
    };           
};
SDK_VERIFY( struct win::himc_t, 0x4 );
