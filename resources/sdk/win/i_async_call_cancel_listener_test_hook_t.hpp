#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IAsyncCallCancelListenerTestHook]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_async_call_cancel_listener_test_hook_t
    {                                              
                                                   
        SDK_MAGIC_PROPERTIES( "IAsyncCallCancelListenerTestHook.$", 0x8, true, 0x893c5ee5884fe7ff );
        SDK_FIXED_SIZE( i_async_call_cancel_listener_test_hook_t, 0x8 );
    };                                             
};
SDK_VERIFY( struct win::i_async_call_cancel_listener_test_hook_t, 0x8 );
