#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CPIDTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class cpid_table_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "CPIDTable.$", 0x1, true, 0x4cc4c853f5d5182b );
        SDK_FIXED_SIZE( cpid_table_t, 0x1 );
    };                
};
SDK_VERIFY( class win::cpid_table_t, 0x1 );
