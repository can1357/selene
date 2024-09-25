#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HWINEVENTHOOK__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hwineventhook_t
    {                     
                          
        SDK_NONVOL_PROPERTIES( "HWINEVENTHOOK__.$", 0x4, true, 0x15b1ccd4264db81 );
        SDK_FIXED_SIZE( hwineventhook_t, 0x4 );
    };                    
};
SDK_VERIFY( struct win::hwineventhook_t, 0x4 );
