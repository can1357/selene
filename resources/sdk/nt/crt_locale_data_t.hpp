#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct __crt_locale_data]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crt_locale_data_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "__crt_locale_data.$", 0x0, true, 0xd1fbeb8e9037b7d9 );
        SDK_FIXED_SIZE( crt_locale_data_t, 0x0 );
    };                      
};
SDK_VERIFY( struct nt::crt_locale_data_t, 0x0 );
