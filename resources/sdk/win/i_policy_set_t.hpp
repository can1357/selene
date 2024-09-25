#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPolicySet]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_policy_set_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "IPolicySet.$", 0x8, true, 0x2129de80ebd0571d );
        SDK_FIXED_SIZE( i_policy_set_t, 0x8 );
    };                   
};
SDK_VERIFY( struct win::i_policy_set_t, 0x8 );
