#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IChannelHandleMarshal]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_channel_handle_marshal_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "IChannelHandleMarshal.$", 0x8, true, 0x6e403626f12382db );
        SDK_FIXED_SIZE( i_channel_handle_marshal_t, 0x8 );
    };                               
};
SDK_VERIFY( struct win::i_channel_handle_marshal_t, 0x8 );
