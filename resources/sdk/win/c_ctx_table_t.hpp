#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CCtxTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_ctx_table_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "CCtxTable.$", 0x1, true, 0xf5a5c3d65bbd9bfd );
        SDK_FIXED_SIZE( c_ctx_table_t, 0x1 );
    };                 
};
SDK_VERIFY( class win::c_ctx_table_t, 0x1 );
