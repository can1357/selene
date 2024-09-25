#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "../win/rectl_t.hpp"
#include "../win/pointl_t.hpp"

#include "magic/emrpolydraw_t.start.hpp"
namespace tag
{
    // [struct tagEMRPOLYDRAW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrpolydraw_t                                    
    {                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                  
        _m00 struct tag::emr_t                   emr;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t                 rcl_bounds;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBounds
        _m02 uint32_t                            cptl;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .cptl
        _m03 sdk::array<struct win::pointl_t, 1> aptl;        //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .aptl
        _m04 sdk::array<uint8_t, 1>              ab_types;    //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .abTypes
                                                            
        SDK_NONVOL_PROPERTIES( "tagEMRPOLYDRAW.$", 0x28, true, 0x234e2094097393b1 );           
        SDK_FIXED_SIZE( emrpolydraw_t, 0x28 );              
    };                                                      
};
#include "magic/emrpolydraw_t.end.hpp"
SDK_VERIFY( struct tag::emrpolydraw_t, 0x28 );
