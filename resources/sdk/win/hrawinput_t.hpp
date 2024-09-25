#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HRAWINPUT__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hrawinput_t
    {                 
                      
        SDK_MAGIC_PROPERTIES( "HRAWINPUT__.$", 0x4, true, 0x28c3c0676a0a7ff );
        SDK_FIXED_SIZE( hrawinput_t, 0x4 );
    };                
};
SDK_VERIFY( struct win::hrawinput_t, 0x4 );
