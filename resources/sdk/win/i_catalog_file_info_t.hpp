#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICatalogFileInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_catalog_file_info_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "ICatalogFileInfo.$", 0x8, true, 0x93426c64fbcbe8f0 );
        SDK_FIXED_SIZE( i_catalog_file_info_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_catalog_file_info_t, 0x8 );
