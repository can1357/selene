#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct _ARM_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct arm_context_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "_ARM_CONTEXT.$", 0x0, true, 0x8e837ed99fe65471 );
        SDK_FIXED_SIZE( arm_context_t, 0x0 );
    };                  
};
SDK_VERIFY( struct win::arm_context_t, 0x0 );
