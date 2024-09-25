#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IBindStatusCallback]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_bind_status_callback_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "IBindStatusCallback.$", 0x8, true, 0xe51c0ca2d2a46658 );
        SDK_FIXED_SIZE( i_bind_status_callback_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::i_bind_status_callback_t, 0x8 );
