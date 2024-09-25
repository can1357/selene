#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct WDFUSBPIPE__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfusbpipe_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "WDFUSBPIPE__.$", 0x4, true, 0x62c7d3e93ff565af );
        SDK_FIXED_SIZE( wdfusbpipe_t, 0x4 );
    };                 
};
SDK_VERIFY( struct wdf::wdfusbpipe_t, 0x4 );
