#pragma once
#include <sdkgen/support_library.hpp>

namespace etw
{
    // [struct _ETW_SOFT_RESTART_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct soft_restart_context_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "_ETW_SOFT_RESTART_CONTEXT.$", 0x0, true, 0x1b1f97cbb90e8762 );
        SDK_FIXED_SIZE( soft_restart_context_t, 0x0 );
    };                           
};
SDK_VERIFY( struct etw::soft_restart_context_t, 0x0 );
