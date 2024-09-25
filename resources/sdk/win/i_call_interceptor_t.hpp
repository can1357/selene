#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICallInterceptor]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_call_interceptor_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "ICallInterceptor.$", 0x8, true, 0xd2d85d318518d9a0 );
        SDK_FIXED_SIZE( i_call_interceptor_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_call_interceptor_t, 0x8 );
