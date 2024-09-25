#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xform_t.start.hpp"
namespace tag
{
    // [struct tagXFORM]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct xform_t       
    {                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //               
        _m00 float e_m11;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .eM11
        _m01 float e_m12;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .eM12
        _m02 float e_m21;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .eM21
        _m03 float e_m22;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .eM22
        _m04 float e_dx;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .eDx
        _m05 float e_dy;   //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .eDy
                         
        SDK_NONVOL_PROPERTIES( "tagXFORM.$", 0x18, true, 0x69a218becb521d36 );      
        SDK_FIXED_SIZE( xform_t, 0x18 );      
    };                   
};
#include "magic/xform_t.end.hpp"
SDK_VERIFY( struct tag::xform_t, 0x18 );
