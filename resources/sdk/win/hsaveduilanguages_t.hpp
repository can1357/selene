#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HSAVEDUILANGUAGES__]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hsaveduilanguages_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "HSAVEDUILANGUAGES__.$", 0x4, true, 0x7658dbda0899d74c );
        SDK_FIXED_SIZE( hsaveduilanguages_t, 0x4 );
    };                        
};
SDK_VERIFY( struct win::hsaveduilanguages_t, 0x4 );
