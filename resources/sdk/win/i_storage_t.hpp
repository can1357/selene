#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IStorage]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_storage_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "IStorage.$", 0x8, true, 0xfff142d125417439 );
        SDK_FIXED_SIZE( i_storage_t, 0x8 );
    };                
};
SDK_VERIFY( struct win::i_storage_t, 0x8 );
