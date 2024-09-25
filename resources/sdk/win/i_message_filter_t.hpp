#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMessageFilter]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_message_filter_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IMessageFilter.$", 0x8, true, 0x9de94dc2c5017a5c );
        SDK_FIXED_SIZE( i_message_filter_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_message_filter_t, 0x8 );
