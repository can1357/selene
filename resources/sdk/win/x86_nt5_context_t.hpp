#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct _X86_NT5_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct x86_nt5_context_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "_X86_NT5_CONTEXT.$", 0x0, true, 0x87c874dc71083239 );
        SDK_FIXED_SIZE( x86_nt5_context_t, 0x0 );
    };                      
};
SDK_VERIFY( struct win::x86_nt5_context_t, 0x0 );
