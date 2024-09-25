#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HENHMETAFILE__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct henhmetafile_t
    {                    
                         
        SDK_NONVOL_PROPERTIES( "HENHMETAFILE__.$", 0x4, true, 0xc6db704950ce332b );
        SDK_FIXED_SIZE( henhmetafile_t, 0x4 );
    };                   
};
SDK_VERIFY( struct win::henhmetafile_t, 0x4 );
