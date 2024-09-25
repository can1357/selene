#pragma once
#include <sdkgen/support_library.hpp>

namespace ldrp
{
    // [struct _LDRP_LOAD_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct load_context_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "_LDRP_LOAD_CONTEXT.$", 0x0, true, 0xbc7136306bbd8288 );
        SDK_FIXED_SIZE( load_context_t, 0x0 );
    };                   
};
SDK_VERIFY( struct ldrp::load_context_t, 0x0 );
