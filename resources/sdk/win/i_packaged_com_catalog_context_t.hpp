#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPackagedComCatalogContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_packaged_com_catalog_context_t
    {                                      
                                           
        SDK_MAGIC_PROPERTIES( "IPackagedComCatalogContext.$", 0x8, true, 0x5d678c8f838f2835 );
        SDK_FIXED_SIZE( i_packaged_com_catalog_context_t, 0x8 );
    };                                     
};
SDK_VERIFY( struct win::i_packaged_com_catalog_context_t, 0x8 );
