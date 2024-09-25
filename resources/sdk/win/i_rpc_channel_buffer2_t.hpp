#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRpcChannelBuffer2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_rpc_channel_buffer2_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "IRpcChannelBuffer2.$", 0x8, true, 0xb484e4293972cf68 );
        SDK_FIXED_SIZE( i_rpc_channel_buffer2_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_rpc_channel_buffer2_t, 0x8 );
