#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class OpaqueString]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class opaque_string_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "OpaqueString.$", 0x8, true, 0x70cb326e5e11dbb3 );
        SDK_FIXED_SIZE( opaque_string_t, 0x8 );
    };                   
};
SDK_VERIFY( class win::opaque_string_t, 0x8 );
