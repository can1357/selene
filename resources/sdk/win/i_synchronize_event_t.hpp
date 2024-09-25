#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ISynchronizeEvent]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_synchronize_event_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "ISynchronizeEvent.$", 0x8, true, 0xc65a68621385a3ca );
        SDK_FIXED_SIZE( i_synchronize_event_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_synchronize_event_t, 0x8 );
