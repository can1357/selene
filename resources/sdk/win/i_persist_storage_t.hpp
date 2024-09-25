#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPersistStorage]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_persist_storage_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IPersistStorage.$", 0x8, true, 0x6646dbf9f5f0cf33 );
        SDK_FIXED_SIZE( i_persist_storage_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_persist_storage_t, 0x8 );
