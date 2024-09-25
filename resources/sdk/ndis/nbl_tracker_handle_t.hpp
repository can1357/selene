#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [struct NDIS_NBL_TRACKER_HANDLE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nbl_tracker_handle_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "NDIS_NBL_TRACKER_HANDLE__.$", 0x4, true, 0xc17ad4dfb19f5224 );
        SDK_FIXED_SIZE( nbl_tracker_handle_t, 0x4 );
    };                         
};
SDK_VERIFY( struct ndis::nbl_tracker_handle_t, 0x4 );
