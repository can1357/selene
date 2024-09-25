#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IBindCtx]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_bind_ctx_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "IBindCtx.$", 0x8, true, 0xa7f0915ff91eaa51 );
        SDK_FIXED_SIZE( i_bind_ctx_t, 0x8 );
    };                 
};
SDK_VERIFY( struct win::i_bind_ctx_t, 0x8 );
