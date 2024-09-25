#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct _RO_REGISTRATION_COOKIE]
    // => Windows 11
    //
    struct ro_registration_cookie_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "_RO_REGISTRATION_COOKIE.$", 0x0, false, 0xa175b7f7b1a96793 );
        SDK_FIXED_SIZE( ro_registration_cookie_t, 0x1 );
    };                             
};
SDK_VERIFY( struct win::ro_registration_cookie_t, 0x1 );
