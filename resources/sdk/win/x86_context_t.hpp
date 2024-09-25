#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct _X86_CONTEXT]
    // => Windows 10 v1607
    //
    struct x86_context_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "_X86_CONTEXT.$", 0x0, false, 0xb086eb65e330e517 );
        SDK_FIXED_SIZE( x86_context_t, 0x0 );
    };                  
};
SDK_VERIFY( struct win::x86_context_t, 0x0 );
