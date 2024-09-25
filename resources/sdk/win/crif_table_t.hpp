#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CRIFTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class crif_table_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "CRIFTable.$", 0x1, true, 0xd99a423078bcb656 );
        SDK_FIXED_SIZE( crif_table_t, 0x1 );
    };                
};
SDK_VERIFY( class win::crif_table_t, 0x1 );
