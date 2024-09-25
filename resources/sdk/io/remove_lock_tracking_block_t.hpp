#pragma once
#include <sdkgen/support_library.hpp>

namespace io
{
    // [struct _IO_REMOVE_LOCK_TRACKING_BLOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct remove_lock_tracking_block_t
    {                                  
                                       
        SDK_MAGIC_PROPERTIES( "_IO_REMOVE_LOCK_TRACKING_BLOCK.$", 0x0, true, 0x726926518431315a );
        SDK_FIXED_SIZE( remove_lock_tracking_block_t, 0x0 );
    };                                 
};
SDK_VERIFY( struct io::remove_lock_tracking_block_t, 0x0 );
