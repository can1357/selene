#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "../win/rectl_t.hpp"
#include "../win/pointl_t.hpp"

#include "magic/emrpolyline_t.start.hpp"
namespace tag
{
    // [struct tagEMRPOLYLINE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrpolyline_t                                    
    {                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                  
        _m00 struct tag::emr_t                   emr;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t                 rcl_bounds;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBounds
        _m02 uint32_t                            cptl;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .cptl
        _m03 sdk::array<struct win::pointl_t, 1> aptl;        //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .aptl
                                                            
        SDK_NONVOL_PROPERTIES( "tagEMRPOLYLINE.$", 0x24, true, 0xd1f32fd39d8af31f );           
        SDK_FIXED_SIZE( emrpolyline_t, 0x24 );              
    };                                                      
};
#include "magic/emrpolyline_t.end.hpp"
SDK_VERIFY( struct tag::emrpolyline_t, 0x24 );
