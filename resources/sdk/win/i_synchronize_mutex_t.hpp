#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISynchronizeMutex]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_synchronize_mutex_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "ISynchronizeMutex.$", 0x8, true, 0x3f27137231733a8c );
        SDK_FIXED_SIZE( i_synchronize_mutex_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_synchronize_mutex_t, 0x8 );
