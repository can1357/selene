#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IContinue]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_continue_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "IContinue.$", 0x8, true, 0x7a1ea6cd4437b2e7 );
        SDK_FIXED_SIZE( i_continue_t, 0x8 );
    };                 
};
SDK_VERIFY( struct win::i_continue_t, 0x8 );
