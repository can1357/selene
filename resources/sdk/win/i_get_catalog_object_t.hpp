#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IGetCatalogObject]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_get_catalog_object_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IGetCatalogObject.$", 0x8, true, 0x5137a2ec99948495 );
        SDK_FIXED_SIZE( i_get_catalog_object_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_get_catalog_object_t, 0x8 );
