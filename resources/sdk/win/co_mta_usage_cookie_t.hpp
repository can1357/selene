#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct CO_MTA_USAGE_COOKIE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct co_mta_usage_cookie_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "CO_MTA_USAGE_COOKIE__.$", 0x4, true, 0xbacf56eb17381fa2 );
        SDK_FIXED_SIZE( co_mta_usage_cookie_t, 0x4 );
    };                          
};
SDK_VERIFY( struct win::co_mta_usage_cookie_t, 0x4 );
