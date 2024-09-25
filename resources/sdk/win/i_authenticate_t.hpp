#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IAuthenticate]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_authenticate_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IAuthenticate.$", 0x8, true, 0x321a58dfbd169512 );
        SDK_FIXED_SIZE( i_authenticate_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_authenticate_t, 0x8 );
