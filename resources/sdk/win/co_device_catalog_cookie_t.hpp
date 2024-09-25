#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct CO_DEVICE_CATALOG_COOKIE__]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct co_device_catalog_cookie_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "CO_DEVICE_CATALOG_COOKIE__.$", 0x4, true, 0xc26905205ced41e9 );
        SDK_FIXED_SIZE( co_device_catalog_cookie_t, 0x4 );
    };                               
};
SDK_VERIFY( struct win::co_device_catalog_cookie_t, 0x4 );
