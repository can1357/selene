#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "../win/pointl_t.hpp"

#include "magic/emranglearc_t.start.hpp"
namespace tag
{
    // [struct tagEMRANGLEARC]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emranglearc_t                        
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                      
        _m00 struct tag::emr_t    emr;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::pointl_t ptl_center;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ptlCenter
        _m02 uint32_t             n_radius;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .nRadius
        _m03 float                e_start_angle;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .eStartAngle
        _m04 float                e_sweep_angle;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .eSweepAngle
                                                
        SDK_NONVOL_PROPERTIES( "tagEMRANGLEARC.$", 0x1c, true, 0xba61d26eb0ac271c );              
        SDK_FIXED_SIZE( emranglearc_t, 0x1c );              
    };                                          
};
#include "magic/emranglearc_t.end.hpp"
SDK_VERIFY( struct tag::emranglearc_t, 0x1c );
