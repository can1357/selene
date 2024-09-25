#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CIPIDTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class cipid_table_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "CIPIDTable.$", 0x1, true, 0x6112b2c4b697c3a5 );
        SDK_FIXED_SIZE( cipid_table_t, 0x1 );
    };                 
};
SDK_VERIFY( class win::cipid_table_t, 0x1 );
