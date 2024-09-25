#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_call_t
    {              
                   
        SDK_MAGIC_PROPERTIES( "ICall.$", 0x8, true, 0x1daa9a4e7b575f69 );
        SDK_FIXED_SIZE( i_call_t, 0x8 );
    };             
};
SDK_VERIFY( struct win::i_call_t, 0x8 );
