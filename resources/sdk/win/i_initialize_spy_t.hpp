#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInitializeSpy]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_initialize_spy_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IInitializeSpy.$", 0x8, true, 0xe6b704f238bd2850 );
        SDK_FIXED_SIZE( i_initialize_spy_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_initialize_spy_t, 0x8 );
