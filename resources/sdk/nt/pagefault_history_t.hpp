#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _PAGEFAULT_HISTORY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pagefault_history_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "_PAGEFAULT_HISTORY.$", 0x0, true, 0x786625d9e0f78809 );
        SDK_FIXED_SIZE( pagefault_history_t, 0x0 );
    };                        
};
SDK_VERIFY( struct nt::pagefault_history_t, 0x0 );
