#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "points_t.hpp"
#include "../win/rectl_t.hpp"

#include "magic/emrpolydraw16_t.start.hpp"
namespace tag
{
    // [struct tagEMRPOLYDRAW16]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrpolydraw16_t                                  
    {                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                  
        _m00 struct tag::emr_t                   emr;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t                 rcl_bounds;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBounds
        _m02 uint32_t                            cpts;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .cpts
        _m03 sdk::array<struct tag::points_t, 1> apts;        //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .apts
        _m04 sdk::array<uint8_t, 1>              ab_types;    //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .abTypes
                                                            
        SDK_NONVOL_PROPERTIES( "tagEMRPOLYDRAW16.$", 0x24, true, 0x7a1e97864b1e913e );           
        SDK_FIXED_SIZE( emrpolydraw16_t, 0x24 );            
    };                                                      
};
#include "magic/emrpolydraw16_t.end.hpp"
SDK_VERIFY( struct tag::emrpolydraw16_t, 0x24 );
