#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CCtxHook]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_ctx_hook_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "CCtxHook.$", 0x8, true, 0x77c57d97ca23ab8 );
        SDK_FIXED_SIZE( c_ctx_hook_t, 0x8 );
    };                
};
SDK_VERIFY( class win::c_ctx_hook_t, 0x8 );
