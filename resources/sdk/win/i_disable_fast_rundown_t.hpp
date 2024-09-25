#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IDisableFastRundown]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_disable_fast_rundown_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "IDisableFastRundown.$", 0x8, true, 0x8910bfc37ecfca79 );
        SDK_FIXED_SIZE( i_disable_fast_rundown_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::i_disable_fast_rundown_t, 0x8 );
