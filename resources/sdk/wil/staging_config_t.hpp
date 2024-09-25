#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct wil_StagingConfig]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct staging_config_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "wil_StagingConfig.$", 0x0, true, 0xd3ec6a5967d2815 );
        SDK_FIXED_SIZE( staging_config_t, 0x0 );
    };                     
};
SDK_VERIFY( struct wil::staging_config_t, 0x0 );
