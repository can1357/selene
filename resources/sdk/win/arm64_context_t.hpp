#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct _ARM64_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct arm64_context_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "_ARM64_CONTEXT.$", 0x0, true, 0xb824de71892242e7 );
        SDK_FIXED_SIZE( arm64_context_t, 0x0 );
    };                    
};
SDK_VERIFY( struct win::arm64_context_t, 0x0 );
