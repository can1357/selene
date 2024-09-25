#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRpcChannelBuffer3]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_rpc_channel_buffer3_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "IRpcChannelBuffer3.$", 0x8, true, 0xd133012cb5678070 );
        SDK_FIXED_SIZE( i_rpc_channel_buffer3_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_rpc_channel_buffer3_t, 0x8 );
