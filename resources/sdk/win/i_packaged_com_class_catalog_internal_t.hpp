#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPackagedComClassCatalogInternal]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_packaged_com_class_catalog_internal_t
    {                                             
                                                  
        SDK_MAGIC_PROPERTIES( "IPackagedComClassCatalogInternal.$", 0x8, true, 0x2f06fa7d32218a49 );
        SDK_FIXED_SIZE( i_packaged_com_class_catalog_internal_t, 0x8 );
    };                                            
};
SDK_VERIFY( struct win::i_packaged_com_class_catalog_internal_t, 0x8 );
