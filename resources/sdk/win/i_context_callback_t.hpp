#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IContextCallback]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_context_callback_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IContextCallback.$", 0x8, true, 0xe26597645d7a68f7 );
        SDK_FIXED_SIZE( i_context_callback_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_context_callback_t, 0x8 );
