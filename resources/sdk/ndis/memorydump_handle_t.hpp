#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [struct NDIS_MEMORYDUMP_HANDLE__]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memorydump_handle_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "NDIS_MEMORYDUMP_HANDLE__.$", 0x4, true, 0xf243ac43b7550c9d );
        SDK_FIXED_SIZE( memorydump_handle_t, 0x4 );
    };                        
};
SDK_VERIFY( struct ndis::memorydump_handle_t, 0x4 );
