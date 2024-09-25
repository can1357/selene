#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMessageDispatcher]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_message_dispatcher_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "IMessageDispatcher.$", 0x8, true, 0x64e60d98aa6a5e02 );
        SDK_FIXED_SIZE( i_message_dispatcher_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_message_dispatcher_t, 0x8 );
