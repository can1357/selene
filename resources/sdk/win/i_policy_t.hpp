#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPolicy]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_policy_t
    {                
                     
        SDK_MAGIC_PROPERTIES( "IPolicy.$", 0x8, true, 0xca9db055a7729100 );
        SDK_FIXED_SIZE( i_policy_t, 0x8 );
    };               
};
SDK_VERIFY( struct win::i_policy_t, 0x8 );
