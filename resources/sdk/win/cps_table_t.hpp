#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CPSTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class cps_table_t
    {                
                     
        SDK_MAGIC_PROPERTIES( "CPSTable.$", 0x1, true, 0xa07a32de8441187f );
        SDK_FIXED_SIZE( cps_table_t, 0x1 );
    };               
};
SDK_VERIFY( class win::cps_table_t, 0x1 );
