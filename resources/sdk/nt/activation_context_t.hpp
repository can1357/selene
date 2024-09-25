#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _ACTIVATION_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT.$", 0x0, true, 0x889d490cc0fa1aa8 );
        SDK_FIXED_SIZE( activation_context_t, 0x0 );
    };                         
};
SDK_VERIFY( struct nt::activation_context_t, 0x0 );
