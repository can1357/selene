#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct EventHandleWrapperApiTypes]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_handle_wrapper_api_types_t
    {                                      
                                           
        SDK_MAGIC_PROPERTIES( "EventHandleWrapperApiTypes.$", 0x1, true, 0x25dcf266dd77639f );
        SDK_FIXED_SIZE( event_handle_wrapper_api_types_t, 0x1 );
    };                                     
};
SDK_VERIFY( struct win::event_handle_wrapper_api_types_t, 0x1 );
