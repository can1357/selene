#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HSTRING_BUFFER__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hstring_buffer_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "HSTRING_BUFFER__.$", 0x4, true, 0xdb03b3b6d2fa10b5 );
        SDK_FIXED_SIZE( hstring_buffer_t, 0x4 );
    };                     
};
SDK_VERIFY( struct win::hstring_buffer_t, 0x4 );
