#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct _HMAPPER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hmapper_t
    {               
                    
        SDK_MAGIC_PROPERTIES( "_HMAPPER.$", 0x0, true, 0xd81665d86ba0942 );
        SDK_FIXED_SIZE( hmapper_t, 0x0 );
    };              
};
SDK_VERIFY( struct win::hmapper_t, 0x0 );
