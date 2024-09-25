#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ITypeLibCatalogInternal]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_type_lib_catalog_internal_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "ITypeLibCatalogInternal.$", 0x8, true, 0x11088aa42f8ec6d2 );
        SDK_FIXED_SIZE( i_type_lib_catalog_internal_t, 0x8 );
    };                                  
};
SDK_VERIFY( struct win::i_type_lib_catalog_internal_t, 0x8 );
