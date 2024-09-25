#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IComCatalogSettings]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_com_catalog_settings_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "IComCatalogSettings.$", 0x8, true, 0xa088b363f1df5cc9 );
        SDK_FIXED_SIZE( i_com_catalog_settings_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::i_com_catalog_settings_t, 0x8 );
