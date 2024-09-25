#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IGetBindHandle]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_get_bind_handle_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IGetBindHandle.$", 0x8, true, 0x84b555bc02fbbbde );
        SDK_FIXED_SIZE( i_get_bind_handle_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_get_bind_handle_t, 0x8 );
