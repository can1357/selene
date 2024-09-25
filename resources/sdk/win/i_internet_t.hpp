#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInternet]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_internet_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "IInternet.$", 0x8, true, 0xf7a1f5ea48493540 );
        SDK_FIXED_SIZE( i_internet_t, 0x8 );
    };                 
};
SDK_VERIFY( struct win::i_internet_t, 0x8 );
