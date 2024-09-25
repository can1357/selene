#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class COXIDTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class coxid_table_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "COXIDTable.$", 0x1, true, 0xdb159c0e91eadd3f );
        SDK_FIXED_SIZE( coxid_table_t, 0x1 );
    };                 
};
SDK_VERIFY( class win::coxid_table_t, 0x1 );
