#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [struct NDIS_MINIPORT_HOOK_DRIVER_HANDLE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_hook_driver_handle_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "NDIS_MINIPORT_HOOK_DRIVER_HANDLE__.$", 0x4, true, 0xf6d14e8550ec1b4b );
        SDK_FIXED_SIZE( miniport_hook_driver_handle_t, 0x4 );
    };                                  
};
SDK_VERIFY( struct ndis::miniport_hook_driver_handle_t, 0x4 );
