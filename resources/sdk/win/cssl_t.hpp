#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CSSL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class cssl_t
    {           
                
        SDK_MAGIC_PROPERTIES( "CSSL.$", 0x1, true, 0x3916cdd467eff363 );
        SDK_FIXED_SIZE( cssl_t, 0x1 );
    };          
};
SDK_VERIFY( class win::cssl_t, 0x1 );
