#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IBindStatusCallbackEx]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_bind_status_callback_ex_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "IBindStatusCallbackEx.$", 0x8, true, 0x67cda6250fd5087a );
        SDK_FIXED_SIZE( i_bind_status_callback_ex_t, 0x8 );
    };                                
};
SDK_VERIFY( struct win::i_bind_status_callback_ex_t, 0x8 );
