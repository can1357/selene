#pragma once
#include <sdkgen/support_library.hpp>

namespace etw
{
    // [struct _ETW_EVENT_CALLBACK_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_callback_context_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "_ETW_EVENT_CALLBACK_CONTEXT.$", 0x0, true, 0x9a7f2fc8fed8a426 );
        SDK_FIXED_SIZE( event_callback_context_t, 0x0 );
    };                             
};
SDK_VERIFY( struct etw::event_callback_context_t, 0x0 );
