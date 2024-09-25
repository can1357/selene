#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IServiceProvider]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_service_provider_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IServiceProvider.$", 0x8, true, 0xa20d44d54e4b984d );
        SDK_FIXED_SIZE( i_service_provider_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_service_provider_t, 0x8 );
