#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IFastRundown]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_fast_rundown_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IFastRundown.$", 0x8, true, 0xb1d84707a6a6e439 );
        SDK_FIXED_SIZE( i_fast_rundown_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_fast_rundown_t, 0x8 );
