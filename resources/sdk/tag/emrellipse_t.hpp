#pragma once
#include <sdkgen/support_library.hpp>
#include "emr_t.hpp"
#include "../win/rectl_t.hpp"

#include "magic/emrellipse_t.start.hpp"
namespace tag
{
    // [struct tagEMRELLIPSE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct emrellipse_t                  
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                               
        _m00 struct tag::emr_t   emr;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .emr
        _m01 struct win::rectl_t rcl_box;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .rclBox
                                         
        SDK_NONVOL_PROPERTIES( "tagEMRELLIPSE.$", 0x18, true, 0x2c8c6fe25b71e974 );        
        SDK_FIXED_SIZE( emrellipse_t, 0x18 );        
    };                                   
};
#include "magic/emrellipse_t.end.hpp"
SDK_VERIFY( struct tag::emrellipse_t, 0x18 );
