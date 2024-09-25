#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [struct KDefaultRegion]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct k_default_region_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "KDefaultRegion.$", 0x1, true, 0x4796f8cb6dd405cf );
        SDK_FIXED_SIZE( k_default_region_t, 0x1 );
    };                       
};
SDK_VERIFY( struct ndis::k_default_region_t, 0x1 );
