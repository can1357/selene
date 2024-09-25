#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CGIPTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class cgip_table_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "CGIPTable.$", 0x8, true, 0x4aff63bee49c09db );
        SDK_FIXED_SIZE( cgip_table_t, 0x8 );
    };                
};
SDK_VERIFY( class win::cgip_table_t, 0x8 );
