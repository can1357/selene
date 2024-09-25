#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct SS_LIBRARY__]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ss_library_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "SS_LIBRARY__.$", 0x4, true, 0x78fe6cd15dc1684 );
        SDK_FIXED_SIZE( ss_library_t, 0x4 );
    };                 
};
SDK_VERIFY( struct wdf::ss_library_t, 0x4 );
