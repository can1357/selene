#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IOplockStorage]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_oplock_storage_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IOplockStorage.$", 0x8, true, 0xfa8d8d671d2b36cb );
        SDK_FIXED_SIZE( i_oplock_storage_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_oplock_storage_t, 0x8 );
