#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HACCEL__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct haccel_t
    {              
                   
        SDK_NONVOL_PROPERTIES( "HACCEL__.$", 0x4, true, 0xe3cc666b707418e3 );
        SDK_FIXED_SIZE( haccel_t, 0x4 );
    };             
};
SDK_VERIFY( struct win::haccel_t, 0x4 );
