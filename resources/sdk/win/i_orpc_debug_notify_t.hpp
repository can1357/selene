#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IOrpcDebugNotify]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_orpc_debug_notify_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "IOrpcDebugNotify.$", 0x8, true, 0xca65ca5f9acac7a9 );
        SDK_FIXED_SIZE( i_orpc_debug_notify_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_orpc_debug_notify_t, 0x8 );
