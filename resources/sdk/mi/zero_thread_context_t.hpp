#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [struct _MI_ZERO_THREAD_CONTEXT]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct zero_thread_context_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "_MI_ZERO_THREAD_CONTEXT.$", 0x0, true, 0xfe5a060857b56d65 );
        SDK_FIXED_SIZE( zero_thread_context_t, 0x0 );
    };                          
};
SDK_VERIFY( struct mi::zero_thread_context_t, 0x0 );
