#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HSTRING__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hstring_t
    {               
                    
        SDK_MAGIC_PROPERTIES( "HSTRING__.$", 0x4, true, 0xddc7209a2be772b7 );
        SDK_FIXED_SIZE( hstring_t, 0x4 );
    };              
};
SDK_VERIFY( struct win::hstring_t, 0x4 );
