#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IExtensionCatalogContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_extension_catalog_context_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "IExtensionCatalogContext.$", 0x8, true, 0x3a69cc4bf563a36c );
        SDK_FIXED_SIZE( i_extension_catalog_context_t, 0x8 );
    };                                  
};
SDK_VERIFY( struct win::i_extension_catalog_context_t, 0x8 );
