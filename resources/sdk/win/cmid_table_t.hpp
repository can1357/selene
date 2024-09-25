#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CMIDTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class cmid_table_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "CMIDTable.$", 0x1, true, 0x6536c955073de7e1 );
        SDK_FIXED_SIZE( cmid_table_t, 0x1 );
    };                
};
SDK_VERIFY( class win::cmid_table_t, 0x1 );
