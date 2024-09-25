#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMultiQI]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_multi_qi_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "IMultiQI.$", 0x8, true, 0x8e56bb2415fbe6d4 );
        SDK_FIXED_SIZE( i_multi_qi_t, 0x8 );
    };                 
};
SDK_VERIFY( struct win::i_multi_qi_t, 0x8 );
