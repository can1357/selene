#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IServerCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_server_call_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "IServerCall.$", 0x8, true, 0xefba9ef1b228bbe9 );
        SDK_FIXED_SIZE( i_server_call_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::i_server_call_t, 0x8 );
