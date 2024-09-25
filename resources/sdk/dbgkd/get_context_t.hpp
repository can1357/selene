#pragma once
#include <sdkgen/support_library.hpp>

namespace dbgkd
{
    // [struct _DBGKD_GET_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct get_context_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "_DBGKD_GET_CONTEXT.$", 0x4, true, 0x2d97c7767a51b07e );
        SDK_FIXED_SIZE( get_context_t, 0x4 );
    };                  
};
SDK_VERIFY( struct dbgkd::get_context_t, 0x4 );
