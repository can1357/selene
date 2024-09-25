#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HPSS__]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hpss_t
    {            
                 
        SDK_MAGIC_PROPERTIES( "HPSS__.$", 0x4, true, 0xf0470bf82705c9ca );
        SDK_FIXED_SIZE( hpss_t, 0x4 );
    };           
};
SDK_VERIFY( struct win::hpss_t, 0x4 );
