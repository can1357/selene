#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInternetPriority]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_internet_priority_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "IInternetPriority.$", 0x8, true, 0xf455e48a8ca5d8f2 );
        SDK_FIXED_SIZE( i_internet_priority_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_internet_priority_t, 0x8 );
