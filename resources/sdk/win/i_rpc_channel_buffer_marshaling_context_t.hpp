#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRpcChannelBufferMarshalingContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_rpc_channel_buffer_marshaling_context_t
    {                                               
                                                    
        SDK_MAGIC_PROPERTIES( "IRpcChannelBufferMarshalingContext.$", 0x8, true, 0x171ff5d03335749d );
        SDK_FIXED_SIZE( i_rpc_channel_buffer_marshaling_context_t, 0x8 );
    };                                              
};
SDK_VERIFY( struct win::i_rpc_channel_buffer_marshaling_context_t, 0x8 );
