#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IFillLockBytes]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_fill_lock_bytes_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IFillLockBytes.$", 0x8, true, 0x19ec7a191bc78ea1 );
        SDK_FIXED_SIZE( i_fill_lock_bytes_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_fill_lock_bytes_t, 0x8 );
