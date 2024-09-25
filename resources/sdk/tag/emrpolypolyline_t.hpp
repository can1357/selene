#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "../win/rectl_t.hpp"
#include "../win/pointl_t.hpp"

#include "magic/emrpolypolyline_t.start.hpp"
namespace tag
{
    // [struct tagEMRPOLYPOLYLINE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrpolypolyline_t                                   
    {                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                     
        _m00 struct tag::emr_t                   emr;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t                 rcl_bounds;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBounds
        _m02 uint32_t                            n_polys;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .nPolys
        _m03 uint32_t                            cptl;           //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .cptl
        _m04 sdk::array<uint32_t, 1>             a_poly_counts;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .aPolyCounts
        _m05 sdk::array<struct win::pointl_t, 1> aptl;           //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .aptl
                                                               
        SDK_NONVOL_PROPERTIES( "tagEMRPOLYPOLYLINE.$", 0x2c, true, 0x5926a869c5a00d5a );              
        SDK_FIXED_SIZE( emrpolypolyline_t, 0x2c );              
    };                                                         
};
#include "magic/emrpolypolyline_t.end.hpp"
SDK_VERIFY( struct tag::emrpolypolyline_t, 0x2c );
