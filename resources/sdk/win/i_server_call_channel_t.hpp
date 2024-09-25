#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IServerCallChannel]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_server_call_channel_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "IServerCallChannel.$", 0x8, true, 0x700c5273c24e6db8 );
        SDK_FIXED_SIZE( i_server_call_channel_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_server_call_channel_t, 0x8 );
