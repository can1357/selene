#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IProgressNotify]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_progress_notify_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IProgressNotify.$", 0x8, true, 0x76ebdbb8cf7a313e );
        SDK_FIXED_SIZE( i_progress_notify_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_progress_notify_t, 0x8 );
