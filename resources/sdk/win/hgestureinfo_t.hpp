#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HGESTUREINFO__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hgestureinfo_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "HGESTUREINFO__.$", 0x4, true, 0x56ca980353838526 );
        SDK_FIXED_SIZE( hgestureinfo_t, 0x4 );
    };                   
};
SDK_VERIFY( struct win::hgestureinfo_t, 0x4 );
