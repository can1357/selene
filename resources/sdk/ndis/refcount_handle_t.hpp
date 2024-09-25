#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [struct NDIS_REFCOUNT_HANDLE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct refcount_handle_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "NDIS_REFCOUNT_HANDLE__.$", 0x4, true, 0x40df0b14a2d695a8 );
        SDK_FIXED_SIZE( refcount_handle_t, 0x4 );
    };                      
};
SDK_VERIFY( struct ndis::refcount_handle_t, 0x4 );
