#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRuntimeBrokerActivationTestHook]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_runtime_broker_activation_test_hook_t
    {                                             
                                                  
        SDK_MAGIC_PROPERTIES( "IRuntimeBrokerActivationTestHook.$", 0x8, true, 0x3855c3f3cdf18f19 );
        SDK_FIXED_SIZE( i_runtime_broker_activation_test_hook_t, 0x8 );
    };                                            
};
SDK_VERIFY( struct win::i_runtime_broker_activation_test_hook_t, 0x8 );
