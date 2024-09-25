#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CachedCallEvent]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class cached_call_event_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "CachedCallEvent.$", 0x10, true, 0xf60331f48e49d347 );
        SDK_FIXED_SIZE( cached_call_event_t, 0x10 );
    };                       
};
SDK_VERIFY( class win::cached_call_event_t, 0x10 );
