#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IDebug]
    // => Windows 10 v1607
    //
    struct i_debug_t
    {               
                    
        SDK_MAGIC_PROPERTIES( "IDebug.$", 0x0, false, 0xe77a1de2a9bb7d4c );
        SDK_FIXED_SIZE( i_debug_t, 0x8 );
    };              
};
SDK_VERIFY( struct win::i_debug_t, 0x8 );
