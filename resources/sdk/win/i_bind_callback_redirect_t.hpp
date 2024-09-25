#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IBindCallbackRedirect]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_bind_callback_redirect_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "IBindCallbackRedirect.$", 0x8, true, 0x2c575c62f2d585f1 );
        SDK_FIXED_SIZE( i_bind_callback_redirect_t, 0x8 );
    };                               
};
SDK_VERIFY( struct win::i_bind_callback_redirect_t, 0x8 );
