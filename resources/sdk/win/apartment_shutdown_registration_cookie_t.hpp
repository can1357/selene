#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct APARTMENT_SHUTDOWN_REGISTRATION_COOKIE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct apartment_shutdown_registration_cookie_t
    {                                              
                                                   
        SDK_MAGIC_PROPERTIES( "APARTMENT_SHUTDOWN_REGISTRATION_COOKIE__.$", 0x4, true, 0x56900e5c496d7210 );
        SDK_FIXED_SIZE( apartment_shutdown_registration_cookie_t, 0x4 );
    };                                             
};
SDK_VERIFY( struct win::apartment_shutdown_registration_cookie_t, 0x4 );
