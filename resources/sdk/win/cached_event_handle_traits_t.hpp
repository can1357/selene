#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct CachedEventHandleTraits]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cached_event_handle_traits_t
    {                                  
                                       
        SDK_MAGIC_PROPERTIES( "CachedEventHandleTraits.$", 0x1, true, 0x3db9096539f7bd95 );
        SDK_FIXED_SIZE( cached_event_handle_traits_t, 0x1 );
    };                                 
};
SDK_VERIFY( struct win::cached_event_handle_traits_t, 0x1 );
