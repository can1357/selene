#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISynchronize]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_synchronize_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "ISynchronize.$", 0x8, true, 0xcb2da8abaacacf70 );
        SDK_FIXED_SIZE( i_synchronize_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::i_synchronize_t, 0x8 );
