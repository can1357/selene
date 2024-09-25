#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IChannelWrapper]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_channel_wrapper_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IChannelWrapper.$", 0x8, true, 0x211035a2d7e30785 );
        SDK_FIXED_SIZE( i_channel_wrapper_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_channel_wrapper_t, 0x8 );
