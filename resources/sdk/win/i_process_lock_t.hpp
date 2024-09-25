#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IProcessLock]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_process_lock_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "IProcessLock.$", 0x8, true, 0xd0f3775ba294602 );
        SDK_FIXED_SIZE( i_process_lock_t, 0x8 );
    };                     
};
SDK_VERIFY( struct win::i_process_lock_t, 0x8 );
