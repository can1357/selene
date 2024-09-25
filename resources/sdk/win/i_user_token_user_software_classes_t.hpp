#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IUserTokenUserSoftwareClasses]
    // => Windows 10 v1607
    //
    struct i_user_token_user_software_classes_t
    {                                          
                                               
        SDK_MAGIC_PROPERTIES( "IUserTokenUserSoftwareClasses.$", 0x0, false, 0x31b389ebc02446da );
        SDK_FIXED_SIZE( i_user_token_user_software_classes_t, 0x8 );
    };                                         
};
SDK_VERIFY( struct win::i_user_token_user_software_classes_t, 0x8 );
