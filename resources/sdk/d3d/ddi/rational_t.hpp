#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rational_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_RATIONAL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct rational_t             
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t numerator;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Numerator
        _m01 uint32_t denominator;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Denominator
                                  
        SDK_NONVOL_PROPERTIES( "_D3DDDI_RATIONAL.$", 0x8, true, 0x642e2fa8ba0d353b );            
        SDK_FIXED_SIZE( rational_t, 0x8 );            
    };                            
};
#include "magic/rational_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::rational_t, 0x8 );
