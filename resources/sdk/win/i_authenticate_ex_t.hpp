#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IAuthenticateEx]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_authenticate_ex_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IAuthenticateEx.$", 0x8, true, 0xb86246a2e856973 );
        SDK_FIXED_SIZE( i_authenticate_ex_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_authenticate_ex_t, 0x8 );
