#pragma once
#include <sdkgen/support_library.hpp>
#include "pointfx_t.hpp"

#include "magic/ttpolycurve_t.start.hpp"
namespace tag
{
    // [struct tagTTPOLYCURVE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ttpolycurve_t                                 
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                               
        _m00 uint16_t                             w_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .wType
        _m01 uint16_t                             cpfx;    //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .cpfx
        _m02 sdk::array<struct tag::pointfx_t, 1> apfx;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .apfx
                                                         
        SDK_NONVOL_PROPERTIES( "tagTTPOLYCURVE.$", 0xc, true, 0x83f9a90080364001 );       
        SDK_FIXED_SIZE( ttpolycurve_t, 0xc );            
    };                                                   
};
#include "magic/ttpolycurve_t.end.hpp"
SDK_VERIFY( struct tag::ttpolycurve_t, 0xc );
