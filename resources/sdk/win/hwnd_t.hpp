#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HWND__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hwnd_t
    {            
                 
        SDK_NONVOL_PROPERTIES( "HWND__.$", 0x4, true, 0x9a17cb7828f707ee );
        SDK_FIXED_SIZE( hwnd_t, 0x4 );
    };           
};
SDK_VERIFY( struct win::hwnd_t, 0x4 );
