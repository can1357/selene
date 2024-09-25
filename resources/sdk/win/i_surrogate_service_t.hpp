#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISurrogateService]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_surrogate_service_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "ISurrogateService.$", 0x8, true, 0xce2b1142eaa555df );
        SDK_FIXED_SIZE( i_surrogate_service_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_surrogate_service_t, 0x8 );
