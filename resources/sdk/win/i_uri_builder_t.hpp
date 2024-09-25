#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IUriBuilder]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_uri_builder_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "IUriBuilder.$", 0x8, true, 0x54bdfc2844e98bed );
        SDK_FIXED_SIZE( i_uri_builder_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::i_uri_builder_t, 0x8 );
