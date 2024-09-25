#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct POHANDLE__]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pohandle_t
    {                
                     
        SDK_NONVOL_PROPERTIES( "POHANDLE__.$", 0x4, true, 0x673b71db6ed226d6 );
        SDK_FIXED_SIZE( pohandle_t, 0x4 );
    };               
};
SDK_VERIFY( struct nt::pohandle_t, 0x4 );
