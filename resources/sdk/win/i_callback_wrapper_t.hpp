#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICallbackWrapper]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_callback_wrapper_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "ICallbackWrapper.$", 0x8, true, 0x7d2af815c7c26791 );
        SDK_FIXED_SIZE( i_callback_wrapper_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_callback_wrapper_t, 0x8 );
