#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IClientCallChannel]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_client_call_channel_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "IClientCallChannel.$", 0x8, true, 0x99c00525bb068b0d );
        SDK_FIXED_SIZE( i_client_call_channel_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_client_call_channel_t, 0x8 );
