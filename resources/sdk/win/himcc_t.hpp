#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HIMCC__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct himcc_t
    {             
                  
        SDK_MAGIC_PROPERTIES( "HIMCC__.$", 0x4, true, 0x71d432582db7c2ef );
        SDK_FIXED_SIZE( himcc_t, 0x4 );
    };            
};
SDK_VERIFY( struct win::himcc_t, 0x4 );
