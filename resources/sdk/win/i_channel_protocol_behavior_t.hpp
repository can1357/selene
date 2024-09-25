#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IChannelProtocolBehavior]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_channel_protocol_behavior_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "IChannelProtocolBehavior.$", 0x8, true, 0xf9e07788316e40a0 );
        SDK_FIXED_SIZE( i_channel_protocol_behavior_t, 0x8 );
    };                                  
};
SDK_VERIFY( struct win::i_channel_protocol_behavior_t, 0x8 );
