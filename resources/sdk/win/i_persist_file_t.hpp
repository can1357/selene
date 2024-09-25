#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPersistFile]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_persist_file_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IPersistFile.$", 0x8, true, 0x975a894864fc8fa4 );
        SDK_FIXED_SIZE( i_persist_file_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_persist_file_t, 0x8 );
