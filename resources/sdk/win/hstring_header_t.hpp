#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HSTRING_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hstring_header_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "HSTRING_HEADER.$", 0x18, true, 0x9fa6f80d0beec7b2 );
        SDK_FIXED_SIZE( hstring_header_t, 0x18 );
    };                     
};
SDK_VERIFY( struct win::hstring_header_t, 0x18 );
