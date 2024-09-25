#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class COIDTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class coid_table_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "COIDTable.$", 0x1, true, 0xb7d0a12c0b523cc1 );
        SDK_FIXED_SIZE( coid_table_t, 0x1 );
    };                
};
SDK_VERIFY( class win::coid_table_t, 0x1 );
