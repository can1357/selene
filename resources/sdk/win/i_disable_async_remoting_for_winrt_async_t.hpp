#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IDisableAsyncRemotingForWinrtAsync]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_disable_async_remoting_for_winrt_async_t
    {                                                
                                                     
        SDK_MAGIC_PROPERTIES( "IDisableAsyncRemotingForWinrtAsync.$", 0x8, true, 0x59e5e7861432ba16 );
        SDK_FIXED_SIZE( i_disable_async_remoting_for_winrt_async_t, 0x8 );
    };                                               
};
SDK_VERIFY( struct win::i_disable_async_remoting_for_winrt_async_t, 0x8 );
