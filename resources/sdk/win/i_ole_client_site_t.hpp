#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IOleClientSite]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_ole_client_site_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IOleClientSite.$", 0x8, true, 0x9ac907f375c130ff );
        SDK_FIXED_SIZE( i_ole_client_site_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_ole_client_site_t, 0x8 );
