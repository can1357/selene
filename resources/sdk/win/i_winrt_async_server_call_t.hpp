#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWinrtAsyncServerCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_winrt_async_server_call_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "IWinrtAsyncServerCall.$", 0x8, true, 0x4368fe6ea0a57780 );
        SDK_FIXED_SIZE( i_winrt_async_server_call_t, 0x8 );
    };                                
};
SDK_VERIFY( struct win::i_winrt_async_server_call_t, 0x8 );
