#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HSYNTHETICPOINTERDEVICE__]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hsyntheticpointerdevice_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "HSYNTHETICPOINTERDEVICE__.$", 0x4, true, 0x26072d8dcc543bd9 );
        SDK_FIXED_SIZE( hsyntheticpointerdevice_t, 0x4 );
    };                              
};
SDK_VERIFY( struct win::hsyntheticpointerdevice_t, 0x4 );
