#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IUriBuilderFactory]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_uri_builder_factory_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "IUriBuilderFactory.$", 0x8, true, 0x800fa8eb107e1b7e );
        SDK_FIXED_SIZE( i_uri_builder_factory_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_uri_builder_factory_t, 0x8 );
