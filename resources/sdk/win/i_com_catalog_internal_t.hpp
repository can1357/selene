#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IComCatalogInternal]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_com_catalog_internal_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "IComCatalogInternal.$", 0x8, true, 0x513736788df9cbd0 );
        SDK_FIXED_SIZE( i_com_catalog_internal_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::i_com_catalog_internal_t, 0x8 );
