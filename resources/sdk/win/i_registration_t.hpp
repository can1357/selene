#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRegistration]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_registration_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IRegistration.$", 0x8, true, 0x34f105a1708aa0ff );
        SDK_FIXED_SIZE( i_registration_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_registration_t, 0x8 );
