#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [struct NDIS_EVENT_LOG_HANDLE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_log_handle_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "NDIS_EVENT_LOG_HANDLE__.$", 0x4, true, 0x569d317513e67630 );
        SDK_FIXED_SIZE( event_log_handle_t, 0x4 );
    };                       
};
SDK_VERIFY( struct ndis::event_log_handle_t, 0x4 );
