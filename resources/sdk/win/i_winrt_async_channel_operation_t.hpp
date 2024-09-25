#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWinrtAsyncChannelOperation]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_winrt_async_channel_operation_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "IWinrtAsyncChannelOperation.$", 0x8, true, 0x6d499929c6e605ff );
        SDK_FIXED_SIZE( i_winrt_async_channel_operation_t, 0x8 );
    };                                      
};
SDK_VERIFY( struct win::i_winrt_async_channel_operation_t, 0x8 );
