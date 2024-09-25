#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInternetBindInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_internet_bind_info_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IInternetBindInfo.$", 0x8, true, 0xaa4948aa47c40cad );
        SDK_FIXED_SIZE( i_internet_bind_info_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_internet_bind_info_t, 0x8 );
