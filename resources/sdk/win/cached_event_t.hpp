#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CachedEvent]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class cached_event_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "CachedEvent.$", 0x10, true, 0x8193e03f6d8c19d1 );
        SDK_FIXED_SIZE( cached_event_t, 0x10 );
    };                  
};
SDK_VERIFY( class win::cached_event_t, 0x10 );
