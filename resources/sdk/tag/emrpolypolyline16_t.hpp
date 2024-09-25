#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "points_t.hpp"
#include "../win/rectl_t.hpp"

#include "magic/emrpolypolyline16_t.start.hpp"
namespace tag
{
    // [struct tagEMRPOLYPOLYLINE16]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrpolypolyline16_t                                 
    {                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                     
        _m00 struct tag::emr_t                   emr;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t                 rcl_bounds;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBounds
        _m02 uint32_t                            n_polys;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .nPolys
        _m03 uint32_t                            cpts;           //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .cpts
        _m04 sdk::array<uint32_t, 1>             a_poly_counts;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .aPolyCounts
        _m05 sdk::array<struct tag::points_t, 1> apts;           //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .apts
                                                               
        SDK_NONVOL_PROPERTIES( "tagEMRPOLYPOLYLINE16.$", 0x28, true, 0xbd852e364bf061cb );              
        SDK_FIXED_SIZE( emrpolypolyline16_t, 0x28 );              
    };                                                         
};
#include "magic/emrpolypolyline16_t.end.hpp"
SDK_VERIFY( struct tag::emrpolypolyline16_t, 0x28 );
