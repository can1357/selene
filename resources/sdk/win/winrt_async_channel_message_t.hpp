#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class WinrtAsyncChannelMessage]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class winrt_async_channel_message_t
    {                                  
                                       
        SDK_MAGIC_PROPERTIES( "WinrtAsyncChannelMessage.$", 0x40, true, 0xe9b95b80f008d494 );
        SDK_FIXED_SIZE( winrt_async_channel_message_t, 0x40 );
    };                                 
};
SDK_VERIFY( class win::winrt_async_channel_message_t, 0x40 );
