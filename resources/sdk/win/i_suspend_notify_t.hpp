#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISuspendNotify]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_suspend_notify_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "ISuspendNotify.$", 0x8, true, 0x84996d2c2ef1e21b );
        SDK_FIXED_SIZE( i_suspend_notify_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_suspend_notify_t, 0x8 );
