#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _DISK_EXTENT]
    // => WDK 10
    //
    struct disk_extent_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "_DISK_EXTENT.$", 0x0, false, 0x5fb8b728654b5b97 );
        SDK_FIXED_SIZE( disk_extent_t, 0x0 );
    };                  
};
SDK_VERIFY( struct nt::disk_extent_t, 0x0 );
