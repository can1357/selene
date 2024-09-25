#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IChannelHook]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_channel_hook_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IChannelHook.$", 0x8, true, 0x4d748d779c660923 );
        SDK_FIXED_SIZE( i_channel_hook_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_channel_hook_t, 0x8 );
