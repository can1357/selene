#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IBlockingLock]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_blocking_lock_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "IBlockingLock.$", 0x8, true, 0xecd6b069282124cb );
        SDK_FIXED_SIZE( i_blocking_lock_t, 0x8 );
    };                      
};
SDK_VERIFY( struct win::i_blocking_lock_t, 0x8 );
