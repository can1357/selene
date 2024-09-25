#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRegisterSuspendNotify]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_register_suspend_notify_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "IRegisterSuspendNotify.$", 0x8, true, 0xaee58f54819fda46 );
        SDK_FIXED_SIZE( i_register_suspend_notify_t, 0x8 );
    };                                
};
SDK_VERIFY( struct win::i_register_suspend_notify_t, 0x8 );
