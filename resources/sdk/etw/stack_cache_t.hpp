#pragma once
#include <sdkgen/support_library.hpp>

namespace etw
{
    // [struct _ETW_STACK_CACHE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stack_cache_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "_ETW_STACK_CACHE.$", 0x0, true, 0xb188e02764f3ac05 );
        SDK_FIXED_SIZE( stack_cache_t, 0x0 );
    };                  
};
SDK_VERIFY( struct etw::stack_cache_t, 0x0 );
