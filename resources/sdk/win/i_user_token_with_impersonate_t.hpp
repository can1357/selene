#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IUserTokenWithImpersonate]
    // => Windows 10 v1607
    //
    struct i_user_token_with_impersonate_t
    {                                     
                                          
        SDK_MAGIC_PROPERTIES( "IUserTokenWithImpersonate.$", 0x0, false, 0xbf33255ff0c741e6 );
        SDK_FIXED_SIZE( i_user_token_with_impersonate_t, 0x8 );
    };                                    
};
SDK_VERIFY( struct win::i_user_token_with_impersonate_t, 0x8 );
