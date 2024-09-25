#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IUserTokenInternal]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_user_token_internal_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "IUserTokenInternal.$", 0x8, true, 0x16e26b3bde81f76c );
        SDK_FIXED_SIZE( i_user_token_internal_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_user_token_internal_t, 0x8 );
