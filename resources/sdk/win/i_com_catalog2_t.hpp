#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IComCatalog2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_com_catalog2_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IComCatalog2.$", 0x8, true, 0x766e305d6fd7dbe3 );
        SDK_FIXED_SIZE( i_com_catalog2_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_com_catalog2_t, 0x8 );
