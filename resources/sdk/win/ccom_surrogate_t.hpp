#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CCOMSurrogate]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class ccom_surrogate_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "CCOMSurrogate.$", 0x1, true, 0x6ef02e51d080146c );
        SDK_FIXED_SIZE( ccom_surrogate_t, 0x1 );
    };                    
};
SDK_VERIFY( class win::ccom_surrogate_t, 0x1 );
