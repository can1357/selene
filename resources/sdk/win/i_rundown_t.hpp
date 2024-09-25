#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRundown]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_rundown_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "IRundown.$", 0x8, true, 0x28ec296b5b60da32 );
        SDK_FIXED_SIZE( i_rundown_t, 0x8 );
    };                
};
SDK_VERIFY( struct win::i_rundown_t, 0x8 );
