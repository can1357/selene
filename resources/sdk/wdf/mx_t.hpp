#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [class Mx]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class mx_t
    {         
              
        SDK_MAGIC_PROPERTIES( "Mx.$", 0x1, true, 0x7946cb9154bc1493 );
        SDK_FIXED_SIZE( mx_t, 0x1 );
    };        
};
SDK_VERIFY( class wdf::mx_t, 0x1 );
