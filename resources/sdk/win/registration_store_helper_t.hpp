#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class RegistrationStoreHelper]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class registration_store_helper_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "RegistrationStoreHelper.$", 0x10, true, 0xf8815869f9ede97 );
        SDK_FIXED_SIZE( registration_store_helper_t, 0x10 );
    };                               
};
SDK_VERIFY( class win::registration_store_helper_t, 0x10 );
