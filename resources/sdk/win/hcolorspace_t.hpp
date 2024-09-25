#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HCOLORSPACE__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hcolorspace_t
    {                   
                        
        SDK_NONVOL_PROPERTIES( "HCOLORSPACE__.$", 0x4, true, 0x7d27cf7dcb84cec8 );
        SDK_FIXED_SIZE( hcolorspace_t, 0x4 );
    };                  
};
SDK_VERIFY( struct win::hcolorspace_t, 0x4 );
