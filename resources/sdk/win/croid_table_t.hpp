#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CROIDTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class croid_table_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "CROIDTable.$", 0x1, true, 0xf7caa7bb242b948b );
        SDK_FIXED_SIZE( croid_table_t, 0x1 );
    };                 
};
SDK_VERIFY( class win::croid_table_t, 0x1 );
