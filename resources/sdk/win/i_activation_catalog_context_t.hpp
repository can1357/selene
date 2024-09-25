#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IActivationCatalogContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_activation_catalog_context_t
    {                                    
                                         
        SDK_MAGIC_PROPERTIES( "IActivationCatalogContext.$", 0x8, true, 0x6a340dbcfcd8447e );
        SDK_FIXED_SIZE( i_activation_catalog_context_t, 0x8 );
    };                                   
};
SDK_VERIFY( struct win::i_activation_catalog_context_t, 0x8 );
