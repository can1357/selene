#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HMETAFILE__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hmetafile_t
    {                 
                      
        SDK_NONVOL_PROPERTIES( "HMETAFILE__.$", 0x4, true, 0xa986c849e4a5fdf1 );
        SDK_FIXED_SIZE( hmetafile_t, 0x4 );
    };                
};
SDK_VERIFY( struct win::hmetafile_t, 0x4 );
