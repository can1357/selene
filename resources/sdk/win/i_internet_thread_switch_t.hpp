#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInternetThreadSwitch]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_internet_thread_switch_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "IInternetThreadSwitch.$", 0x8, true, 0x59c71778d0e3ffbc );
        SDK_FIXED_SIZE( i_internet_thread_switch_t, 0x8 );
    };                               
};
SDK_VERIFY( struct win::i_internet_thread_switch_t, 0x8 );
