#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IChannelCallObjectInitialization]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_channel_call_object_initialization_t
    {                                            
                                                 
        SDK_MAGIC_PROPERTIES( "IChannelCallObjectInitialization.$", 0x8, true, 0xf93ef0f3297e227b );
        SDK_FIXED_SIZE( i_channel_call_object_initialization_t, 0x8 );
    };                                           
};
SDK_VERIFY( struct win::i_channel_call_object_initialization_t, 0x8 );
