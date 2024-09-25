#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IAsyncRpcChannelBuffer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_async_rpc_channel_buffer_t
    {                                  
                                       
        SDK_MAGIC_PROPERTIES( "IAsyncRpcChannelBuffer.$", 0x8, true, 0x731c2230dfdbe743 );
        SDK_FIXED_SIZE( i_async_rpc_channel_buffer_t, 0x8 );
    };                                 
};
SDK_VERIFY( struct win::i_async_rpc_channel_buffer_t, 0x8 );
