#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/access_reasons_t.start.hpp"
namespace nt
{
    // [struct _ACCESS_REASONS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct access_reasons_t                
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                 
        _m00 sdk::array<uint32_t, 32> data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Data
                                           
        SDK_NONVOL_PROPERTIES( "_ACCESS_REASONS.$", 0x80, true, 0x8d188654b20ec076 );     
        SDK_FIXED_SIZE( access_reasons_t, 0x80 );     
    };                                     
};
#include "magic/access_reasons_t.end.hpp"
SDK_VERIFY( struct nt::access_reasons_t, 0x80 );
