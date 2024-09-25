#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _VOLUME_DISK_EXTENTS]
    // => WDK 10
    //
    struct volume_disk_extents_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "_VOLUME_DISK_EXTENTS.$", 0x0, false, 0xe44d4ff9ec82cd07 );
        SDK_FIXED_SIZE( volume_disk_extents_t, 0x0 );
    };                          
};
SDK_VERIFY( struct nt::volume_disk_extents_t, 0x0 );
