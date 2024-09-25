#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IComCatalogLocation]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_com_catalog_location_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "IComCatalogLocation.$", 0x8, true, 0x1655d96cb3235df7 );
        SDK_FIXED_SIZE( i_com_catalog_location_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::i_com_catalog_location_t, 0x8 );
