#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRuntimeBroker]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_runtime_broker_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IRuntimeBroker.$", 0x8, true, 0x9ab8cfef2403a4f2 );
        SDK_FIXED_SIZE( i_runtime_broker_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_runtime_broker_t, 0x8 );
