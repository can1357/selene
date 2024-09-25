#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct CachedCallEventHandleTraits]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cached_call_event_handle_traits_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "CachedCallEventHandleTraits.$", 0x1, true, 0xa6354e20f91f02f5 );
        SDK_FIXED_SIZE( cached_call_event_handle_traits_t, 0x1 );
    };                                      
};
SDK_VERIFY( struct win::cached_call_event_handle_traits_t, 0x1 );
