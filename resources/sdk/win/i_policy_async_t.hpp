#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPolicyAsync]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_policy_async_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IPolicyAsync.$", 0x8, true, 0x382cd154668e386 );
        SDK_FIXED_SIZE( i_policy_async_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_policy_async_t, 0x8 );
