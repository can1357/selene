#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CONTAINER_ID_INFO]
    // => WDK 10
    //
    struct container_id_info_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "_CONTAINER_ID_INFO.$", 0x0, false, 0xcb93b731674c47f4 );
        SDK_FIXED_SIZE( container_id_info_t, 0x0 );
    };                        
};
SDK_VERIFY( struct nt::container_id_info_t, 0x0 );
