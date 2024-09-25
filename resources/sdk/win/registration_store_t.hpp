#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class RegistrationStore]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class registration_store_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "RegistrationStore.$", 0x1, true, 0x7796271ad25812a3 );
        SDK_FIXED_SIZE( registration_store_t, 0x1 );
    };                        
};
SDK_VERIFY( class win::registration_store_t, 0x1 );
