#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class MultiString]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class multi_string_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "MultiString.$", 0x8, true, 0xf1ee04c2813c2fa7 );
        SDK_FIXED_SIZE( multi_string_t, 0x8 );
    };                  
};
SDK_VERIFY( class win::multi_string_t, 0x8 );
