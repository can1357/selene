#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct SERVICE_STATUS_HANDLE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_status_handle_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "SERVICE_STATUS_HANDLE__.$", 0x4, true, 0xb5639bffdc089756 );
        SDK_FIXED_SIZE( service_status_handle_t, 0x4 );
    };                            
};
SDK_VERIFY( struct win::service_status_handle_t, 0x4 );
