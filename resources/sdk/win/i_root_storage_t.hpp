#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRootStorage]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_root_storage_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IRootStorage.$", 0x8, true, 0x155c61037afafb3b );
        SDK_FIXED_SIZE( i_root_storage_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_root_storage_t, 0x8 );
