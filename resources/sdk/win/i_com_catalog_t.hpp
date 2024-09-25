#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IComCatalog]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_com_catalog_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "IComCatalog.$", 0x8, true, 0xfe19575d59085d3d );
        SDK_FIXED_SIZE( i_com_catalog_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::i_com_catalog_t, 0x8 );
