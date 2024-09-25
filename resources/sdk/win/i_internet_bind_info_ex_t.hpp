#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInternetBindInfoEx]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_internet_bind_info_ex_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "IInternetBindInfoEx.$", 0x8, true, 0x809cc9c28bd12542 );
        SDK_FIXED_SIZE( i_internet_bind_info_ex_t, 0x8 );
    };                              
};
SDK_VERIFY( struct win::i_internet_bind_info_ex_t, 0x8 );
