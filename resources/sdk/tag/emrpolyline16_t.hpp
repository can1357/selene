#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "points_t.hpp"
#include "../win/rectl_t.hpp"

#include "magic/emrpolyline16_t.start.hpp"
namespace tag
{
    // [struct tagEMRPOLYLINE16]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrpolyline16_t                                  
    {                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                  
        _m00 struct tag::emr_t                   emr;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t                 rcl_bounds;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBounds
        _m02 uint32_t                            cpts;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .cpts
        _m03 sdk::array<struct tag::points_t, 1> apts;        //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .apts
                                                            
        SDK_NONVOL_PROPERTIES( "tagEMRPOLYLINE16.$", 0x20, true, 0xaee9c4f3ea3fd0f9 );           
        SDK_FIXED_SIZE( emrpolyline16_t, 0x20 );            
    };                                                      
};
#include "magic/emrpolyline16_t.end.hpp"
SDK_VERIFY( struct tag::emrpolyline16_t, 0x20 );
