#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICancelMethodCalls]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_cancel_method_calls_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "ICancelMethodCalls.$", 0x8, true, 0x7fb3660e94b46405 );
        SDK_FIXED_SIZE( i_cancel_method_calls_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_cancel_method_calls_t, 0x8 );
