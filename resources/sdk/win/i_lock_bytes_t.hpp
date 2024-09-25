#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ILockBytes]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_lock_bytes_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "ILockBytes.$", 0x8, true, 0x43a77e091a795a75 );
        SDK_FIXED_SIZE( i_lock_bytes_t, 0x8 );
    };                   
};
SDK_VERIFY( struct win::i_lock_bytes_t, 0x8 );
