#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct _AMD64_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct amd64_context_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "_AMD64_CONTEXT.$", 0x0, true, 0x2b38cba63dac15a2 );
        SDK_FIXED_SIZE( amd64_context_t, 0x0 );
    };                    
};
SDK_VERIFY( struct win::amd64_context_t, 0x0 );
