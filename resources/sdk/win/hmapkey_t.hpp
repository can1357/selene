#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HMAPKEY__]
    // => Windows 10 v1607
    //
    struct hmapkey_t
    {               
                    
        SDK_MAGIC_PROPERTIES( "HMAPKEY__.$", 0x0, false, 0xdc0b1a754c372861 );
        SDK_FIXED_SIZE( hmapkey_t, 0x4 );
    };              
};
SDK_VERIFY( struct win::hmapkey_t, 0x4 );
